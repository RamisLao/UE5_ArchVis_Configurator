//Publisher: stephen, Intended publishing: 2021
#pragma once

#include "CoreMinimal.h"
#include "firebase/auth.h"
#include "FirebaseAuthMgr.generated.h"

//DECLARE_LOG_CATEGORY_EXTERN(FirebaseAuthLog, Log, All);

DECLARE_DYNAMIC_DELEGATE_ThreeParams(FAuthRetDelegate, const FString&, Email, int32, RetCode, const FString&, RetMsg);

UENUM()
enum class ERequestType : uint8
{
	ERT_None = 0,
	ERT_Registration = 1,
	ERT_Login = 2,
	ERT_ChangePassword = 3,
};

USTRUCT()
struct FResponseUnion
{
	GENERATED_BODY()

public:
	UPROPERTY()
		ERequestType ReqType = ERequestType::ERT_None;

	UPROPERTY()
		FString Email;

	UPROPERTY()
		FString ErrorMsg;

	UPROPERTY()
		int32 RetCode = 0;
};

USTRUCT()
struct FRequestUID
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY()
		FString Email;

	UPROPERTY()
		ERequestType ReqType;

public:
	FRequestUID()
		: Email(TEXT("")), ReqType(ERequestType::ERT_None)
	{}

	FRequestUID(const FString& InEmail, ERequestType InType)
		: Email(InEmail), ReqType(InType)
	{ }

	friend bool operator==(const FRequestUID& X, const FRequestUID& Y)
	{
		return (X.Email == Y.Email) && (X.ReqType == Y.ReqType);
	}

	friend bool operator!=(const FRequestUID& X, const FRequestUID& Y)
	{
		return (X.Email != Y.Email) || (X.ReqType != Y.ReqType);
	}

	friend uint32 GetTypeHash(const FRequestUID& Euid)
	{
		return HashCombine(GetTypeHash(Euid.Email), GetTypeHash(Euid.ReqType));
	}

	FString ToString() const
	{
		return FString::Printf(TEXT("%s:%d"), *Email, ReqType);
	}
};

UCLASS()
class COMPACTFIREBASEPRO_API URequestUnion : public UObject
{
	GENERATED_BODY()

public:
	URequestUnion(const FObjectInitializer& ObjectInitializer);

	UPROPERTY()
		FString RequestEmail;
	UPROPERTY()
		ERequestType ReqType = ERequestType::ERT_None;
	UPROPERTY()
		float Timer = 0;
};

UCLASS(BlueprintType, config = Game, defaultconfig)
class COMPACTFIREBASEPRO_API UFirebaseAuthMgr : public UObject
{
	GENERATED_BODY()

public:
	UFirebaseAuthMgr(const FObjectInitializer& ObjectInitializer);
	void OnTick(float DeltaTime);
	void OnClear();
	URequestUnion* GenerateRequestData(const FString& Email, ERequestType ReqType);
	FResponseUnion GenerateResponseData(ERequestType ReqType, FString Email, int32 RetCode, FString ErrorMsg);
	void DispatchResponseDelegate(ERequestType ReqType, const FString& Email, int32 RetCode, const FString& ErrorMsg);

public:
	//TMap<FString, FAuthRetDelegate> RegesterRespDelegateMap;
	//TMap<FString, FAuthRetDelegate> LoginRespDelegateMap;
	TMap<FRequestUID, FAuthRetDelegate> AuthRespDelegateMap;
	TArray<FResponseUnion> ResponseQueue;
	bool bLockReadQueue = false;

	UPROPERTY()
	TArray<URequestUnion*> PendingReleaseRequests;
	UPROPERTY(Config)
	float RequestTimeout = 30.f;

public:
	UFUNCTION(BlueprintCallable, Category = "Firebase")
		void Register(FString Email, FString Password, const FAuthRetDelegate& OnResponse);

	UFUNCTION(BlueprintCallable, Category = "Firebase")
		void Login(FString Email, FString Password, const FAuthRetDelegate& OnResponse);

	UFUNCTION(BlueprintCallable, Category = "Firebase")
		void SendPasswordResetEmail(FString Email, const FAuthRetDelegate& OnResponse);

	UFUNCTION(BlueprintCallable, Category = "Firebase")
		void Logout();

private:
	firebase::auth::Auth* GetFirebaseAuth();

	//void OnUserTypeRequestCompleted(const firebase::Future<firebase::auth::User*>& FutureResp, void* UserData);
};

