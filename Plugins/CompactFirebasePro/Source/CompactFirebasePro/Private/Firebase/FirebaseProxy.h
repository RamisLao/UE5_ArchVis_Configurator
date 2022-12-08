//Publisher: stephen, Intended publishing: 2021
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "firebase/app.h"
#include "FirebaseAuthMgr.h"
#include "FirestoreMgr.h"
#include "FirebaseStorageMgr.h"
#include "FirebaseProxy.generated.h"

UCLASS(BlueprintType)
class COMPACTFIREBASEPRO_API AFirebaseProxy : public AActor
{
	GENERATED_BODY()

public:
	AFirebaseProxy(const FObjectInitializer& ObjectInitializer);
	
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	virtual void Tick(float DeltaSeconds) override;

	void InitializeFirebaseApp();
	void InitPlistContent();
	FString GetPListString(const FString& Key);
	bool GetPListBool(const FString& Key);

public:
	UFUNCTION(BlueprintPure, Category = "Firebase", meta = (HidePin = "WorldContentObject", DefaultToSelf = "WorldContentObject"))
	static UFirebaseAuthMgr* GetFirebaseAuthManager(UObject* WorldContentObject);

	UFUNCTION(BlueprintPure, Category = "Firebase", meta = (HidePin = "WorldContentObject", DefaultToSelf = "WorldContentObject"))
	static UFirestoreMgr* GetFirestoreManager(UObject* WorldContentObject);

	UFUNCTION(BlueprintPure, Category = "Firebase", meta = (HidePin = "WorldContentObject", DefaultToSelf = "WorldContentObject"))
	static UFirebaseStorageMgr* GetStorageManager(UObject* WorldContentObject);

	UFUNCTION(BlueprintPure, Category = "Firebase", meta = (HidePin = "WorldContentObject", DefaultToSelf = "WorldContentObject"))
	static AFirebaseProxy* GetFirebaseProxy(UObject* WorldContentObject);

	UFUNCTION(BlueprintPure, Category = "Firebase")
	UFirebaseAuthMgr* GetAuthMgr();

	UFUNCTION(BlueprintPure, Category = "Firebase")
	UFirestoreMgr* GetFirestoreMgr();

	UFUNCTION(BlueprintPure, Category = "Firebase")
	UFirebaseStorageMgr* GetStorageMgr();

public:
	static TWeakObjectPtr<AFirebaseProxy> RuntimeProxyRef;
	firebase::App* FirebaseApp;

	UPROPERTY()
	UFirebaseAuthMgr* AuthMgr;

	UPROPERTY()
	UFirestoreMgr* FirestoreMgr;

	UPROPERTY()
	UFirebaseStorageMgr* StorageMgr;

	UPROPERTY()
	TMap<FString, bool> PListBoolMap;

	UPROPERTY()
	TMap<FString, FString> PListStringMap;
};

