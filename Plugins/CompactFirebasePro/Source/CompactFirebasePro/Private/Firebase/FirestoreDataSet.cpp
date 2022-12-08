//Publisher: stephen, Intended publishing: 2021

#include "FirestoreDataSet.h"

UFirestoreFieldValue::UFirestoreFieldValue(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
}

bool UFirestoreFieldValue::GetValueAsBool()
{
	return BoolVal;
}


int32 UFirestoreFieldValue::GetValueAsInteger()
{
	return (int32)IntegerVal;
}

float UFirestoreFieldValue::GetValueAsFloat()
{
	return (float)DoubleVal;
}

FString UFirestoreFieldValue::GetValueAsString()
{
	return StringVal;
}

UFirebaseDocument* UFirestoreFieldValue::GetValueAsRef()
{
	return RefVal;
}

TArray<UFirestoreFieldValue*> UFirestoreFieldValue::GetValueAsArray()
{
	return ArrayVal;
}

TMap<FName, UFirestoreFieldValue*> UFirestoreFieldValue::GetValueAsMap()
{
	return MapVal;
}

void UFirestoreFieldValue::SetValueAsBool(bool Val)
{
	Type = EFieldValueType::FVT_Boolean;
	BoolVal = Val;
}

void UFirestoreFieldValue::SetValueAsInteger(int32 Val)
{
	Type = EFieldValueType::FVT_Integer;
	IntegerVal = Val;
}


void UFirestoreFieldValue::SetValueAsFloat(float Val)
{
	Type = EFieldValueType::FVT_Double;
	DoubleVal = Val;
}

void UFirestoreFieldValue::SetValueAsString(FString Val)
{
	Type = EFieldValueType::FVT_String;
	StringVal = Val;
}

void UFirestoreFieldValue::SetValueAsRef(UFirebaseDocument* Val)
{
	Type = EFieldValueType::FVT_Reference;
	RefVal = Val;
}

void UFirestoreFieldValue::SetValueAsArray(const TArray<UFirestoreFieldValue*>& FieldArray)
{
	Type = EFieldValueType::FVT_Array;
	ArrayVal = FieldArray;
	RemoveArrayVal.Empty();
	UnionArrayVal.Empty();
}

void UFirestoreFieldValue::ArrayRemove(const TArray<UFirestoreFieldValue*>& FieldArray)
{
	Type = EFieldValueType::FVT_Array;
	RemoveArrayVal = FieldArray;
	ArrayVal.Empty();
	UnionArrayVal.Empty();
}

void UFirestoreFieldValue::ArrayUnion(const TArray<UFirestoreFieldValue*>& FieldArray)
{
	Type = EFieldValueType::FVT_Array;
	UnionArrayVal = FieldArray;
	ArrayVal.Empty();
	RemoveArrayVal.Empty();
}


void UFirestoreFieldValue::SetValueAsMap(const TMap<FName, UFirestoreFieldValue*>& Val)
{
	Type = EFieldValueType::FVT_Map;
	MapVal = Val;
}


void UFirestoreFieldValue::OnRecycle()
{
	Type = EFieldValueType::FVT_None;
	BoolVal = false;
	IntegerVal = 0;
	DoubleVal = 0;
	StringVal = FString();
	RefVal = NULL;
	ArrayVal.Empty();
	MapVal.Empty();
	RemoveArrayVal.Empty();
	UnionArrayVal.Empty();
}

UFirestoreMapFieldValue::UFirestoreMapFieldValue(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
}

void UFirestoreMapFieldValue::OnRecycle()
{
	DataMap.Empty();
}

void UFirestoreMapFieldValue::AddField(FName KeyName, UFirestoreFieldValue* FieldValue)
{
	if (DataMap.Contains(KeyName))
	{
		UE_LOG(LogTemp, Error, TEXT("UFirestoreMapFieldValue::AddField override exist field : %s"), *KeyName.ToString());
		DataMap[KeyName] = FieldValue;
	}
	DataMap.Add(KeyName, FieldValue);
}

UFirestoreFieldValue* UFirestoreMapFieldValue::GetField(FName KeyName)
{
	if (DataMap.Contains(KeyName))
	{
		return DataMap[KeyName];
	}
	return NULL;
}


UFirestoreSnapshot::UFirestoreSnapshot(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
}

UFirestoreFieldValue* UFirestoreSnapshot::GetField(FName KeyName)
{
	if (DataMap.Contains(KeyName))
	{
		return DataMap[KeyName];
	}
	return NULL;
}

TArray<FName> UFirestoreSnapshot::GetAllFieldNames()
{
	TArray<FName> KeyNames;
	DataMap.GetKeys(KeyNames);
	return KeyNames;
}