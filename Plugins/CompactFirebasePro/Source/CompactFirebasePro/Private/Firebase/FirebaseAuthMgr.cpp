//Publisher: stephen, Intended publishing: 2021
#pragma once
#include "FirebaseAuthMgr.h"
#include "firebase/app.h"
#include "FirebaseProxy.h"

URequestUnion::URequestUnion(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
}

UFirebaseAuthMgr::UFirebaseAuthMgr(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	bLockReadQueue = false;
}

void UFirebaseAuthMgr::DispatchResponseDelegate(ERequestType ReqType, const FString& Email, int32 RetCode, const FString& ErrorMsg)
{
	FRequestUID RUID(Email, ReqType);
	if (AuthRespDelegateMap.Contains(RUID))
	{
		AuthRespDelegateMap[RUID].ExecuteIfBound(Email, RetCode, ErrorMsg);
		AuthRespDelegateMap.Remove(RUID);
	}
}

void UFirebaseAuthMgr::OnTick(float DeltaTime)
{
	if (!bLockReadQueue && ResponseQueue.Num() > 0)
	{
		TArray<FResponseUnion> TempResponseQueue;
		Exchange(ResponseQueue, TempResponseQueue);
		for (int32 i = 0; i < TempResponseQueue.Num(); ++i)
		{
			FResponseUnion& RespData = TempResponseQueue[i];
			DispatchResponseDelegate(RespData.ReqType, RespData.Email, RespData.RetCode, RespData.ErrorMsg);
		}
	}

	if (PendingReleaseRequests.Num() > 0)
	{
		for (int32 i = PendingReleaseRequests.Num() - 1; i >= 0; --i)
		{
			URequestUnion* ReqData = PendingReleaseRequests[i];

			if (ReqData == NULL)
			{
				PendingReleaseRequests.RemoveAt(i);
				continue;
			}
			ReqData->Timer += DeltaTime;
			if (ReqData->Timer >= RequestTimeout)
			{
				int32 RetCode = -1;
				FString ErrorMsg = TEXT("Request time out, please check network to firebase!");
				DispatchResponseDelegate(ReqData->ReqType, ReqData->RequestEmail, RetCode, ErrorMsg);
				ReqData->RemoveFromRoot();
				PendingReleaseRequests.RemoveAt(i);
			}
		}
	}
}

void UFirebaseAuthMgr::OnClear()
{
	AuthRespDelegateMap.Empty();
	
	for (int32 i = 0; i < PendingReleaseRequests.Num(); ++i)
	{
		URequestUnion* ReqData = PendingReleaseRequests[i];
		if (ReqData != NULL)
		{
			ReqData->RemoveFromRoot();
		}	
	}
	PendingReleaseRequests.Empty();
}

firebase::auth::Auth* UFirebaseAuthMgr::GetFirebaseAuth()
{
	if (AFirebaseProxy* Proxy = Cast<AFirebaseProxy>(GetOuter()))
	{
		if (Proxy->FirebaseApp == NULL)
		{
			UE_LOG(LogTemp, Error, TEXT("UFirebaseAuthMgr::Login fail, FirebaseApp is null"));
			return NULL;
		}
		firebase::auth::Auth* FirebaseAuth = firebase::auth::Auth::GetAuth(Proxy->FirebaseApp);
		return FirebaseAuth;
	}
	return NULL;
}

URequestUnion* UFirebaseAuthMgr::GenerateRequestData(const FString& Email, ERequestType ReqType)
{
	URequestUnion* RequestUnion = NewObject<URequestUnion>(this);
	if (RequestUnion)
	{
		RequestUnion->AddToRoot();
		RequestUnion->RequestEmail = Email;
		RequestUnion->ReqType = ReqType;
		RequestUnion->Timer = 0;
	}
	return RequestUnion;
}

FResponseUnion UFirebaseAuthMgr::GenerateResponseData(ERequestType ReqType, FString Email, int32 RetCode, FString ErrorMsg)
{
	FResponseUnion NewResp;
	NewResp.Email = Email;
	NewResp.RetCode = RetCode;
	NewResp.ErrorMsg = ErrorMsg;
	NewResp.ReqType = ReqType;
	return NewResp;
}


void OnRequestCompleted(int32 RetCode, FString Error, void* UserData)
{
	UE_LOG(LogTemp, Log, TEXT("Firebase OnRequestCompleted %d : %s"), RetCode, *Error);

	URequestUnion* ReqData = static_cast<URequestUnion*>(UserData);
	//firebase::auth::User* CurUser = *FutureResp.result();
	//FString CurEmail = UTF8_TO_TCHAR(CurUser->email().c_str());

	if (ReqData)
	{
		if (UFirebaseAuthMgr* AuthMgr = Cast<UFirebaseAuthMgr>(ReqData->GetOuter()))
		{
			FResponseUnion NewResp = AuthMgr->GenerateResponseData(ReqData->ReqType, ReqData->RequestEmail, RetCode, Error);
			AuthMgr->bLockReadQueue = true;
			AuthMgr->ResponseQueue.Push(NewResp);
			AuthMgr->bLockReadQueue = false;

			if (AuthMgr->PendingReleaseRequests.Contains(ReqData))
			{
				AuthMgr->PendingReleaseRequests.Remove(ReqData);
			}
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("UFirebaseAuthMgr::OnRequestCompleted AuthMgr is null"));
		}
		ReqData->RemoveFromRoot();
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("UFirebaseAuthMgr::OnRequestCompleted ReqData is null"));
	}
}

void OnUserTypeRequestCompleted(const firebase::Future<firebase::auth::User*>& FutureResp, void* UserData)
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
	OnRequestCompleted(RetCode, Error, UserData);
}

void OnVoidTypeRequestCompleted(const firebase::Future<void>& FutureResp, void* UserData)
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
	OnRequestCompleted(RetCode, Error, UserData);
}

void UFirebaseAuthMgr::Register(FString Email, FString Password, const FAuthRetDelegate& OnResponse)
{
	FRequestUID RUID(Email, ERequestType::ERT_Registration);
	if (AuthRespDelegateMap.Contains(RUID))
	{
		UE_LOG(LogTemp, Error, TEXT("UFirebaseAuthMgr::Register fail, existing request."));
		OnResponse.ExecuteIfBound(Email, -1, TEXT("There exists unresponsed registration request."));
		return;
	}
	AuthRespDelegateMap.Add(RUID, OnResponse);

	firebase::auth::Auth* FirebaseAuth = GetFirebaseAuth();
	if (FirebaseAuth)
	{
		URequestUnion* RequestData = GenerateRequestData(Email, ERequestType::ERT_Registration);
		PendingReleaseRequests.Add(RequestData);
		firebase::Future<firebase::auth::User*> FutureResult = FirebaseAuth->CreateUserWithEmailAndPassword(TCHAR_TO_UTF8(*Email), TCHAR_TO_UTF8(*Password));
		FutureResult.OnCompletion(OnUserTypeRequestCompleted, RequestData);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("UFirebaseAuthMgr::Register fail, FirebaseAuth is null"));
	}


}

void UFirebaseAuthMgr::Login(FString Email, FString Password, const FAuthRetDelegate& OnResponse)
{
	FRequestUID RUID(Email, ERequestType::ERT_Login);
	if (AuthRespDelegateMap.Contains(RUID))
	{
		UE_LOG(LogTemp, Error, TEXT("UFirebaseAuthMgr::Login fail, existing request."));
		OnResponse.ExecuteIfBound(Email, -1, TEXT("There exists unresponsed login request."));
		return;
	}
	AuthRespDelegateMap.Add(RUID, OnResponse);
	firebase::auth::Auth* FirebaseAuth = GetFirebaseAuth();
	if (FirebaseAuth)
	{
		URequestUnion* RequestData = GenerateRequestData(Email, ERequestType::ERT_Login);
		PendingReleaseRequests.Add(RequestData);
		firebase::Future<firebase::auth::User*> FutureResult = FirebaseAuth->SignInWithEmailAndPassword(TCHAR_TO_UTF8(*Email), TCHAR_TO_UTF8(*Password));
		FutureResult.OnCompletion(OnUserTypeRequestCompleted, RequestData);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("UFirebaseAuthMgr::Login fail, FirebaseAuth is null"));
	}

}


void UFirebaseAuthMgr::SendPasswordResetEmail(FString Email, const FAuthRetDelegate& OnResponse)
{
	FRequestUID RUID(Email, ERequestType::ERT_ChangePassword);
	if (AuthRespDelegateMap.Contains(RUID))
	{
		UE_LOG(LogTemp, Error, TEXT("UFirebaseAuthMgr::Login SendPasswordResetEmail, existing request."));
		OnResponse.ExecuteIfBound(Email, -1, TEXT("There exists unresponsed reset email request."));
		return;
	}
	AuthRespDelegateMap.Add(RUID, OnResponse);

	firebase::auth::Auth* FirebaseAuth = GetFirebaseAuth();
	if (FirebaseAuth)
	{
		URequestUnion* RequestData = GenerateRequestData(Email, ERequestType::ERT_ChangePassword);
		PendingReleaseRequests.Add(RequestData);
		firebase::Future<void> FutureResult = FirebaseAuth->SendPasswordResetEmail(TCHAR_TO_UTF8(*Email));
		FutureResult.OnCompletion(OnVoidTypeRequestCompleted, RequestData);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("UFirebaseAuthMgr::Login fail, FirebaseAuth is null"));
	}

}

void UFirebaseAuthMgr::Logout()
{
	if (AFirebaseProxy* Proxy = Cast<AFirebaseProxy>(GetOuter()))
	{
		firebase::auth::Auth* FirebaseAuth = firebase::auth::Auth::GetAuth(Proxy->FirebaseApp);
		FirebaseAuth->SignOut();
		UE_LOG(LogTemp, Log, TEXT("Firebase Logout done!"));
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("UFirebaseAuthMgr::Logout fail, firebase proxy is null."));
	}
}