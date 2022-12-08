//Publisher: stephen, Intended publishing: 2021
#pragma once

#include "CoreMinimal.h"
#include "FirestoreDataSet.generated.h"

class UFirebaseDocument;

/** Parameter Type. */
UENUM(BlueprintType)
enum class EFieldValueType : uint8
{
	FVT_None         UMETA(DisplayName = "NONE", ToolTip=""),
	FVT_Boolean      UMETA(DisplayName = "BOOL", ToolTip = ""),
	FVT_Integer      UMETA(DisplayName = "INTEGER", ToolTip = ""),
	FVT_Double       UMETA(DisplayName = "FLOAT", ToolTip = ""),
	FVT_String       UMETA(DisplayName = "STRING", ToolTip = ""),
	FVT_Reference    UMETA(DisplayName = "REFERENCE", ToolTip = ""),
	FVT_Array        UMETA(DisplayName = "ARRAY", ToolTip = ""),
	FVT_Map          UMETA(DisplayName = "MAP", ToolTip = ""),
};

UCLASS(BlueprintType)
class COMPACTFIREBASEPRO_API UFirestoreFieldValue : public UObject
{
	GENERATED_BODY()

public:
	UFirestoreFieldValue(const FObjectInitializer& ObjectInitializer);
	
	void OnRecycle();

public:

	UPROPERTY(BlueprintReadOnly, Category = "Firebase")
		EFieldValueType Type;
	
	bool BoolVal;

	int64 IntegerVal;

	double DoubleVal;

	FString StringVal;

	UPROPERTY()
	UFirebaseDocument* RefVal;
	
	UPROPERTY()
	TArray<UFirestoreFieldValue*> ArrayVal;

	UPROPERTY()
	TMap<FName, UFirestoreFieldValue*>  MapVal;

	UPROPERTY()
	TArray<UFirestoreFieldValue*> RemoveArrayVal;

	UPROPERTY()
	TArray<UFirestoreFieldValue*> UnionArrayVal;

public:
	//Get
	UFUNCTION(BlueprintPure, Category = "Firebase")
		bool GetValueAsBool();

	UFUNCTION(BlueprintPure, Category = "Firebase")
		int32 GetValueAsInteger();

	UFUNCTION(BlueprintPure, Category = "Firebase")
		float GetValueAsFloat();

	UFUNCTION(BlueprintPure, Category = "Firebase")
		FString GetValueAsString();

	UFUNCTION(BlueprintPure, Category = "Firebase")
		UFirebaseDocument* GetValueAsRef();

	UFUNCTION(BlueprintPure, Category = "Firebase")
		TArray<UFirestoreFieldValue*> GetValueAsArray();

	UFUNCTION(BlueprintPure, Category = "Firebase")
		TMap<FName, UFirestoreFieldValue*> GetValueAsMap();

	//Set
	UFUNCTION(/*BlueprintCallable, Category = "Firebase"*/)
		void SetValueAsBool(bool Val);

	UFUNCTION(/*BlueprintCallable, Category = "Firebase"*/)
		void SetValueAsInteger(int32 Val);

	UFUNCTION(/*BlueprintCallable, Category = "Firebase"*/)
		void SetValueAsFloat(float Val);

	UFUNCTION(/*BlueprintCallable, Category = "Firebase"*/)
		void SetValueAsString(FString Val);

	UFUNCTION(/*BlueprintCallable, Category = "Firebase"*/)
		void SetValueAsRef(UFirebaseDocument* Val);

	UFUNCTION(/*BlueprintCallable, Category = "Firebase"*/)
		void SetValueAsArray(const TArray<UFirestoreFieldValue*>& FieldArray);

	UFUNCTION(/*BlueprintCallable, Category = "Firebase"*/)
		void ArrayRemove(const TArray<UFirestoreFieldValue*>& FieldArray);

	UFUNCTION(/*BlueprintCallable, Category = "Firebase"*/)
		void ArrayUnion(const TArray<UFirestoreFieldValue*>& FieldArray);

	UFUNCTION(/*BlueprintCallable, Category = "Firebase"*/)
		void SetValueAsMap(const TMap<FName, UFirestoreFieldValue*>& Val);
};


UCLASS(BlueprintType)
class COMPACTFIREBASEPRO_API UFirestoreMapFieldValue : public UObject
{
	GENERATED_BODY()

public:
	UFirestoreMapFieldValue(const FObjectInitializer& ObjectInitializer);

	void OnRecycle();

public:
	UPROPERTY()
		TMap<FName, UFirestoreFieldValue*> DataMap;

public:
	UFUNCTION(BlueprintCallable, Category = "Firebase")
		void AddField(FName KeyName, UFirestoreFieldValue* FieldValue);

	UFUNCTION(BlueprintPure, Category = "Firebase")
		UFirestoreFieldValue* GetField(FName KeyName);

};

UCLASS(BlueprintType)
class COMPACTFIREBASEPRO_API UFirestoreSnapshot : public UObject
{
	GENERATED_BODY()

public:
	UFirestoreSnapshot(const FObjectInitializer& ObjectInitializer);

public:
	UPROPERTY()
		TMap<FName, UFirestoreFieldValue*> DataMap;

public:
	UFUNCTION(BlueprintPure, Category = "Firebase")
		UFirestoreFieldValue* GetField(FName KeyName);

	UFUNCTION(BlueprintPure, Category = "Firebase")
		TArray<FName> GetAllFieldNames();
};