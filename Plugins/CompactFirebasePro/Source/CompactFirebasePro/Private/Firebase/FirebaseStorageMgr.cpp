//Publisher: stephen, Intended publishing: 2021
//#pragma once
#include "FirebaseStorageMgr.h"
#include "firebase/app.h"
#include "FirebaseProxy.h"

UStorageRequestUnion::UStorageRequestUnion(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
}

UStorageController::UStorageController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
}

void UStorageController::Pause()
{
#if PLATFORM_WINDOWS
	Controller.Pause();
#endif
}

void UStorageController::Resume()
{
#if PLATFORM_WINDOWS
	Controller.Resume();
#endif
}

void UStorageController::Cancel()
{
#if PLATFORM_WINDOWS
	Controller.Cancel();
#endif
}

bool UStorageController::IsValidTransfer()
{
#if PLATFORM_WINDOWS
	return Controller.is_valid();
#endif
	return false;
}

bool UStorageController::IsPaused()
{
#if PLATFORM_WINDOWS
	return Controller.is_paused();
#endif
	return false;
}

float UStorageController::GetProgress()
{
#if PLATFORM_WINDOWS
	if (!Controller.is_valid() || Controller.total_byte_count() <= 0)
	{
		return 0.f;
	}
	return (float)((double)Controller.bytes_transferred() / (double)Controller.total_byte_count());
#endif
	return 0.f;
}

int32 UStorageController::GetTransferedBytes()
{
#if PLATFORM_WINDOWS
	return Controller.bytes_transferred();
#endif
	return 0;
}

int32 UStorageController::GetTotalBytes()
{
#if PLATFORM_WINDOWS
	return Controller.total_byte_count();
#endif
	return 0;
}

bool UStorageController::IsTransferring()
{ 
#if PLATFORM_WINDOWS
	return Controller.is_valid() && bTransferring;
#endif
	return false;
}

void UStorageController::Clear()
{
#if PLATFORM_WINDOWS
	if (Controller.is_valid())
	{
		Controller.Cancel();
	}
#endif
}


UFirebaseStorageMgr::UFirebaseStorageMgr(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	
}

void UFirebaseStorageMgr::OnTick(float DeltaTime)
{
#if PLATFORM_WINDOWS
	if (PendingReqData && PendingReqData->bPendingResponse && !PendingReqData->bLock)
	{
		PendingReqData->Timer += DeltaTime;
		if (PendingReqData->Timer >= RequestTimeout)
		{
			/*
			PendingReqData->Callback.ExecuteIfBound(
				-1,
				TEXT("Request time out, please check network to firebase!"));

			PendingReqData->bPendingResponse = false;
			PendingReqData->bDone = false;
			PendingReqData->Timer = 0;
			*/
		}

		if (PendingReqData->bDone)
		{
			PendingReqData->Callback.ExecuteIfBound(
				PendingReqData->RetCode, 
				PendingReqData->ErrorMsg);

			PendingReqData->bPendingResponse = false;
			PendingReqData->bDone = false;
			if (PendingReqData->OperType == EFirestoreStroageOper::EFSO_Download && DownloadController)
			{
				DownloadController->bTransferring = false;
			}
			if (PendingReqData->OperType == EFirestoreStroageOper::EFSO_Upload && UploadController)
			{
				UploadController->bTransferring = false;
			}
			PendingReqData->OperType = EFirestoreStroageOper::EFSO_None;
		}
	}
#endif
}

void UFirebaseStorageMgr::OnClear()
{
#if PLATFORM_WINDOWS
	if (PendingReqData)
	{
		PendingReqData = NULL;
	}
	if (DownloadController && DownloadController->IsValidTransfer())
	{
		DownloadController->Cancel();
		DownloadController = NULL;
	}
	if (UploadController && UploadController->IsValidTransfer())
	{
		UploadController->Cancel();
		UploadController = NULL;
	}
#endif
}

void UFirebaseStorageMgr::SetupController()
{
	if (DownloadController == NULL)
	{
		DownloadController = NewObject<UStorageController>(this);
	}
	if (UploadController == NULL)
	{
		UploadController = NewObject<UStorageController>(this);
	}
}

void UFirebaseStorageMgr::ResetRequestData(EFirestoreStroageOper OperType)
{
	if (PendingReqData == NULL) 
	{
		PendingReqData = NewObject<UStorageRequestUnion>(this);
		//PendingReqData->AddToRoot();
	}
	if (PendingReqData)
	{
		PendingReqData->Timer = 0;
		PendingReqData->bPendingResponse = true;
		PendingReqData->bDone = false;
		PendingReqData->RetCode = 0;
		PendingReqData->OperType = OperType;
	}
}

#if PLATFORM_WINDOWS

firebase::storage::Storage* UFirebaseStorageMgr::GetFirebaseStorage()
{
	if (AFirebaseProxy* Proxy = Cast<AFirebaseProxy>(GetOuter()))
	{
		if (Proxy->FirebaseApp == NULL)
		{
			UE_LOG(LogTemp, Error, TEXT("UFirebaseStorageMgr::GetFirebaseStorage fail, FirebaseApp is null"));
			return NULL;
		}
		firebase::storage::Storage* FirebaseStorage = firebase::storage::Storage::GetInstance(Proxy->FirebaseApp);
		return FirebaseStorage;
	}
	return NULL;
}

void OnUploadRequestCompleted(const firebase::Future<firebase::storage::Metadata>& FutureResp, void* UserData)
{
	int32 RetCode = -1;
	FString Error = TEXT("Firebase Auth Future Status is invalid!");

	if (FutureResp.status() == firebase::FutureStatus::kFutureStatusInvalid)
	{
		UE_LOG(LogTemp, Log, TEXT("Error: %s"), *Error);
	}
	else
	{
		RetCode = FutureResp.error();
		Error = UTF8_TO_TCHAR(FutureResp.error_message());
	}

	if (FutureResp.error() == firebase::storage::kErrorNone)
	{
		// Metadata contains file metadata such as size, content-type, and download URL.
// 		const firebase::storage::Metadata* MetaData = FutureResp.result();
// 		if (MetaData)
// 		{
// 			std::string download_url = MetaData->;
// 			Downloadlink = UTF8_TO_TCHAR(download_url);
// 		}
	}
	UStorageRequestUnion* ReqData = static_cast<UStorageRequestUnion*>(UserData);
	if (ReqData)
	{
		ReqData->bLock = true;
		ReqData->RetCode = RetCode;
		ReqData->ErrorMsg = Error;
		ReqData->bDone = true;
		ReqData->bLock = false;
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("UFirebaseStorageMgr::OnUploadRequestCompleted ReqData is null"));
	}
}

void OnDownloadRequestCompleted(const firebase::Future<size_t>& FutureResp, void* UserData)
{
	int32 RetCode = -1;
	FString Error = TEXT("Firebase Auth Future Status is invalid!");

	if (FutureResp.status() == firebase::FutureStatus::kFutureStatusInvalid)
	{
		UE_LOG(LogTemp, Log, TEXT("Error: %s"), *Error);
	}
	else
	{
		RetCode = FutureResp.error();
		Error = UTF8_TO_TCHAR(FutureResp.error_message());
	}

	UStorageRequestUnion* ReqData = static_cast<UStorageRequestUnion*>(UserData);
	if (ReqData)
	{
		ReqData->bLock = true;
		ReqData->RetCode = RetCode;
		ReqData->ErrorMsg = Error;
		ReqData->bDone = true;
		ReqData->bLock = false;
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("UFirebaseStorageMgr::OnDownloadRequestCompleted ReqData is null"));
	}
}


void OnDeleteRequestCompleted(const firebase::Future<void>& FutureResp, void* UserData)
{
	int32 RetCode = -1;
	FString Error = TEXT("Firebase Auth Future Status is invalid!");

	if (FutureResp.status() == firebase::FutureStatus::kFutureStatusInvalid)
	{
		UE_LOG(LogTemp, Log, TEXT("Error: %s"), *Error);
	}
	else
	{
		RetCode = FutureResp.error();
		Error = UTF8_TO_TCHAR(FutureResp.error_message());
	}

	UStorageRequestUnion* ReqData = static_cast<UStorageRequestUnion*>(UserData);
	if (ReqData)
	{
		ReqData->bLock = true;
		ReqData->RetCode = RetCode;
		ReqData->ErrorMsg = Error;
		ReqData->bDone = true;
		ReqData->bLock = false;
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("UFirebaseStorageMgr::OnDeleteRequestCompleted ReqData is null"));
	}
}
#endif

void UFirebaseStorageMgr::Upload(FString BucketURL, FString StorageIndexPath,  FString UploadFilePath, const FFirebaseStorageDelegate& OnResponse)
{
#if PLATFORM_WINDOWS
	if (PendingReqData && PendingReqData->bPendingResponse)
	{
		OnResponse.ExecuteIfBound( -1, TEXT("There exists unresponsed request, please try later!"));
		return;
	}
	SetupController();
	if (UploadController == NULL)
	{
		OnResponse.ExecuteIfBound(-1, TEXT("UploadController is NULL, please try later!"));
		return;
	}
	firebase::storage::Storage* FirebaseStorage = GetFirebaseStorage();
	if (FirebaseStorage)
	{
		UploadController->bTransferring = true;
		UploadController->Clear();
		// Create a root reference
		firebase::storage::StorageReference StorageRef = FirebaseStorage->GetReferenceFromUrl(TCHAR_TO_UTF8(*BucketURL));

		// Create a reference to the file you want to upload
		firebase::storage::StorageReference RiversRef = StorageRef.Child(TCHAR_TO_UTF8(*StorageIndexPath));

		// Upload the file to the path "images/rivers.jpg"
		firebase::Future<firebase::storage::Metadata> FutureResult = RiversRef.PutFile(TCHAR_TO_UTF8(*UploadFilePath), nullptr, &UploadController->Controller);
		
		ResetRequestData(EFirestoreStroageOper::EFSO_Upload);

		if (PendingReqData)
		{
			PendingReqData->Callback = OnResponse;
		}
		FutureResult.OnCompletion(OnUploadRequestCompleted, PendingReqData);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("UFirebaseAuthMgr::Upload fail, FirebaseStorage is null"));
	}
#endif
}

void UFirebaseStorageMgr::Download(FString BucketURL, FString StorageIndexPath, FString DownloadFilePath, const FFirebaseStorageDelegate& OnResponse)
{
#if PLATFORM_WINDOWS
	if (PendingReqData && PendingReqData->bPendingResponse)
	{
		OnResponse.ExecuteIfBound(-1, TEXT("There exists unresponsed request, please try later!"));
		return;
	}
	SetupController();
	if (DownloadController == NULL)
	{
		OnResponse.ExecuteIfBound(-1, TEXT("DownloadController is NULL, please try later!"));
		return;
	}
	firebase::storage::Storage* FirebaseStorage = GetFirebaseStorage();
	if (FirebaseStorage)
	{
		DownloadController->bTransferring = true;
		DownloadController->Clear();

		// Create a root reference
		firebase::storage::StorageReference StorageRef = FirebaseStorage->GetReferenceFromUrl(TCHAR_TO_UTF8(*BucketURL));

		// Create a reference to the file you want to download
		firebase::storage::StorageReference RiversRef = StorageRef.Child(TCHAR_TO_UTF8(*StorageIndexPath));

		// Download the file to the path "images/rivers.jpg"
		firebase::Future<size_t> FutureResult = RiversRef.GetFile(TCHAR_TO_UTF8(*DownloadFilePath), nullptr, &DownloadController->Controller);
		
		ResetRequestData(EFirestoreStroageOper::EFSO_Download);

		if (PendingReqData)
		{
			PendingReqData->Callback = OnResponse;
		}
		FutureResult.OnCompletion(OnDownloadRequestCompleted, PendingReqData);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("UFirebaseAuthMgr::Download fail, FirebaseStorage is null"));
	}
#endif
}



void UFirebaseStorageMgr::Delete(FString BucketURL, FString StorageIndexPath, const FFirebaseStorageDelegate& OnResponse)
{
#if PLATFORM_WINDOWS
	if (PendingReqData && PendingReqData->bPendingResponse)
	{
		OnResponse.ExecuteIfBound(-1, TEXT("There exists unresponsed request, please try later!"));
		return;
	}

	firebase::storage::Storage* FirebaseStorage = GetFirebaseStorage();
	if (FirebaseStorage)
	{
		// Create a root reference
		firebase::storage::StorageReference StorageRef = FirebaseStorage->GetReferenceFromUrl(TCHAR_TO_UTF8(*BucketURL));

		// Create a reference to the file you want to download
		firebase::storage::StorageReference RiversRef = StorageRef.Child(TCHAR_TO_UTF8(*StorageIndexPath));

		// Download the file to the path "images/rivers.jpg"
		firebase::Future<void> FutureResult = RiversRef.Delete();

		ResetRequestData(EFirestoreStroageOper::EFSO_Delete);

		if (PendingReqData)
		{
			PendingReqData->Callback = OnResponse;
		}
		FutureResult.OnCompletion(OnDeleteRequestCompleted, PendingReqData);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("UFirebaseAuthMgr::Download fail, FirebaseStorage is null"));
	}
#endif
}