//Publisher: stephen, Intended publishing: 2021
#pragma once

#include "CoreMinimal.h"
#include "firebase/firestore.h"
#include "FirestoreDataSet.h"
#include "FirestoreMgr.generated.h"

DECLARE_DYNAMIC_DELEGATE_ThreeParams(FFirestoreRespDel, int32, RetCode, const FString&, RetMsg, UFirestoreSnapshot*, Snapshot);

UENUM()
enum class EFirestoreOper : uint8
{
	EFO_None = 0,
	EFO_Set = 1,
	EFO_Update = 2,
	EFO_Get = 3,
	EFO_Delete = 4,
};

UCLASS(BlueprintType)
class COMPACTFIREBASEPRO_API UFirebaseCollection : public UObject
{
	GENERATED_BODY()

public:
	UFirebaseCollection(const FObjectInitializer& ObjectInitializer);
	//firebase::firestore::CollectionReference* CollectionRef;
	void OnClear();

public:
	UFUNCTION(BlueprintPure, Category = "Firebase")
		FString GetID();

	UFUNCTION(BlueprintPure, Category = "Firebase")
		FString GetPath();

	UFUNCTION(BlueprintCallable, Category = "Firebase")
		UFirebaseDocument* GetDocument(FString Path);

public:
	UPROPERTY()
		FString ColPath;
};

USTRUCT()
struct FFirestoreResponse
{
	GENERATED_BODY()

public:

	UPROPERTY()
		FString ErrorMsg;

	UPROPERTY()
		int32 RetCode = 0;

	UPROPERTY()
		bool bCanInvokeDel = false;

	UPROPERTY()
		FFirestoreRespDel PendingInvokeDel;

	UPROPERTY()
		UFirestoreSnapshot* Snapshot;

	//Cannot create uobject in other thread, so we cache this data for game thread
	const firebase::firestore::DocumentSnapshot* RawSnapshot;
};

UCLASS(BlueprintType)
class COMPACTFIREBASEPRO_API UFirebaseDocument : public UObject
{
	GENERATED_BODY()

public:
	UFirebaseDocument(const FObjectInitializer& ObjectInitializer);
	//firebase::firestore::DocumentReference* DocumentRef;
	void OnTick(float DeltaTime);
	void OnClear();

public:
	UFUNCTION(BlueprintPure, Category = "Firebase")
		FString GetID();

	UFUNCTION(BlueprintPure, Category = "Firebase")
		FString GetPath();

	UFUNCTION(BlueprintCallable, Category = "Firebase")
		void SetValue(const TMap<FName, UFirestoreFieldValue*>& Value, const FFirestoreRespDel& OnResponse);

	UFUNCTION(BlueprintCallable, Category = "Firebase")
		void UpdateValue(const TMap<FName, UFirestoreFieldValue*>& Value, const FFirestoreRespDel& OnResponse);

	UFUNCTION(BlueprintCallable, Category = "Firebase")
		void GetSnapshot(const FFirestoreRespDel& OnResponse);

	UFUNCTION(BlueprintCallable, Category = "Firebase")
		void Delete(const FFirestoreRespDel& OnResponse);

	firebase::firestore::MapFieldValue ConvertToFirebaseMap(const TMap<FName, UFirestoreFieldValue*>& Value);
	firebase::firestore::FieldValue ConvertToFirebaseField(UFirestoreFieldValue* Value);
	TMap<FName, UFirestoreFieldValue*> ConvertToUnrealFieldMap(firebase::firestore::MapFieldValue Value);
	UFirestoreFieldValue* ConvertToUnrealField(firebase::firestore::FieldValue Value);

	void InternalFirebaseOperationVoid(EFirestoreOper Type, const FFirestoreRespDel& OnResponse);
	void InternalFirestoreOperation(EFirestoreOper Type, const TMap<FName, UFirestoreFieldValue*>& Value, const FFirestoreRespDel& OnResponse);
public:
	bool bWaitForResponse = false;
	
	UPROPERTY()
	FFirestoreResponse RespData;

	UPROPERTY()
	FString DocPath;

};

UCLASS()
class COMPACTFIREBASEPRO_API UFirestoreMgr : public UObject
{
	GENERATED_BODY()

public:
	UFirestoreMgr(const FObjectInitializer& ObjectInitializer);
	void OnTick(float DeltaTime);
	void OnClear();
	firebase::firestore::Firestore* GetFirestoreInstance();

	UFirestoreFieldValue* GetFieldValueFromPool();
	UFirestoreMapFieldValue* GetMapFieldValueFromPool();
	void RecycleFieldValueToPool(UFirestoreFieldValue* FieldVal);
	void RecycleMapValueToPool(UFirestoreMapFieldValue* MapVal);

public:
	UFUNCTION(BlueprintCallable, Category = "Firebase")
		UFirebaseCollection* GetCollection(FString Path);

	UFUNCTION(BlueprintCallable, Category = "Firebase")
		UFirebaseDocument* GetDocument(FString Path);

private:
	UPROPERTY()
		TMap<FString, UFirebaseCollection*> CollectionCache;
	UPROPERTY()
		TMap<FString, UFirebaseDocument*> DocumentCache;

	UPROPERTY()
		TSet<UFirestoreFieldValue*> UsingFieldValues;
	UPROPERTY()
		TSet<UFirestoreMapFieldValue*> UsingMapVaules;

	UPROPERTY()
		TArray<UFirestoreFieldValue*> FieldValuePool;
	UPROPERTY()
		TArray<UFirestoreMapFieldValue*> MapValuePool;

public:
	UFUNCTION(BlueprintPure, Category = "Firebase", meta = (HidePin = "WorldContentObject", DefaultToSelf = "WorldContentObject"))
	static UFirestoreFieldValue* FirestoreInteger(UObject* WorldContentObject, int32 Value);
	
	UFUNCTION(BlueprintPure, Category = "Firebase", meta = (HidePin = "WorldContentObject", DefaultToSelf = "WorldContentObject"))
	static UFirestoreFieldValue* FirestoreFloat(UObject* WorldContentObject, float Value);

	UFUNCTION(BlueprintPure, Category = "Firebase", meta = (HidePin = "WorldContentObject", DefaultToSelf = "WorldContentObject"))
	static UFirestoreFieldValue* FirestoreBoolean(UObject* WorldContentObject, bool Value);

	UFUNCTION(BlueprintPure, Category = "Firebase", meta = (HidePin = "WorldContentObject", DefaultToSelf = "WorldContentObject"))
	static UFirestoreFieldValue* FirestoreString(UObject* WorldContentObject, FString Value);

	UFUNCTION(BlueprintPure, Category = "Firebase", meta = (HidePin = "WorldContentObject", DefaultToSelf = "WorldContentObject"))
	static UFirestoreFieldValue* FirestoreReference(UObject* WorldContentObject, UFirebaseDocument* Value);

	UFUNCTION(BlueprintPure, Category = "Firebase", meta = (HidePin = "WorldContentObject", DefaultToSelf = "WorldContentObject"))
	static UFirestoreFieldValue* FirestoreArray(UObject* WorldContentObject, const TArray<UFirestoreFieldValue*>& Value);

	UFUNCTION(BlueprintPure, Category = "Firebase", meta = (HidePin = "WorldContentObject", DefaultToSelf = "WorldContentObject"))
	static UFirestoreFieldValue* FirestoreArrayRemove(UObject* WorldContentObject, const TArray<UFirestoreFieldValue*>& Value);

	UFUNCTION(BlueprintPure, Category = "Firebase", meta = (HidePin = "WorldContentObject", DefaultToSelf = "WorldContentObject"))
	static UFirestoreFieldValue* FirestoreArrayUnion(UObject* WorldContentObject, const TArray<UFirestoreFieldValue*>& Value);

	UFUNCTION(BlueprintPure, Category = "Firebase", meta = (HidePin = "WorldContentObject", DefaultToSelf = "WorldContentObject"))
	static UFirestoreFieldValue* FirestoreMap(UObject* WorldContentObject, const TMap<FName, UFirestoreFieldValue*>& Value);
};

