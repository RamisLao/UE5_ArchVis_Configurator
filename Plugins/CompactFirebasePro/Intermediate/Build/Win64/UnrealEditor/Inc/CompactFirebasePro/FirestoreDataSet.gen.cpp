// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CompactFirebasePro/Private/Firebase/FirestoreDataSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFirestoreDataSet() {}
// Cross Module References
	COMPACTFIREBASEPRO_API UEnum* Z_Construct_UEnum_CompactFirebasePro_EFieldValueType();
	UPackage* Z_Construct_UPackage__Script_CompactFirebasePro();
	COMPACTFIREBASEPRO_API UClass* Z_Construct_UClass_UFirestoreFieldValue_NoRegister();
	COMPACTFIREBASEPRO_API UClass* Z_Construct_UClass_UFirestoreFieldValue();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COMPACTFIREBASEPRO_API UClass* Z_Construct_UClass_UFirebaseDocument_NoRegister();
	COMPACTFIREBASEPRO_API UClass* Z_Construct_UClass_UFirestoreMapFieldValue_NoRegister();
	COMPACTFIREBASEPRO_API UClass* Z_Construct_UClass_UFirestoreMapFieldValue();
	COMPACTFIREBASEPRO_API UClass* Z_Construct_UClass_UFirestoreSnapshot_NoRegister();
	COMPACTFIREBASEPRO_API UClass* Z_Construct_UClass_UFirestoreSnapshot();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFieldValueType;
	static UEnum* EFieldValueType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EFieldValueType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EFieldValueType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CompactFirebasePro_EFieldValueType, Z_Construct_UPackage__Script_CompactFirebasePro(), TEXT("EFieldValueType"));
		}
		return Z_Registration_Info_UEnum_EFieldValueType.OuterSingleton;
	}
	template<> COMPACTFIREBASEPRO_API UEnum* StaticEnum<EFieldValueType>()
	{
		return EFieldValueType_StaticEnum();
	}
	struct Z_Construct_UEnum_CompactFirebasePro_EFieldValueType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CompactFirebasePro_EFieldValueType_Statics::Enumerators[] = {
		{ "EFieldValueType::FVT_None", (int64)EFieldValueType::FVT_None },
		{ "EFieldValueType::FVT_Boolean", (int64)EFieldValueType::FVT_Boolean },
		{ "EFieldValueType::FVT_Integer", (int64)EFieldValueType::FVT_Integer },
		{ "EFieldValueType::FVT_Double", (int64)EFieldValueType::FVT_Double },
		{ "EFieldValueType::FVT_String", (int64)EFieldValueType::FVT_String },
		{ "EFieldValueType::FVT_Reference", (int64)EFieldValueType::FVT_Reference },
		{ "EFieldValueType::FVT_Array", (int64)EFieldValueType::FVT_Array },
		{ "EFieldValueType::FVT_Map", (int64)EFieldValueType::FVT_Map },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CompactFirebasePro_EFieldValueType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Parameter Type. */" },
		{ "FVT_Array.DisplayName", "ARRAY" },
		{ "FVT_Array.Name", "EFieldValueType::FVT_Array" },
		{ "FVT_Array.ToolTip", "" },
		{ "FVT_Boolean.DisplayName", "BOOL" },
		{ "FVT_Boolean.Name", "EFieldValueType::FVT_Boolean" },
		{ "FVT_Boolean.ToolTip", "" },
		{ "FVT_Double.DisplayName", "FLOAT" },
		{ "FVT_Double.Name", "EFieldValueType::FVT_Double" },
		{ "FVT_Double.ToolTip", "" },
		{ "FVT_Integer.DisplayName", "INTEGER" },
		{ "FVT_Integer.Name", "EFieldValueType::FVT_Integer" },
		{ "FVT_Integer.ToolTip", "" },
		{ "FVT_Map.DisplayName", "MAP" },
		{ "FVT_Map.Name", "EFieldValueType::FVT_Map" },
		{ "FVT_Map.ToolTip", "" },
		{ "FVT_None.DisplayName", "NONE" },
		{ "FVT_None.Name", "EFieldValueType::FVT_None" },
		{ "FVT_None.ToolTip", "" },
		{ "FVT_Reference.DisplayName", "REFERENCE" },
		{ "FVT_Reference.Name", "EFieldValueType::FVT_Reference" },
		{ "FVT_Reference.ToolTip", "" },
		{ "FVT_String.DisplayName", "STRING" },
		{ "FVT_String.Name", "EFieldValueType::FVT_String" },
		{ "FVT_String.ToolTip", "" },
		{ "ModuleRelativePath", "Private/Firebase/FirestoreDataSet.h" },
		{ "ToolTip", "Parameter Type." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CompactFirebasePro_EFieldValueType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CompactFirebasePro,
		nullptr,
		"EFieldValueType",
		"EFieldValueType",
		Z_Construct_UEnum_CompactFirebasePro_EFieldValueType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CompactFirebasePro_EFieldValueType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CompactFirebasePro_EFieldValueType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CompactFirebasePro_EFieldValueType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CompactFirebasePro_EFieldValueType()
	{
		if (!Z_Registration_Info_UEnum_EFieldValueType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFieldValueType.InnerSingleton, Z_Construct_UEnum_CompactFirebasePro_EFieldValueType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EFieldValueType.InnerSingleton;
	}
	DEFINE_FUNCTION(UFirestoreFieldValue::execSetValueAsMap)
	{
		P_GET_TMAP_REF(FName,UFirestoreFieldValue*,Z_Param_Out_Val);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetValueAsMap(Z_Param_Out_Val);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirestoreFieldValue::execArrayUnion)
	{
		P_GET_TARRAY_REF(UFirestoreFieldValue*,Z_Param_Out_FieldArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ArrayUnion(Z_Param_Out_FieldArray);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirestoreFieldValue::execArrayRemove)
	{
		P_GET_TARRAY_REF(UFirestoreFieldValue*,Z_Param_Out_FieldArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ArrayRemove(Z_Param_Out_FieldArray);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirestoreFieldValue::execSetValueAsArray)
	{
		P_GET_TARRAY_REF(UFirestoreFieldValue*,Z_Param_Out_FieldArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetValueAsArray(Z_Param_Out_FieldArray);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirestoreFieldValue::execSetValueAsRef)
	{
		P_GET_OBJECT(UFirebaseDocument,Z_Param_Val);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetValueAsRef(Z_Param_Val);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirestoreFieldValue::execSetValueAsString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Val);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetValueAsString(Z_Param_Val);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirestoreFieldValue::execSetValueAsFloat)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Val);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetValueAsFloat(Z_Param_Val);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirestoreFieldValue::execSetValueAsInteger)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Val);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetValueAsInteger(Z_Param_Val);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirestoreFieldValue::execSetValueAsBool)
	{
		P_GET_UBOOL(Z_Param_Val);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetValueAsBool(Z_Param_Val);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirestoreFieldValue::execGetValueAsMap)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<FName,UFirestoreFieldValue*>*)Z_Param__Result=P_THIS->GetValueAsMap();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirestoreFieldValue::execGetValueAsArray)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UFirestoreFieldValue*>*)Z_Param__Result=P_THIS->GetValueAsArray();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirestoreFieldValue::execGetValueAsRef)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFirebaseDocument**)Z_Param__Result=P_THIS->GetValueAsRef();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirestoreFieldValue::execGetValueAsString)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetValueAsString();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirestoreFieldValue::execGetValueAsFloat)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetValueAsFloat();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirestoreFieldValue::execGetValueAsInteger)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetValueAsInteger();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirestoreFieldValue::execGetValueAsBool)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetValueAsBool();
		P_NATIVE_END;
	}
	void UFirestoreFieldValue::StaticRegisterNativesUFirestoreFieldValue()
	{
		UClass* Class = UFirestoreFieldValue::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ArrayRemove", &UFirestoreFieldValue::execArrayRemove },
			{ "ArrayUnion", &UFirestoreFieldValue::execArrayUnion },
			{ "GetValueAsArray", &UFirestoreFieldValue::execGetValueAsArray },
			{ "GetValueAsBool", &UFirestoreFieldValue::execGetValueAsBool },
			{ "GetValueAsFloat", &UFirestoreFieldValue::execGetValueAsFloat },
			{ "GetValueAsInteger", &UFirestoreFieldValue::execGetValueAsInteger },
			{ "GetValueAsMap", &UFirestoreFieldValue::execGetValueAsMap },
			{ "GetValueAsRef", &UFirestoreFieldValue::execGetValueAsRef },
			{ "GetValueAsString", &UFirestoreFieldValue::execGetValueAsString },
			{ "SetValueAsArray", &UFirestoreFieldValue::execSetValueAsArray },
			{ "SetValueAsBool", &UFirestoreFieldValue::execSetValueAsBool },
			{ "SetValueAsFloat", &UFirestoreFieldValue::execSetValueAsFloat },
			{ "SetValueAsInteger", &UFirestoreFieldValue::execSetValueAsInteger },
			{ "SetValueAsMap", &UFirestoreFieldValue::execSetValueAsMap },
			{ "SetValueAsRef", &UFirestoreFieldValue::execSetValueAsRef },
			{ "SetValueAsString", &UFirestoreFieldValue::execSetValueAsString },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFirestoreFieldValue_ArrayRemove_Statics
	{
		struct FirestoreFieldValue_eventArrayRemove_Parms
		{
			TArray<UFirestoreFieldValue*> FieldArray;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FieldArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FieldArray;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFirestoreFieldValue_ArrayRemove_Statics::NewProp_FieldArray_Inner = { "FieldArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UFirestoreFieldValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestoreFieldValue_ArrayRemove_Statics::NewProp_FieldArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFirestoreFieldValue_ArrayRemove_Statics::NewProp_FieldArray = { "FieldArray", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreFieldValue_eventArrayRemove_Parms, FieldArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UFirestoreFieldValue_ArrayRemove_Statics::NewProp_FieldArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreFieldValue_ArrayRemove_Statics::NewProp_FieldArray_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirestoreFieldValue_ArrayRemove_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreFieldValue_ArrayRemove_Statics::NewProp_FieldArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreFieldValue_ArrayRemove_Statics::NewProp_FieldArray,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestoreFieldValue_ArrayRemove_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*BlueprintCallable, Category = \"Firebase\"*/" },
		{ "ModuleRelativePath", "Private/Firebase/FirestoreDataSet.h" },
		{ "ToolTip", "BlueprintCallable, Category = \"Firebase\"" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirestoreFieldValue_ArrayRemove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirestoreFieldValue, nullptr, "ArrayRemove", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFirestoreFieldValue_ArrayRemove_Statics::FirestoreFieldValue_eventArrayRemove_Parms), Z_Construct_UFunction_UFirestoreFieldValue_ArrayRemove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreFieldValue_ArrayRemove_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirestoreFieldValue_ArrayRemove_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreFieldValue_ArrayRemove_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirestoreFieldValue_ArrayRemove()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFirestoreFieldValue_ArrayRemove_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirestoreFieldValue_ArrayUnion_Statics
	{
		struct FirestoreFieldValue_eventArrayUnion_Parms
		{
			TArray<UFirestoreFieldValue*> FieldArray;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FieldArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FieldArray;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFirestoreFieldValue_ArrayUnion_Statics::NewProp_FieldArray_Inner = { "FieldArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UFirestoreFieldValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestoreFieldValue_ArrayUnion_Statics::NewProp_FieldArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFirestoreFieldValue_ArrayUnion_Statics::NewProp_FieldArray = { "FieldArray", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreFieldValue_eventArrayUnion_Parms, FieldArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UFirestoreFieldValue_ArrayUnion_Statics::NewProp_FieldArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreFieldValue_ArrayUnion_Statics::NewProp_FieldArray_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirestoreFieldValue_ArrayUnion_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreFieldValue_ArrayUnion_Statics::NewProp_FieldArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreFieldValue_ArrayUnion_Statics::NewProp_FieldArray,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestoreFieldValue_ArrayUnion_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*BlueprintCallable, Category = \"Firebase\"*/" },
		{ "ModuleRelativePath", "Private/Firebase/FirestoreDataSet.h" },
		{ "ToolTip", "BlueprintCallable, Category = \"Firebase\"" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirestoreFieldValue_ArrayUnion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirestoreFieldValue, nullptr, "ArrayUnion", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFirestoreFieldValue_ArrayUnion_Statics::FirestoreFieldValue_eventArrayUnion_Parms), Z_Construct_UFunction_UFirestoreFieldValue_ArrayUnion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreFieldValue_ArrayUnion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirestoreFieldValue_ArrayUnion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreFieldValue_ArrayUnion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirestoreFieldValue_ArrayUnion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFirestoreFieldValue_ArrayUnion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirestoreFieldValue_GetValueAsArray_Statics
	{
		struct FirestoreFieldValue_eventGetValueAsArray_Parms
		{
			TArray<UFirestoreFieldValue*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFirestoreFieldValue_GetValueAsArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UFirestoreFieldValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFirestoreFieldValue_GetValueAsArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreFieldValue_eventGetValueAsArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirestoreFieldValue_GetValueAsArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreFieldValue_GetValueAsArray_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreFieldValue_GetValueAsArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestoreFieldValue_GetValueAsArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase" },
		{ "ModuleRelativePath", "Private/Firebase/FirestoreDataSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirestoreFieldValue_GetValueAsArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirestoreFieldValue, nullptr, "GetValueAsArray", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFirestoreFieldValue_GetValueAsArray_Statics::FirestoreFieldValue_eventGetValueAsArray_Parms), Z_Construct_UFunction_UFirestoreFieldValue_GetValueAsArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreFieldValue_GetValueAsArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirestoreFieldValue_GetValueAsArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreFieldValue_GetValueAsArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirestoreFieldValue_GetValueAsArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFirestoreFieldValue_GetValueAsArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirestoreFieldValue_GetValueAsBool_Statics
	{
		struct FirestoreFieldValue_eventGetValueAsBool_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFirestoreFieldValue_GetValueAsBool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FirestoreFieldValue_eventGetValueAsBool_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFirestoreFieldValue_GetValueAsBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FirestoreFieldValue_eventGetValueAsBool_Parms), &Z_Construct_UFunction_UFirestoreFieldValue_GetValueAsBool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirestoreFieldValue_GetValueAsBool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreFieldValue_GetValueAsBool_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestoreFieldValue_GetValueAsBool_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase" },
		{ "Comment", "//Get\n" },
		{ "ModuleRelativePath", "Private/Firebase/FirestoreDataSet.h" },
		{ "ToolTip", "Get" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirestoreFieldValue_GetValueAsBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirestoreFieldValue, nullptr, "GetValueAsBool", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFirestoreFieldValue_GetValueAsBool_Statics::FirestoreFieldValue_eventGetValueAsBool_Parms), Z_Construct_UFunction_UFirestoreFieldValue_GetValueAsBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreFieldValue_GetValueAsBool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirestoreFieldValue_GetValueAsBool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreFieldValue_GetValueAsBool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirestoreFieldValue_GetValueAsBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFirestoreFieldValue_GetValueAsBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirestoreFieldValue_GetValueAsFloat_Statics
	{
		struct FirestoreFieldValue_eventGetValueAsFloat_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFirestoreFieldValue_GetValueAsFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreFieldValue_eventGetValueAsFloat_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirestoreFieldValue_GetValueAsFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreFieldValue_GetValueAsFloat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestoreFieldValue_GetValueAsFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase" },
		{ "ModuleRelativePath", "Private/Firebase/FirestoreDataSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirestoreFieldValue_GetValueAsFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirestoreFieldValue, nullptr, "GetValueAsFloat", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFirestoreFieldValue_GetValueAsFloat_Statics::FirestoreFieldValue_eventGetValueAsFloat_Parms), Z_Construct_UFunction_UFirestoreFieldValue_GetValueAsFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreFieldValue_GetValueAsFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirestoreFieldValue_GetValueAsFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreFieldValue_GetValueAsFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirestoreFieldValue_GetValueAsFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFirestoreFieldValue_GetValueAsFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirestoreFieldValue_GetValueAsInteger_Statics
	{
		struct FirestoreFieldValue_eventGetValueAsInteger_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFirestoreFieldValue_GetValueAsInteger_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreFieldValue_eventGetValueAsInteger_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirestoreFieldValue_GetValueAsInteger_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreFieldValue_GetValueAsInteger_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestoreFieldValue_GetValueAsInteger_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase" },
		{ "ModuleRelativePath", "Private/Firebase/FirestoreDataSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirestoreFieldValue_GetValueAsInteger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirestoreFieldValue, nullptr, "GetValueAsInteger", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFirestoreFieldValue_GetValueAsInteger_Statics::FirestoreFieldValue_eventGetValueAsInteger_Parms), Z_Construct_UFunction_UFirestoreFieldValue_GetValueAsInteger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreFieldValue_GetValueAsInteger_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirestoreFieldValue_GetValueAsInteger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreFieldValue_GetValueAsInteger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirestoreFieldValue_GetValueAsInteger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFirestoreFieldValue_GetValueAsInteger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirestoreFieldValue_GetValueAsMap_Statics
	{
		struct FirestoreFieldValue_eventGetValueAsMap_Parms
		{
			TMap<FName,UFirestoreFieldValue*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFirestoreFieldValue_GetValueAsMap_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UFirestoreFieldValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UFirestoreFieldValue_GetValueAsMap_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UFirestoreFieldValue_GetValueAsMap_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreFieldValue_eventGetValueAsMap_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirestoreFieldValue_GetValueAsMap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreFieldValue_GetValueAsMap_Statics::NewProp_ReturnValue_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreFieldValue_GetValueAsMap_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreFieldValue_GetValueAsMap_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestoreFieldValue_GetValueAsMap_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase" },
		{ "ModuleRelativePath", "Private/Firebase/FirestoreDataSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirestoreFieldValue_GetValueAsMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirestoreFieldValue, nullptr, "GetValueAsMap", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFirestoreFieldValue_GetValueAsMap_Statics::FirestoreFieldValue_eventGetValueAsMap_Parms), Z_Construct_UFunction_UFirestoreFieldValue_GetValueAsMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreFieldValue_GetValueAsMap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirestoreFieldValue_GetValueAsMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreFieldValue_GetValueAsMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirestoreFieldValue_GetValueAsMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFirestoreFieldValue_GetValueAsMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirestoreFieldValue_GetValueAsRef_Statics
	{
		struct FirestoreFieldValue_eventGetValueAsRef_Parms
		{
			UFirebaseDocument* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFirestoreFieldValue_GetValueAsRef_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreFieldValue_eventGetValueAsRef_Parms, ReturnValue), Z_Construct_UClass_UFirebaseDocument_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirestoreFieldValue_GetValueAsRef_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreFieldValue_GetValueAsRef_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestoreFieldValue_GetValueAsRef_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase" },
		{ "ModuleRelativePath", "Private/Firebase/FirestoreDataSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirestoreFieldValue_GetValueAsRef_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirestoreFieldValue, nullptr, "GetValueAsRef", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFirestoreFieldValue_GetValueAsRef_Statics::FirestoreFieldValue_eventGetValueAsRef_Parms), Z_Construct_UFunction_UFirestoreFieldValue_GetValueAsRef_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreFieldValue_GetValueAsRef_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirestoreFieldValue_GetValueAsRef_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreFieldValue_GetValueAsRef_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirestoreFieldValue_GetValueAsRef()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFirestoreFieldValue_GetValueAsRef_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirestoreFieldValue_GetValueAsString_Statics
	{
		struct FirestoreFieldValue_eventGetValueAsString_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirestoreFieldValue_GetValueAsString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreFieldValue_eventGetValueAsString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirestoreFieldValue_GetValueAsString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreFieldValue_GetValueAsString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestoreFieldValue_GetValueAsString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase" },
		{ "ModuleRelativePath", "Private/Firebase/FirestoreDataSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirestoreFieldValue_GetValueAsString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirestoreFieldValue, nullptr, "GetValueAsString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFirestoreFieldValue_GetValueAsString_Statics::FirestoreFieldValue_eventGetValueAsString_Parms), Z_Construct_UFunction_UFirestoreFieldValue_GetValueAsString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreFieldValue_GetValueAsString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirestoreFieldValue_GetValueAsString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreFieldValue_GetValueAsString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirestoreFieldValue_GetValueAsString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFirestoreFieldValue_GetValueAsString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirestoreFieldValue_SetValueAsArray_Statics
	{
		struct FirestoreFieldValue_eventSetValueAsArray_Parms
		{
			TArray<UFirestoreFieldValue*> FieldArray;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FieldArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FieldArray;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFirestoreFieldValue_SetValueAsArray_Statics::NewProp_FieldArray_Inner = { "FieldArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UFirestoreFieldValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestoreFieldValue_SetValueAsArray_Statics::NewProp_FieldArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFirestoreFieldValue_SetValueAsArray_Statics::NewProp_FieldArray = { "FieldArray", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreFieldValue_eventSetValueAsArray_Parms, FieldArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UFirestoreFieldValue_SetValueAsArray_Statics::NewProp_FieldArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreFieldValue_SetValueAsArray_Statics::NewProp_FieldArray_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirestoreFieldValue_SetValueAsArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreFieldValue_SetValueAsArray_Statics::NewProp_FieldArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreFieldValue_SetValueAsArray_Statics::NewProp_FieldArray,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestoreFieldValue_SetValueAsArray_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*BlueprintCallable, Category = \"Firebase\"*/" },
		{ "ModuleRelativePath", "Private/Firebase/FirestoreDataSet.h" },
		{ "ToolTip", "BlueprintCallable, Category = \"Firebase\"" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirestoreFieldValue_SetValueAsArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirestoreFieldValue, nullptr, "SetValueAsArray", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFirestoreFieldValue_SetValueAsArray_Statics::FirestoreFieldValue_eventSetValueAsArray_Parms), Z_Construct_UFunction_UFirestoreFieldValue_SetValueAsArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreFieldValue_SetValueAsArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirestoreFieldValue_SetValueAsArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreFieldValue_SetValueAsArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirestoreFieldValue_SetValueAsArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFirestoreFieldValue_SetValueAsArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirestoreFieldValue_SetValueAsBool_Statics
	{
		struct FirestoreFieldValue_eventSetValueAsBool_Parms
		{
			bool Val;
		};
		static void NewProp_Val_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Val;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFirestoreFieldValue_SetValueAsBool_Statics::NewProp_Val_SetBit(void* Obj)
	{
		((FirestoreFieldValue_eventSetValueAsBool_Parms*)Obj)->Val = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFirestoreFieldValue_SetValueAsBool_Statics::NewProp_Val = { "Val", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FirestoreFieldValue_eventSetValueAsBool_Parms), &Z_Construct_UFunction_UFirestoreFieldValue_SetValueAsBool_Statics::NewProp_Val_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirestoreFieldValue_SetValueAsBool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreFieldValue_SetValueAsBool_Statics::NewProp_Val,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestoreFieldValue_SetValueAsBool_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*BlueprintCallable, Category = \"Firebase\"*/" },
		{ "ModuleRelativePath", "Private/Firebase/FirestoreDataSet.h" },
		{ "ToolTip", "BlueprintCallable, Category = \"Firebase\"" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirestoreFieldValue_SetValueAsBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirestoreFieldValue, nullptr, "SetValueAsBool", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFirestoreFieldValue_SetValueAsBool_Statics::FirestoreFieldValue_eventSetValueAsBool_Parms), Z_Construct_UFunction_UFirestoreFieldValue_SetValueAsBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreFieldValue_SetValueAsBool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirestoreFieldValue_SetValueAsBool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreFieldValue_SetValueAsBool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirestoreFieldValue_SetValueAsBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFirestoreFieldValue_SetValueAsBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirestoreFieldValue_SetValueAsFloat_Statics
	{
		struct FirestoreFieldValue_eventSetValueAsFloat_Parms
		{
			float Val;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Val;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFirestoreFieldValue_SetValueAsFloat_Statics::NewProp_Val = { "Val", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreFieldValue_eventSetValueAsFloat_Parms, Val), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirestoreFieldValue_SetValueAsFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreFieldValue_SetValueAsFloat_Statics::NewProp_Val,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestoreFieldValue_SetValueAsFloat_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*BlueprintCallable, Category = \"Firebase\"*/" },
		{ "ModuleRelativePath", "Private/Firebase/FirestoreDataSet.h" },
		{ "ToolTip", "BlueprintCallable, Category = \"Firebase\"" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirestoreFieldValue_SetValueAsFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirestoreFieldValue, nullptr, "SetValueAsFloat", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFirestoreFieldValue_SetValueAsFloat_Statics::FirestoreFieldValue_eventSetValueAsFloat_Parms), Z_Construct_UFunction_UFirestoreFieldValue_SetValueAsFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreFieldValue_SetValueAsFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirestoreFieldValue_SetValueAsFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreFieldValue_SetValueAsFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirestoreFieldValue_SetValueAsFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFirestoreFieldValue_SetValueAsFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirestoreFieldValue_SetValueAsInteger_Statics
	{
		struct FirestoreFieldValue_eventSetValueAsInteger_Parms
		{
			int32 Val;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Val;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFirestoreFieldValue_SetValueAsInteger_Statics::NewProp_Val = { "Val", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreFieldValue_eventSetValueAsInteger_Parms, Val), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirestoreFieldValue_SetValueAsInteger_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreFieldValue_SetValueAsInteger_Statics::NewProp_Val,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestoreFieldValue_SetValueAsInteger_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*BlueprintCallable, Category = \"Firebase\"*/" },
		{ "ModuleRelativePath", "Private/Firebase/FirestoreDataSet.h" },
		{ "ToolTip", "BlueprintCallable, Category = \"Firebase\"" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirestoreFieldValue_SetValueAsInteger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirestoreFieldValue, nullptr, "SetValueAsInteger", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFirestoreFieldValue_SetValueAsInteger_Statics::FirestoreFieldValue_eventSetValueAsInteger_Parms), Z_Construct_UFunction_UFirestoreFieldValue_SetValueAsInteger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreFieldValue_SetValueAsInteger_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirestoreFieldValue_SetValueAsInteger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreFieldValue_SetValueAsInteger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirestoreFieldValue_SetValueAsInteger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFirestoreFieldValue_SetValueAsInteger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirestoreFieldValue_SetValueAsMap_Statics
	{
		struct FirestoreFieldValue_eventSetValueAsMap_Parms
		{
			TMap<FName,UFirestoreFieldValue*> Val;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Val_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Val_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Val_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Val;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFirestoreFieldValue_SetValueAsMap_Statics::NewProp_Val_ValueProp = { "Val", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UFirestoreFieldValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UFirestoreFieldValue_SetValueAsMap_Statics::NewProp_Val_Key_KeyProp = { "Val_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestoreFieldValue_SetValueAsMap_Statics::NewProp_Val_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UFirestoreFieldValue_SetValueAsMap_Statics::NewProp_Val = { "Val", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreFieldValue_eventSetValueAsMap_Parms, Val), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UFirestoreFieldValue_SetValueAsMap_Statics::NewProp_Val_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreFieldValue_SetValueAsMap_Statics::NewProp_Val_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirestoreFieldValue_SetValueAsMap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreFieldValue_SetValueAsMap_Statics::NewProp_Val_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreFieldValue_SetValueAsMap_Statics::NewProp_Val_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreFieldValue_SetValueAsMap_Statics::NewProp_Val,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestoreFieldValue_SetValueAsMap_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*BlueprintCallable, Category = \"Firebase\"*/" },
		{ "ModuleRelativePath", "Private/Firebase/FirestoreDataSet.h" },
		{ "ToolTip", "BlueprintCallable, Category = \"Firebase\"" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirestoreFieldValue_SetValueAsMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirestoreFieldValue, nullptr, "SetValueAsMap", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFirestoreFieldValue_SetValueAsMap_Statics::FirestoreFieldValue_eventSetValueAsMap_Parms), Z_Construct_UFunction_UFirestoreFieldValue_SetValueAsMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreFieldValue_SetValueAsMap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirestoreFieldValue_SetValueAsMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreFieldValue_SetValueAsMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirestoreFieldValue_SetValueAsMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFirestoreFieldValue_SetValueAsMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirestoreFieldValue_SetValueAsRef_Statics
	{
		struct FirestoreFieldValue_eventSetValueAsRef_Parms
		{
			UFirebaseDocument* Val;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Val;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFirestoreFieldValue_SetValueAsRef_Statics::NewProp_Val = { "Val", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreFieldValue_eventSetValueAsRef_Parms, Val), Z_Construct_UClass_UFirebaseDocument_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirestoreFieldValue_SetValueAsRef_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreFieldValue_SetValueAsRef_Statics::NewProp_Val,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestoreFieldValue_SetValueAsRef_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*BlueprintCallable, Category = \"Firebase\"*/" },
		{ "ModuleRelativePath", "Private/Firebase/FirestoreDataSet.h" },
		{ "ToolTip", "BlueprintCallable, Category = \"Firebase\"" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirestoreFieldValue_SetValueAsRef_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirestoreFieldValue, nullptr, "SetValueAsRef", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFirestoreFieldValue_SetValueAsRef_Statics::FirestoreFieldValue_eventSetValueAsRef_Parms), Z_Construct_UFunction_UFirestoreFieldValue_SetValueAsRef_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreFieldValue_SetValueAsRef_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirestoreFieldValue_SetValueAsRef_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreFieldValue_SetValueAsRef_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirestoreFieldValue_SetValueAsRef()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFirestoreFieldValue_SetValueAsRef_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirestoreFieldValue_SetValueAsString_Statics
	{
		struct FirestoreFieldValue_eventSetValueAsString_Parms
		{
			FString Val;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Val;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirestoreFieldValue_SetValueAsString_Statics::NewProp_Val = { "Val", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreFieldValue_eventSetValueAsString_Parms, Val), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirestoreFieldValue_SetValueAsString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreFieldValue_SetValueAsString_Statics::NewProp_Val,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestoreFieldValue_SetValueAsString_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*BlueprintCallable, Category = \"Firebase\"*/" },
		{ "ModuleRelativePath", "Private/Firebase/FirestoreDataSet.h" },
		{ "ToolTip", "BlueprintCallable, Category = \"Firebase\"" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirestoreFieldValue_SetValueAsString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirestoreFieldValue, nullptr, "SetValueAsString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFirestoreFieldValue_SetValueAsString_Statics::FirestoreFieldValue_eventSetValueAsString_Parms), Z_Construct_UFunction_UFirestoreFieldValue_SetValueAsString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreFieldValue_SetValueAsString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirestoreFieldValue_SetValueAsString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreFieldValue_SetValueAsString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirestoreFieldValue_SetValueAsString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFirestoreFieldValue_SetValueAsString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFirestoreFieldValue);
	UClass* Z_Construct_UClass_UFirestoreFieldValue_NoRegister()
	{
		return UFirestoreFieldValue::StaticClass();
	}
	struct Z_Construct_UClass_UFirestoreFieldValue_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RefVal_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RefVal;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ArrayVal_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArrayVal_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ArrayVal;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MapVal_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_MapVal_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MapVal_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_MapVal;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RemoveArrayVal_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RemoveArrayVal_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RemoveArrayVal;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_UnionArrayVal_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnionArrayVal_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UnionArrayVal;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFirestoreFieldValue_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CompactFirebasePro,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFirestoreFieldValue_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFirestoreFieldValue_ArrayRemove, "ArrayRemove" }, // 410121925
		{ &Z_Construct_UFunction_UFirestoreFieldValue_ArrayUnion, "ArrayUnion" }, // 2162410795
		{ &Z_Construct_UFunction_UFirestoreFieldValue_GetValueAsArray, "GetValueAsArray" }, // 778666182
		{ &Z_Construct_UFunction_UFirestoreFieldValue_GetValueAsBool, "GetValueAsBool" }, // 3771618670
		{ &Z_Construct_UFunction_UFirestoreFieldValue_GetValueAsFloat, "GetValueAsFloat" }, // 1777453903
		{ &Z_Construct_UFunction_UFirestoreFieldValue_GetValueAsInteger, "GetValueAsInteger" }, // 3364387017
		{ &Z_Construct_UFunction_UFirestoreFieldValue_GetValueAsMap, "GetValueAsMap" }, // 689939723
		{ &Z_Construct_UFunction_UFirestoreFieldValue_GetValueAsRef, "GetValueAsRef" }, // 3600197732
		{ &Z_Construct_UFunction_UFirestoreFieldValue_GetValueAsString, "GetValueAsString" }, // 1339154628
		{ &Z_Construct_UFunction_UFirestoreFieldValue_SetValueAsArray, "SetValueAsArray" }, // 3498233512
		{ &Z_Construct_UFunction_UFirestoreFieldValue_SetValueAsBool, "SetValueAsBool" }, // 805133422
		{ &Z_Construct_UFunction_UFirestoreFieldValue_SetValueAsFloat, "SetValueAsFloat" }, // 1621475320
		{ &Z_Construct_UFunction_UFirestoreFieldValue_SetValueAsInteger, "SetValueAsInteger" }, // 3414645434
		{ &Z_Construct_UFunction_UFirestoreFieldValue_SetValueAsMap, "SetValueAsMap" }, // 3960083650
		{ &Z_Construct_UFunction_UFirestoreFieldValue_SetValueAsRef, "SetValueAsRef" }, // 2653694371
		{ &Z_Construct_UFunction_UFirestoreFieldValue_SetValueAsString, "SetValueAsString" }, // 3641529792
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirestoreFieldValue_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Firebase/FirestoreDataSet.h" },
		{ "ModuleRelativePath", "Private/Firebase/FirestoreDataSet.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFirestoreFieldValue_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirestoreFieldValue_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Firebase" },
		{ "ModuleRelativePath", "Private/Firebase/FirestoreDataSet.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFirestoreFieldValue_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirestoreFieldValue, Type), Z_Construct_UEnum_CompactFirebasePro_EFieldValueType, METADATA_PARAMS(Z_Construct_UClass_UFirestoreFieldValue_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirestoreFieldValue_Statics::NewProp_Type_MetaData)) }; // 322947483
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirestoreFieldValue_Statics::NewProp_RefVal_MetaData[] = {
		{ "ModuleRelativePath", "Private/Firebase/FirestoreDataSet.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFirestoreFieldValue_Statics::NewProp_RefVal = { "RefVal", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirestoreFieldValue, RefVal), Z_Construct_UClass_UFirebaseDocument_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFirestoreFieldValue_Statics::NewProp_RefVal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirestoreFieldValue_Statics::NewProp_RefVal_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFirestoreFieldValue_Statics::NewProp_ArrayVal_Inner = { "ArrayVal", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UFirestoreFieldValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirestoreFieldValue_Statics::NewProp_ArrayVal_MetaData[] = {
		{ "ModuleRelativePath", "Private/Firebase/FirestoreDataSet.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFirestoreFieldValue_Statics::NewProp_ArrayVal = { "ArrayVal", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirestoreFieldValue, ArrayVal), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UFirestoreFieldValue_Statics::NewProp_ArrayVal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirestoreFieldValue_Statics::NewProp_ArrayVal_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFirestoreFieldValue_Statics::NewProp_MapVal_ValueProp = { "MapVal", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UFirestoreFieldValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UFirestoreFieldValue_Statics::NewProp_MapVal_Key_KeyProp = { "MapVal_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirestoreFieldValue_Statics::NewProp_MapVal_MetaData[] = {
		{ "ModuleRelativePath", "Private/Firebase/FirestoreDataSet.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UFirestoreFieldValue_Statics::NewProp_MapVal = { "MapVal", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirestoreFieldValue, MapVal), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UFirestoreFieldValue_Statics::NewProp_MapVal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirestoreFieldValue_Statics::NewProp_MapVal_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFirestoreFieldValue_Statics::NewProp_RemoveArrayVal_Inner = { "RemoveArrayVal", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UFirestoreFieldValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirestoreFieldValue_Statics::NewProp_RemoveArrayVal_MetaData[] = {
		{ "ModuleRelativePath", "Private/Firebase/FirestoreDataSet.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFirestoreFieldValue_Statics::NewProp_RemoveArrayVal = { "RemoveArrayVal", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirestoreFieldValue, RemoveArrayVal), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UFirestoreFieldValue_Statics::NewProp_RemoveArrayVal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirestoreFieldValue_Statics::NewProp_RemoveArrayVal_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFirestoreFieldValue_Statics::NewProp_UnionArrayVal_Inner = { "UnionArrayVal", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UFirestoreFieldValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirestoreFieldValue_Statics::NewProp_UnionArrayVal_MetaData[] = {
		{ "ModuleRelativePath", "Private/Firebase/FirestoreDataSet.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFirestoreFieldValue_Statics::NewProp_UnionArrayVal = { "UnionArrayVal", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirestoreFieldValue, UnionArrayVal), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UFirestoreFieldValue_Statics::NewProp_UnionArrayVal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirestoreFieldValue_Statics::NewProp_UnionArrayVal_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFirestoreFieldValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirestoreFieldValue_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirestoreFieldValue_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirestoreFieldValue_Statics::NewProp_RefVal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirestoreFieldValue_Statics::NewProp_ArrayVal_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirestoreFieldValue_Statics::NewProp_ArrayVal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirestoreFieldValue_Statics::NewProp_MapVal_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirestoreFieldValue_Statics::NewProp_MapVal_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirestoreFieldValue_Statics::NewProp_MapVal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirestoreFieldValue_Statics::NewProp_RemoveArrayVal_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirestoreFieldValue_Statics::NewProp_RemoveArrayVal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirestoreFieldValue_Statics::NewProp_UnionArrayVal_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirestoreFieldValue_Statics::NewProp_UnionArrayVal,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFirestoreFieldValue_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFirestoreFieldValue>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFirestoreFieldValue_Statics::ClassParams = {
		&UFirestoreFieldValue::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFirestoreFieldValue_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UFirestoreFieldValue_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFirestoreFieldValue_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFirestoreFieldValue_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFirestoreFieldValue()
	{
		if (!Z_Registration_Info_UClass_UFirestoreFieldValue.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFirestoreFieldValue.OuterSingleton, Z_Construct_UClass_UFirestoreFieldValue_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFirestoreFieldValue.OuterSingleton;
	}
	template<> COMPACTFIREBASEPRO_API UClass* StaticClass<UFirestoreFieldValue>()
	{
		return UFirestoreFieldValue::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFirestoreFieldValue);
	DEFINE_FUNCTION(UFirestoreMapFieldValue::execGetField)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_KeyName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFirestoreFieldValue**)Z_Param__Result=P_THIS->GetField(Z_Param_KeyName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirestoreMapFieldValue::execAddField)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_KeyName);
		P_GET_OBJECT(UFirestoreFieldValue,Z_Param_FieldValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddField(Z_Param_KeyName,Z_Param_FieldValue);
		P_NATIVE_END;
	}
	void UFirestoreMapFieldValue::StaticRegisterNativesUFirestoreMapFieldValue()
	{
		UClass* Class = UFirestoreMapFieldValue::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddField", &UFirestoreMapFieldValue::execAddField },
			{ "GetField", &UFirestoreMapFieldValue::execGetField },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFirestoreMapFieldValue_AddField_Statics
	{
		struct FirestoreMapFieldValue_eventAddField_Parms
		{
			FName KeyName;
			UFirestoreFieldValue* FieldValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_KeyName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FieldValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UFirestoreMapFieldValue_AddField_Statics::NewProp_KeyName = { "KeyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreMapFieldValue_eventAddField_Parms, KeyName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFirestoreMapFieldValue_AddField_Statics::NewProp_FieldValue = { "FieldValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreMapFieldValue_eventAddField_Parms, FieldValue), Z_Construct_UClass_UFirestoreFieldValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirestoreMapFieldValue_AddField_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreMapFieldValue_AddField_Statics::NewProp_KeyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreMapFieldValue_AddField_Statics::NewProp_FieldValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestoreMapFieldValue_AddField_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase" },
		{ "ModuleRelativePath", "Private/Firebase/FirestoreDataSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirestoreMapFieldValue_AddField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirestoreMapFieldValue, nullptr, "AddField", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFirestoreMapFieldValue_AddField_Statics::FirestoreMapFieldValue_eventAddField_Parms), Z_Construct_UFunction_UFirestoreMapFieldValue_AddField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreMapFieldValue_AddField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirestoreMapFieldValue_AddField_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreMapFieldValue_AddField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirestoreMapFieldValue_AddField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFirestoreMapFieldValue_AddField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirestoreMapFieldValue_GetField_Statics
	{
		struct FirestoreMapFieldValue_eventGetField_Parms
		{
			FName KeyName;
			UFirestoreFieldValue* ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_KeyName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UFirestoreMapFieldValue_GetField_Statics::NewProp_KeyName = { "KeyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreMapFieldValue_eventGetField_Parms, KeyName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFirestoreMapFieldValue_GetField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreMapFieldValue_eventGetField_Parms, ReturnValue), Z_Construct_UClass_UFirestoreFieldValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirestoreMapFieldValue_GetField_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreMapFieldValue_GetField_Statics::NewProp_KeyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreMapFieldValue_GetField_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestoreMapFieldValue_GetField_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase" },
		{ "ModuleRelativePath", "Private/Firebase/FirestoreDataSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirestoreMapFieldValue_GetField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirestoreMapFieldValue, nullptr, "GetField", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFirestoreMapFieldValue_GetField_Statics::FirestoreMapFieldValue_eventGetField_Parms), Z_Construct_UFunction_UFirestoreMapFieldValue_GetField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreMapFieldValue_GetField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirestoreMapFieldValue_GetField_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreMapFieldValue_GetField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirestoreMapFieldValue_GetField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFirestoreMapFieldValue_GetField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFirestoreMapFieldValue);
	UClass* Z_Construct_UClass_UFirestoreMapFieldValue_NoRegister()
	{
		return UFirestoreMapFieldValue::StaticClass();
	}
	struct Z_Construct_UClass_UFirestoreMapFieldValue_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DataMap_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_DataMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_DataMap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFirestoreMapFieldValue_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CompactFirebasePro,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFirestoreMapFieldValue_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFirestoreMapFieldValue_AddField, "AddField" }, // 4418068
		{ &Z_Construct_UFunction_UFirestoreMapFieldValue_GetField, "GetField" }, // 3426960619
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirestoreMapFieldValue_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Firebase/FirestoreDataSet.h" },
		{ "ModuleRelativePath", "Private/Firebase/FirestoreDataSet.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFirestoreMapFieldValue_Statics::NewProp_DataMap_ValueProp = { "DataMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UFirestoreFieldValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UFirestoreMapFieldValue_Statics::NewProp_DataMap_Key_KeyProp = { "DataMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirestoreMapFieldValue_Statics::NewProp_DataMap_MetaData[] = {
		{ "ModuleRelativePath", "Private/Firebase/FirestoreDataSet.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UFirestoreMapFieldValue_Statics::NewProp_DataMap = { "DataMap", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirestoreMapFieldValue, DataMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UFirestoreMapFieldValue_Statics::NewProp_DataMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirestoreMapFieldValue_Statics::NewProp_DataMap_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFirestoreMapFieldValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirestoreMapFieldValue_Statics::NewProp_DataMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirestoreMapFieldValue_Statics::NewProp_DataMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirestoreMapFieldValue_Statics::NewProp_DataMap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFirestoreMapFieldValue_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFirestoreMapFieldValue>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFirestoreMapFieldValue_Statics::ClassParams = {
		&UFirestoreMapFieldValue::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFirestoreMapFieldValue_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UFirestoreMapFieldValue_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFirestoreMapFieldValue_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFirestoreMapFieldValue_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFirestoreMapFieldValue()
	{
		if (!Z_Registration_Info_UClass_UFirestoreMapFieldValue.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFirestoreMapFieldValue.OuterSingleton, Z_Construct_UClass_UFirestoreMapFieldValue_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFirestoreMapFieldValue.OuterSingleton;
	}
	template<> COMPACTFIREBASEPRO_API UClass* StaticClass<UFirestoreMapFieldValue>()
	{
		return UFirestoreMapFieldValue::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFirestoreMapFieldValue);
	DEFINE_FUNCTION(UFirestoreSnapshot::execGetAllFieldNames)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FName>*)Z_Param__Result=P_THIS->GetAllFieldNames();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirestoreSnapshot::execGetField)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_KeyName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFirestoreFieldValue**)Z_Param__Result=P_THIS->GetField(Z_Param_KeyName);
		P_NATIVE_END;
	}
	void UFirestoreSnapshot::StaticRegisterNativesUFirestoreSnapshot()
	{
		UClass* Class = UFirestoreSnapshot::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAllFieldNames", &UFirestoreSnapshot::execGetAllFieldNames },
			{ "GetField", &UFirestoreSnapshot::execGetField },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFirestoreSnapshot_GetAllFieldNames_Statics
	{
		struct FirestoreSnapshot_eventGetAllFieldNames_Parms
		{
			TArray<FName> ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UFirestoreSnapshot_GetAllFieldNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFirestoreSnapshot_GetAllFieldNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreSnapshot_eventGetAllFieldNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirestoreSnapshot_GetAllFieldNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreSnapshot_GetAllFieldNames_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreSnapshot_GetAllFieldNames_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestoreSnapshot_GetAllFieldNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase" },
		{ "ModuleRelativePath", "Private/Firebase/FirestoreDataSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirestoreSnapshot_GetAllFieldNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirestoreSnapshot, nullptr, "GetAllFieldNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFirestoreSnapshot_GetAllFieldNames_Statics::FirestoreSnapshot_eventGetAllFieldNames_Parms), Z_Construct_UFunction_UFirestoreSnapshot_GetAllFieldNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreSnapshot_GetAllFieldNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirestoreSnapshot_GetAllFieldNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreSnapshot_GetAllFieldNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirestoreSnapshot_GetAllFieldNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFirestoreSnapshot_GetAllFieldNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirestoreSnapshot_GetField_Statics
	{
		struct FirestoreSnapshot_eventGetField_Parms
		{
			FName KeyName;
			UFirestoreFieldValue* ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_KeyName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UFirestoreSnapshot_GetField_Statics::NewProp_KeyName = { "KeyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreSnapshot_eventGetField_Parms, KeyName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFirestoreSnapshot_GetField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirestoreSnapshot_eventGetField_Parms, ReturnValue), Z_Construct_UClass_UFirestoreFieldValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirestoreSnapshot_GetField_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreSnapshot_GetField_Statics::NewProp_KeyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirestoreSnapshot_GetField_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirestoreSnapshot_GetField_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase" },
		{ "ModuleRelativePath", "Private/Firebase/FirestoreDataSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirestoreSnapshot_GetField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirestoreSnapshot, nullptr, "GetField", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFirestoreSnapshot_GetField_Statics::FirestoreSnapshot_eventGetField_Parms), Z_Construct_UFunction_UFirestoreSnapshot_GetField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreSnapshot_GetField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirestoreSnapshot_GetField_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirestoreSnapshot_GetField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirestoreSnapshot_GetField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFirestoreSnapshot_GetField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFirestoreSnapshot);
	UClass* Z_Construct_UClass_UFirestoreSnapshot_NoRegister()
	{
		return UFirestoreSnapshot::StaticClass();
	}
	struct Z_Construct_UClass_UFirestoreSnapshot_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DataMap_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_DataMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_DataMap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFirestoreSnapshot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CompactFirebasePro,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFirestoreSnapshot_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFirestoreSnapshot_GetAllFieldNames, "GetAllFieldNames" }, // 894985878
		{ &Z_Construct_UFunction_UFirestoreSnapshot_GetField, "GetField" }, // 4259691648
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirestoreSnapshot_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Firebase/FirestoreDataSet.h" },
		{ "ModuleRelativePath", "Private/Firebase/FirestoreDataSet.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFirestoreSnapshot_Statics::NewProp_DataMap_ValueProp = { "DataMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UFirestoreFieldValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UFirestoreSnapshot_Statics::NewProp_DataMap_Key_KeyProp = { "DataMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirestoreSnapshot_Statics::NewProp_DataMap_MetaData[] = {
		{ "ModuleRelativePath", "Private/Firebase/FirestoreDataSet.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UFirestoreSnapshot_Statics::NewProp_DataMap = { "DataMap", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirestoreSnapshot, DataMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UFirestoreSnapshot_Statics::NewProp_DataMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirestoreSnapshot_Statics::NewProp_DataMap_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFirestoreSnapshot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirestoreSnapshot_Statics::NewProp_DataMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirestoreSnapshot_Statics::NewProp_DataMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirestoreSnapshot_Statics::NewProp_DataMap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFirestoreSnapshot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFirestoreSnapshot>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFirestoreSnapshot_Statics::ClassParams = {
		&UFirestoreSnapshot::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFirestoreSnapshot_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UFirestoreSnapshot_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFirestoreSnapshot_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFirestoreSnapshot_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFirestoreSnapshot()
	{
		if (!Z_Registration_Info_UClass_UFirestoreSnapshot.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFirestoreSnapshot.OuterSingleton, Z_Construct_UClass_UFirestoreSnapshot_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFirestoreSnapshot.OuterSingleton;
	}
	template<> COMPACTFIREBASEPRO_API UClass* StaticClass<UFirestoreSnapshot>()
	{
		return UFirestoreSnapshot::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFirestoreSnapshot);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirestoreDataSet_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirestoreDataSet_h_Statics::EnumInfo[] = {
		{ EFieldValueType_StaticEnum, TEXT("EFieldValueType"), &Z_Registration_Info_UEnum_EFieldValueType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 322947483U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirestoreDataSet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFirestoreFieldValue, UFirestoreFieldValue::StaticClass, TEXT("UFirestoreFieldValue"), &Z_Registration_Info_UClass_UFirestoreFieldValue, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFirestoreFieldValue), 2714377672U) },
		{ Z_Construct_UClass_UFirestoreMapFieldValue, UFirestoreMapFieldValue::StaticClass, TEXT("UFirestoreMapFieldValue"), &Z_Registration_Info_UClass_UFirestoreMapFieldValue, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFirestoreMapFieldValue), 238644253U) },
		{ Z_Construct_UClass_UFirestoreSnapshot, UFirestoreSnapshot::StaticClass, TEXT("UFirestoreSnapshot"), &Z_Registration_Info_UClass_UFirestoreSnapshot, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFirestoreSnapshot), 560189290U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirestoreDataSet_h_4286639912(TEXT("/Script/CompactFirebasePro"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirestoreDataSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirestoreDataSet_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirestoreDataSet_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirestoreDataSet_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
