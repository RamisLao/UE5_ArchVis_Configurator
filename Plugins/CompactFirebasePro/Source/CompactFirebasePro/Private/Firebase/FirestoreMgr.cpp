//Publisher: stephen, Intended publishing: 2021
#pragma once
#include "FirestoreMgr.h"
#include "firebase/app.h"
#include "FirebaseProxy.h"

//////////////////////////////Collection Begin///////////////////////////////
UFirebaseCollection::UFirebaseCollection(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{

}

void UFirebaseCollection::OnClear()
{
	ColPath = TEXT("");
}

FString UFirebaseCollection::GetID()
{
	if (UFirestoreMgr* FirestoreMgr = Cast<UFirestoreMgr>(GetOuter()))
	{
		if (FirestoreMgr->GetFirestoreInstance())
		{
			firebase::firestore::CollectionReference CollectionRef = FirestoreMgr->GetFirestoreInstance()->Collection(TCHAR_TO_UTF8(*ColPath));
			return UTF8_TO_TCHAR(CollectionRef.id().c_str());
		}

	}
	return TEXT("");
}

FString UFirebaseCollection::GetPath()
{
	if (UFirestoreMgr* FirestoreMgr = Cast<UFirestoreMgr>(GetOuter()))
	{
		if (FirestoreMgr->GetFirestoreInstance())
		{
			firebase::firestore::CollectionReference CollectionRef = FirestoreMgr->GetFirestoreInstance()->Collection(TCHAR_TO_UTF8(*ColPath));
			return UTF8_TO_TCHAR(CollectionRef.path().c_str());
		}

	}
	return TEXT("");
}

UFirebaseDocument* UFirebaseCollection::GetDocument(FString Path)
{
	if (UFirestoreMgr* FirestoreMgr = Cast<UFirestoreMgr>(GetOuter()))
	{
		FString DocPath = FString::Printf(TEXT("%s/%s"), *GetPath(), *Path);
		return FirestoreMgr->GetDocument(DocPath);
	}
	return NULL;
}
//////////////////////////////Collection End///////////////////////////////

//////////////////////////////Document Begin///////////////////////////////
UFirebaseDocument::UFirebaseDocument(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
}

void UFirebaseDocument::OnTick(float DeltaTime)
{
	if (RespData.bCanInvokeDel)
	{
		bWaitForResponse = false;
		RespData.bCanInvokeDel = false;
		if (RespData.RawSnapshot != NULL)
		{
			if (RespData.Snapshot == NULL)
			{
				RespData.Snapshot = NewObject<UFirestoreSnapshot>(this);
			}
			if (RespData.Snapshot)
			{
				RespData.Snapshot->DataMap.Empty();
				RespData.Snapshot->DataMap = ConvertToUnrealFieldMap(RespData.RawSnapshot->GetData());
			}		
			RespData.RawSnapshot = NULL;
		}
		RespData.PendingInvokeDel.ExecuteIfBound(RespData.RetCode, RespData.ErrorMsg, RespData.Snapshot);
	}
}

void UFirebaseDocument::OnClear()
{
	DocPath = TEXT("");
	if (RespData.Snapshot)
	{
		RespData.Snapshot->DataMap.Empty();
		RespData.Snapshot = NULL;
	}
	RespData.RawSnapshot = NULL;
}

FString UFirebaseDocument::GetID()
{
	if (UFirestoreMgr* FirestoreMgr = Cast<UFirestoreMgr>(GetOuter()))
	{
		if (FirestoreMgr->GetFirestoreInstance()) 
		{
			firebase::firestore::DocumentReference DocumentRef = FirestoreMgr->GetFirestoreInstance()->Document(TCHAR_TO_UTF8(*DocPath));
			return UTF8_TO_TCHAR(DocumentRef.id().c_str());
		}
		
	}	
	return TEXT("");
}

FString UFirebaseDocument::GetPath()
{
	if (UFirestoreMgr* FirestoreMgr = Cast<UFirestoreMgr>(GetOuter()))
	{
		if (FirestoreMgr->GetFirestoreInstance())
		{
			firebase::firestore::DocumentReference DocumentRef = FirestoreMgr->GetFirestoreInstance()->Document(TCHAR_TO_UTF8(*DocPath));
			return UTF8_TO_TCHAR(DocumentRef.path().c_str());
		}

	}
	return TEXT("");
}

void OnFirstoreRequestCompleted(const firebase::Future<void>& FutureResp, void* UserData)
{
	int32 RetCode = -1;
	FString Error = TEXT("Firstore Request Future Status is invalid!");

	if (FutureResp.status() == firebase::FutureStatus::kFutureStatusInvalid)
	{
		UE_LOG(LogTemp, Log, TEXT("Error: %s"), *Error);
	}
	else 
	{
		RetCode = FutureResp.error();
		Error = UTF8_TO_TCHAR(FutureResp.error_message());
		UE_LOG(LogTemp, Log, TEXT("OnFirstoreRequestCompleted %d : %s"), RetCode, *Error);
	}
	UFirebaseDocument* CurDoc = static_cast<UFirebaseDocument*>(UserData);
	if (CurDoc)
	{
		CurDoc->RespData.RetCode = RetCode;
		CurDoc->RespData.ErrorMsg = Error;
		CurDoc->RespData.bCanInvokeDel = true;
		CurDoc->RespData.Snapshot = NULL;
	}
}

void OnFirstoreGetRequestCompleted(const firebase::Future<firebase::firestore::DocumentSnapshot>& FutureResp, void* UserData)
{
	int32 RetCode = -1;
	FString Error = TEXT("Firstore GetRequest Future Status is invalid!");

	if (FutureResp.status() == firebase::FutureStatus::kFutureStatusInvalid)
	{
		UE_LOG(LogTemp, Log, TEXT("Error: %s"), *Error);
	}
	else
	{
		RetCode = FutureResp.error();
		Error = UTF8_TO_TCHAR(FutureResp.error_message());
		UE_LOG(LogTemp, Log, TEXT("OnFirstoreRequestCompleted %d : %s"), RetCode, *Error);
	}

	UFirebaseDocument* CurDoc = static_cast<UFirebaseDocument*>(UserData);
	if (CurDoc)
	{
		UFirestoreSnapshot* Snapshot = NULL;
		const firebase::firestore::DocumentSnapshot* RetSnapshot = FutureResp.result();
		/*
		if (RetSnapshot)
		{
			Snapshot = NewObject<UFirestoreSnapshot>(CurDoc);
			if (Snapshot) 
			{
				Snapshot->DataMap = CurDoc->ConvertToUnrealFieldMap(RetSnapshot->GetData());
			}
			else
			{
				UE_LOG(LogTemp, Error, TEXT("UFirestoreSnapshot Error NULL!"));
			}
		}
		*/
		CurDoc->RespData.RetCode = RetCode;
		CurDoc->RespData.ErrorMsg = Error;
		CurDoc->RespData.bCanInvokeDel = true;
		//CurDoc->RespData.Snapshot = Snapshot;
		CurDoc->RespData.RawSnapshot = RetSnapshot;
	}
}

void UFirebaseDocument::InternalFirestoreOperation(EFirestoreOper Type, const TMap<FName, UFirestoreFieldValue*>& Value, const FFirestoreRespDel& OnResponse)
{
	if (Value.Num() == 0)
	{
		UE_LOG(LogTemp, Error, TEXT("UFirebaseDocument Operation %d fail, MapFieldValue is empty."), Type);
		OnResponse.ExecuteIfBound(-1, TEXT("Firestore MapFieldValue is empty."), NULL);
		return;
	}

	if (bWaitForResponse)
	{
		UE_LOG(LogTemp, Error, TEXT("UFirebaseDocument Operation %d fail, existing request."), Type);
		OnResponse.ExecuteIfBound(-1, TEXT("There exists unresponsed firestore request."), NULL);
		return;
	}

	UFirestoreMgr* FirestoreMgr = Cast<UFirestoreMgr>(GetOuter());
	if (FirestoreMgr == NULL || FirestoreMgr->GetFirestoreInstance() == NULL)
	{
		UE_LOG(LogTemp, Error, TEXT("Firestore instance is null!"));
		OnResponse.ExecuteIfBound(-1, TEXT("Firestore instance is null!"), NULL);
		return;
	}
	firebase::firestore::DocumentReference DocumentRef = FirestoreMgr->GetFirestoreInstance()->Document(TCHAR_TO_UTF8(*DocPath));
	FString CurPath = UTF8_TO_TCHAR(DocumentRef.path().c_str());
	if (CurPath == DocPath)
	{
		RespData.bCanInvokeDel = false;
		RespData.PendingInvokeDel = OnResponse;
		RespData.RawSnapshot = NULL;
		bWaitForResponse = true;
		firebase::firestore::MapFieldValue FirestoreMap = ConvertToFirebaseMap(Value);

		if(Type == EFirestoreOper::EFO_Set)
		{
			firebase::Future<void> FutureResult = DocumentRef.Set(FirestoreMap);
			FutureResult.OnCompletion(OnFirstoreRequestCompleted, this);
		}
		else if (Type == EFirestoreOper::EFO_Update)
		{
			firebase::Future<void> FutureResult = DocumentRef.Update(FirestoreMap);
			FutureResult.OnCompletion(OnFirstoreRequestCompleted, this);
		}
	}
}

void UFirebaseDocument::InternalFirebaseOperationVoid(EFirestoreOper Type, const FFirestoreRespDel& OnResponse)
{
	if (bWaitForResponse)
	{
		UE_LOG(LogTemp, Error, TEXT("UFirebaseDocument Operation %d fail, existing request."), Type);
		OnResponse.ExecuteIfBound(-1, TEXT("There exists unresponsed firestore request."), NULL);
		return;
	}

	UFirestoreMgr* FirestoreMgr = Cast<UFirestoreMgr>(GetOuter());
	if (FirestoreMgr == NULL || FirestoreMgr->GetFirestoreInstance() == NULL)
	{
		UE_LOG(LogTemp, Error, TEXT("Firestore instance is null!"));
		OnResponse.ExecuteIfBound(-1, TEXT("Firestore instance is null!"), NULL);
		return;
	}
	firebase::firestore::DocumentReference DocumentRef = FirestoreMgr->GetFirestoreInstance()->Document(TCHAR_TO_UTF8(*DocPath));
	FString CurPath = UTF8_TO_TCHAR(DocumentRef.path().c_str());
	if (CurPath == DocPath)
	{
		RespData.bCanInvokeDel = false;
		RespData.RawSnapshot = NULL;
		RespData.PendingInvokeDel = OnResponse;
		bWaitForResponse = true;
		if (Type == EFirestoreOper::EFO_Get)
		{
			firebase::Future<firebase::firestore::DocumentSnapshot> FutureResult = DocumentRef.Get();
			FutureResult.OnCompletion(OnFirstoreGetRequestCompleted, this);
		}
		else if (Type == EFirestoreOper::EFO_Delete)
		{
			firebase::Future<void> FutureResult = DocumentRef.Delete();
			FutureResult.OnCompletion(OnFirstoreRequestCompleted, this);
		}
	}
}


void UFirebaseDocument::SetValue(const TMap<FName, UFirestoreFieldValue*>& Value, const FFirestoreRespDel& OnResponse)
{
	InternalFirestoreOperation(EFirestoreOper::EFO_Set, Value, OnResponse);
}

void UFirebaseDocument::UpdateValue(const TMap<FName, UFirestoreFieldValue*>& Value, const FFirestoreRespDel& OnResponse)
{
	InternalFirestoreOperation(EFirestoreOper::EFO_Update, Value, OnResponse);
}

void UFirebaseDocument::GetSnapshot(const FFirestoreRespDel& OnResponse)
{
	InternalFirebaseOperationVoid(EFirestoreOper::EFO_Get, OnResponse);
}

void UFirebaseDocument::Delete(const FFirestoreRespDel& OnResponse)
{
	InternalFirebaseOperationVoid(EFirestoreOper::EFO_Delete, OnResponse);
}

firebase::firestore::MapFieldValue UFirebaseDocument::ConvertToFirebaseMap(const TMap<FName, UFirestoreFieldValue*>& Value)
{
	firebase::firestore::MapFieldValue FirestoreMap;

	for (auto& MapKvp : Value)
	{
		FString KeyName = MapKvp.Key.ToString();
		UFirestoreFieldValue* UEFieldVal = MapKvp.Value;
		firebase::firestore::FieldValue FirestoreVal = ConvertToFirebaseField(UEFieldVal);
		std::pair<std::string, firebase::firestore::FieldValue> OnePair(TCHAR_TO_UTF8(*KeyName), FirestoreVal);
		FirestoreMap.insert(OnePair);	
	}
	
	return FirestoreMap;
}

firebase::firestore::FieldValue UFirebaseDocument::ConvertToFirebaseField(UFirestoreFieldValue* Value)
{
	firebase::firestore::FieldValue FieldVal;

	if (Value)
	{
		std::vector<firebase::firestore::FieldValue> FieldArray;
		TArray<UFirestoreFieldValue*> ArrayVal;

		switch (Value->Type)
		{
		case EFieldValueType::FVT_Boolean:
			FieldVal = firebase::firestore::FieldValue::Boolean(Value->BoolVal);
			break;
		case EFieldValueType::FVT_Integer:
			FieldVal = firebase::firestore::FieldValue::Integer(Value->IntegerVal);
			break;
		case EFieldValueType::FVT_Double:
			FieldVal = firebase::firestore::FieldValue::Double(Value->DoubleVal);
			break;
		case EFieldValueType::FVT_String:
			FieldVal = firebase::firestore::FieldValue::String(TCHAR_TO_UTF8(*Value->StringVal));
			break;
		case EFieldValueType::FVT_Reference:
			if (UFirestoreMgr* FirestoreMgr = Cast<UFirestoreMgr>(GetOuter()))
			{
				if (FirestoreMgr->GetFirestoreInstance() && Value->RefVal)
				{
					firebase::firestore::DocumentReference DocRef = FirestoreMgr->GetFirestoreInstance()->Document(TCHAR_TO_UTF8(*Value->RefVal->GetPath()));
					FieldVal = firebase::firestore::FieldValue::Reference(DocRef);
				}
			}	
			break;
		case EFieldValueType::FVT_Map:
			FieldVal = firebase::firestore::FieldValue::Map(ConvertToFirebaseMap(Value->MapVal));
			break;
		case EFieldValueType::FVT_Array:

			if (Value->ArrayVal.Num() > 0)
			{
				ArrayVal = Value->ArrayVal;
			}
			else if (Value->RemoveArrayVal.Num() > 0)
			{
				ArrayVal = Value->RemoveArrayVal;
			}
			else if (Value->UnionArrayVal.Num() > 0)
			{
				ArrayVal = Value->UnionArrayVal;
			}
			

			for(int32 i = 0; i < ArrayVal.Num(); ++i)
			{
				if (ArrayVal[i])
				{
					FieldArray.push_back(ConvertToFirebaseField(ArrayVal[i]));
				}
			}

			if (FieldArray.size() > 0)
			{
				if (Value->ArrayVal.Num() > 0)
				{
					FieldVal = firebase::firestore::FieldValue::Array(FieldArray);
				}
				else if (Value->RemoveArrayVal.Num() > 0)
				{
					FieldVal = firebase::firestore::FieldValue::ArrayRemove(FieldArray);
				}
				else if (Value->UnionArrayVal.Num() > 0)
				{
					FieldVal = firebase::firestore::FieldValue::ArrayUnion(FieldArray);
				}
			}	
			break;
		default:
			break;
		}
	}

	return FieldVal;
}

TMap<FName, UFirestoreFieldValue*> UFirebaseDocument::ConvertToUnrealFieldMap(firebase::firestore::MapFieldValue Value)
{
	TMap<FName, UFirestoreFieldValue*> MapVal;
	for (const auto& kv : Value)
	{
		FString FieldName = UTF8_TO_TCHAR(kv.first.c_str());

		if (MapVal.Contains(*FieldName))
		{
			UE_LOG(LogTemp, Error, TEXT("Same key error : %s"), *FieldName);
			continue;
		}

		UFirestoreFieldValue* UnrealField = ConvertToUnrealField(kv.second);

		if (UnrealField)
		{
			MapVal.Add(*FieldName, UnrealField);
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("ConvertToUnrealField Error : %s"), *FieldName);
		}
		//
	}
	return MapVal;
}

UFirestoreFieldValue* UFirebaseDocument::ConvertToUnrealField(firebase::firestore::FieldValue Value)
{
	UFirestoreFieldValue* UnrealField = NewObject<UFirestoreFieldValue>(this);
	if (UnrealField == NULL)
	{
		return UnrealField;
	}
	switch (Value.type())
	{
	case firebase::firestore::FieldValue::Type::kString:
		UnrealField->SetValueAsString(UTF8_TO_TCHAR(Value.string_value().c_str()));
		break;
	case firebase::firestore::FieldValue::Type::kInteger:
		UnrealField->SetValueAsInteger((int32)Value.integer_value());
		break;
	case firebase::firestore::FieldValue::Type::kBoolean:
		UnrealField->SetValueAsBool(Value.boolean_value());
		break;
	case firebase::firestore::FieldValue::Type::kDouble:
		UnrealField->SetValueAsFloat((float)Value.double_value());
		break;
	case firebase::firestore::FieldValue::Type::kReference:
		if (UFirestoreMgr* FirestoreMgr = Cast<UFirestoreMgr>(GetOuter()))
		{
			FString Path = UTF8_TO_TCHAR(Value.reference_value().path().c_str());
			UnrealField->SetValueAsRef(FirestoreMgr->GetDocument(Path));
		}
		break;
	case firebase::firestore::FieldValue::Type::kArray:
		for (int32 i = 0; i < Value.array_value().size(); ++i)
		{
			UFirestoreFieldValue* SubItem = ConvertToUnrealField(Value.array_value()[i]);
			UnrealField->ArrayVal.Add(SubItem);
		}
		UnrealField->Type = EFieldValueType::FVT_Array;
		break;
	case firebase::firestore::FieldValue::Type::kMap:
		UnrealField->Type = EFieldValueType::FVT_Map;
		UnrealField->MapVal = ConvertToUnrealFieldMap(Value.map_value());
		break;
	default:
		break;
	}

	return UnrealField;
}


//////////////////////////////Document End///////////////////////////////

UFirestoreMgr::UFirestoreMgr(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{

}

void UFirestoreMgr::OnTick(float DeltaTime)
{
	for (auto& Doc : DocumentCache)
	{
		if (Doc.Value != NULL)
		{
			Doc.Value->OnTick(DeltaTime);
		}
	}
}

void UFirestoreMgr::OnClear()
{
	for (auto& Doc : DocumentCache)
	{
		if (Doc.Value != NULL)
		{
			Doc.Value->OnClear();
		}
	}
	for (auto& Col : CollectionCache)
	{
		if (Col.Value != NULL)
		{
			Col.Value->OnClear();
		}
	}
	CollectionCache.Empty();
	DocumentCache.Empty();
	MapValuePool.Empty();
	FieldValuePool.Empty();
	UsingFieldValues.Empty();
	UsingMapVaules.Empty();
}

UFirestoreFieldValue* UFirestoreMgr::GetFieldValueFromPool()
{
	UFirestoreFieldValue* FieldVal = NULL;
	if (FieldValuePool.Num() > 0)
	{
		FieldVal = FieldValuePool.Pop();
	}
	else
	{
		FieldVal = NewObject<UFirestoreFieldValue>(this);
		UsingFieldValues.Add(FieldVal);
	}
	return FieldVal;
}

UFirestoreMapFieldValue* UFirestoreMgr::GetMapFieldValueFromPool()
{
	UFirestoreMapFieldValue* MapVal = NULL;
	if (MapValuePool.Num() > 0)
	{
		MapVal = MapValuePool.Pop();
	}
	else
	{
		MapVal = NewObject<UFirestoreMapFieldValue>(this);
		UsingMapVaules.Add(MapVal);
	}
	return MapVal;
}

void UFirestoreMgr::RecycleFieldValueToPool(UFirestoreFieldValue* FieldVal)
{
	if (FieldVal == NULL)
	{
		return;
	}
	FieldVal->OnRecycle();
	FieldValuePool.AddUnique(FieldVal);
}

void UFirestoreMgr::RecycleMapValueToPool(UFirestoreMapFieldValue* MapVal)
{
	if (MapVal == NULL)
	{
		return;
	}
	MapVal->OnRecycle();
	MapValuePool.AddUnique(MapVal);
}

firebase::firestore::Firestore* UFirestoreMgr::GetFirestoreInstance()
{
	if (AFirebaseProxy* Proxy = Cast<AFirebaseProxy>(GetOuter()))
	{
		if (Proxy->FirebaseApp == NULL)
		{
			UE_LOG(LogTemp, Error, TEXT("UFirestoreMgr::GetFirestoreInstance fail, FirebaseApp is null"));
			return NULL;
		}

		firebase::firestore::Firestore* FirestoreIns = firebase::firestore::Firestore::GetInstance(Proxy->FirebaseApp);
		if (FirestoreIns == NULL)
		{
			UE_LOG(LogTemp, Error, TEXT("UFirestoreMgr FirestoreIns is null"));
			return NULL;
		}
		//FirestoreIns->set_log_level(firebase::kLogLevelDebug);
		//firebase::firestore::Settings Settings = FirestoreIns->settings();
		//FirestoreIns->set_settings(Settings);
		return FirestoreIns;
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("UFirestoreMgr firebase proxy is null."));
	}
	return NULL;
}


UFirebaseCollection* UFirestoreMgr::GetCollection(FString Path)
{
	if (CollectionCache.Contains(Path))
	{
		return CollectionCache[Path];
	}

	firebase::firestore::Firestore* FirestoreIns = GetFirestoreInstance();
	if (FirestoreIns)
	{
		firebase::firestore::CollectionReference CollRef = FirestoreIns->Collection(TCHAR_TO_UTF8(*Path));
		UFirebaseCollection* NewCollection = NewObject<UFirebaseCollection>(this);
		NewCollection->ColPath = Path;
		CollectionCache.Add(TCHAR_TO_UTF8(*Path), NewCollection);
		return NewCollection;
	}
	return NULL;
}

UFirebaseDocument* UFirestoreMgr::GetDocument(FString Path)
{
	if (DocumentCache.Contains(Path))
	{
		return DocumentCache[Path];
	}

	firebase::firestore::Firestore* FirestoreIns = GetFirestoreInstance();
	if (FirestoreIns)
	{
		UFirebaseDocument* NewDoc = NewObject<UFirebaseDocument>(this);
		NewDoc->DocPath = Path;
		DocumentCache.Add(TCHAR_TO_UTF8(*Path), NewDoc);
		return NewDoc;
	}
	return NULL;
}

UFirestoreFieldValue* UFirestoreMgr::FirestoreInteger(UObject* WorldContentObject, int32 Value)
{
	UFirestoreFieldValue* FieldVal = NewObject <UFirestoreFieldValue>(WorldContentObject);
	FieldVal->SetValueAsInteger(Value);
	return FieldVal;
}

UFirestoreFieldValue* UFirestoreMgr::FirestoreFloat(UObject* WorldContentObject, float Value)
{
	UFirestoreFieldValue* FieldVal = NewObject <UFirestoreFieldValue>(WorldContentObject);
	FieldVal->SetValueAsFloat(Value);
	return FieldVal;
}

UFirestoreFieldValue* UFirestoreMgr::FirestoreBoolean(UObject* WorldContentObject, bool Value)
{
	UFirestoreFieldValue* FieldVal = NewObject <UFirestoreFieldValue>(WorldContentObject);
	FieldVal->SetValueAsBool(Value);
	return FieldVal;
}

UFirestoreFieldValue* UFirestoreMgr::FirestoreString(UObject* WorldContentObject, FString Value)
{
	UFirestoreFieldValue* FieldVal = NewObject <UFirestoreFieldValue>(WorldContentObject);
	FieldVal->SetValueAsString(Value);
	return FieldVal;
}

UFirestoreFieldValue* UFirestoreMgr::FirestoreReference(UObject* WorldContentObject, UFirebaseDocument* Value)
{
	UFirestoreFieldValue* FieldVal = NewObject <UFirestoreFieldValue>(WorldContentObject);
	FieldVal->SetValueAsRef(Value);
	return FieldVal;
}

UFirestoreFieldValue* UFirestoreMgr::FirestoreArray(UObject* WorldContentObject, const TArray<UFirestoreFieldValue*>& Value)
{
	UFirestoreFieldValue* FieldVal = NewObject <UFirestoreFieldValue>(WorldContentObject);
	FieldVal->SetValueAsArray(Value);
	return FieldVal;
}

UFirestoreFieldValue* UFirestoreMgr::FirestoreArrayRemove(UObject* WorldContentObject, const TArray<UFirestoreFieldValue*>& Value)
{
	UFirestoreFieldValue* FieldVal = NewObject <UFirestoreFieldValue>(WorldContentObject);
	FieldVal->ArrayRemove(Value);
	return FieldVal;
}

UFirestoreFieldValue* UFirestoreMgr::FirestoreArrayUnion(UObject* WorldContentObject, const TArray<UFirestoreFieldValue*>& Value)
{
	UFirestoreFieldValue* FieldVal = NewObject <UFirestoreFieldValue>(WorldContentObject);
	FieldVal->ArrayUnion(Value);
	return FieldVal;
}

UFirestoreFieldValue* UFirestoreMgr::FirestoreMap(UObject* WorldContentObject, const TMap<FName, UFirestoreFieldValue*>& Value)
{
	UFirestoreFieldValue* FieldVal = NewObject <UFirestoreFieldValue>(WorldContentObject);
	FieldVal->SetValueAsMap(Value);
	return FieldVal;
}