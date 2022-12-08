//Publisher: stephen, Intended publishing: 2021
#pragma once

#include "CoreMinimal.h"

#if PLATFORM_WINDOWS
#include "firebase/storage.h"
#endif

#include "FirebaseStorageMgr.generated.h"

DECLARE_DYNAMIC_DELEGATE_TwoParams(FFirebaseStorageDelegate, int32, RetCode, const FString&, RetMsg);


UENUM()
enum class EFirestoreStroageOper : uint8
{
	EFSO_None = 0,
	EFSO_Upload = 1,
	EFSO_Download = 2,
	EFSO_Delete = 3,
};

UCLASS()
class  UStorageRequestUnion : public UObject
{
	GENERATED_BODY()

public:
	UStorageRequestUnion(const FObjectInitializer& ObjectInitializer);

	UPROPERTY()
		float Timer = 0;


	UPROPERTY()
		FString ErrorMsg;

	UPROPERTY()
		int32 RetCode = 0;

	UPROPERTY()
		bool bPendingResponse = false;

	UPROPERTY()
		bool bDone = false;

	UPROPERTY()
		bool bLock = false;

	UPROPERTY()
		EFirestoreStroageOper OperType = EFirestoreStroageOper::EFSO_None;

	FFirebaseStorageDelegate Callback;
};

UCLASS()
class  UStorageController : public UObject
{
	GENERATED_BODY()

public:
	UStorageController(const FObjectInitializer& ObjectInitializer);


	UFUNCTION(BlueprintCallable, Category = "Firebase")
		void Pause();
	UFUNCTION(BlueprintCallable, Category = "Firebase")
		void Resume();
	UFUNCTION(BlueprintCallable, Category = "Firebase")
		void Cancel();
	UFUNCTION(/*BlueprintPure, Category = "Firebase"*/)
		int32 GetTransferedBytes();
	UFUNCTION(/*BlueprintPure, Category = "Firebase"*/)
		int32 GetTotalBytes();
	UFUNCTION(BlueprintPure, Category = "Firebase")
		float GetProgress();
	UFUNCTION(/*BlueprintPure, Category = "Firebase"*/)
		bool IsValidTransfer();
	UFUNCTION(BlueprintPure, Category = "Firebase")
		bool IsPaused();

	UFUNCTION(BlueprintPure, Category = "Firebase")
		bool IsTransferring() ;

	void Clear();
	bool bTransferring = false;

#if PLATFORM_WINDOWS
	firebase::storage::Controller Controller;
#endif
};


UCLASS(BlueprintType, config = Game, defaultconfig)
class COMPACTFIREBASEPRO_API UFirebaseStorageMgr : public UObject
{
	GENERATED_BODY()

public:
	UFirebaseStorageMgr(const FObjectInitializer& ObjectInitializer);
	void OnTick(float DeltaTime);
	void OnClear();


public:
	UFUNCTION(BlueprintCallable, Category = "Firebase")
		void Upload(FString BucketURL, FString StorageIndexPath, FString UploadFilePath, const FFirebaseStorageDelegate& OnResponse);

	UFUNCTION(BlueprintCallable, Category = "Firebase")
		void Download(FString BucketURL, FString StorageIndexPath, FString DownloadFilePath, const FFirebaseStorageDelegate& OnResponse);

	UFUNCTION(BlueprintCallable, Category = "Firebase")
		void Delete(FString BucketURL, FString StorageIndexPath, const FFirebaseStorageDelegate& OnResponse);

	UFUNCTION(BlueprintPure, Category = "Firebase")
		UStorageController* GetDownloadController() { return DownloadController; }

	UFUNCTION(BlueprintPure, Category = "Firebase")
		UStorageController* GetUploadController() { return UploadController; }

	void ResetRequestData(EFirestoreStroageOper OperType);
	void SetupController();

	UPROPERTY(Config)
		float RequestTimeout = 60.f;

private:

#if PLATFORM_WINDOWS
	firebase::storage::Storage* GetFirebaseStorage();
#endif

	UPROPERTY()
		UStorageRequestUnion* PendingReqData;

	UPROPERTY()
		UStorageController* UploadController;

	UPROPERTY()
		UStorageController* DownloadController;

};

