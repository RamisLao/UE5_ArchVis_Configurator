// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CompactFirebasePro/Private/Firebase/FirebaseAuthMgr.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFirebaseAuthMgr() {}
// Cross Module References
	COMPACTFIREBASEPRO_API UFunction* Z_Construct_UDelegateFunction_CompactFirebasePro_AuthRetDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_CompactFirebasePro();
	COMPACTFIREBASEPRO_API UEnum* Z_Construct_UEnum_CompactFirebasePro_ERequestType();
	COMPACTFIREBASEPRO_API UScriptStruct* Z_Construct_UScriptStruct_FResponseUnion();
	COMPACTFIREBASEPRO_API UScriptStruct* Z_Construct_UScriptStruct_FRequestUID();
	COMPACTFIREBASEPRO_API UClass* Z_Construct_UClass_URequestUnion_NoRegister();
	COMPACTFIREBASEPRO_API UClass* Z_Construct_UClass_URequestUnion();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COMPACTFIREBASEPRO_API UClass* Z_Construct_UClass_UFirebaseAuthMgr_NoRegister();
	COMPACTFIREBASEPRO_API UClass* Z_Construct_UClass_UFirebaseAuthMgr();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_CompactFirebasePro_AuthRetDelegate__DelegateSignature_Statics
	{
		struct _Script_CompactFirebasePro_eventAuthRetDelegate_Parms
		{
			FString Email;
			int32 RetCode;
			FString RetMsg;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Email_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Email;
		static const UECodeGen_Private::FIntPropertyParams NewProp_RetCode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RetMsg_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_RetMsg;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CompactFirebasePro_AuthRetDelegate__DelegateSignature_Statics::NewProp_Email_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_CompactFirebasePro_AuthRetDelegate__DelegateSignature_Statics::NewProp_Email = { "Email", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_CompactFirebasePro_eventAuthRetDelegate_Parms, Email), METADATA_PARAMS(Z_Construct_UDelegateFunction_CompactFirebasePro_AuthRetDelegate__DelegateSignature_Statics::NewProp_Email_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CompactFirebasePro_AuthRetDelegate__DelegateSignature_Statics::NewProp_Email_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_CompactFirebasePro_AuthRetDelegate__DelegateSignature_Statics::NewProp_RetCode = { "RetCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_CompactFirebasePro_eventAuthRetDelegate_Parms, RetCode), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CompactFirebasePro_AuthRetDelegate__DelegateSignature_Statics::NewProp_RetMsg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_CompactFirebasePro_AuthRetDelegate__DelegateSignature_Statics::NewProp_RetMsg = { "RetMsg", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_CompactFirebasePro_eventAuthRetDelegate_Parms, RetMsg), METADATA_PARAMS(Z_Construct_UDelegateFunction_CompactFirebasePro_AuthRetDelegate__DelegateSignature_Statics::NewProp_RetMsg_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CompactFirebasePro_AuthRetDelegate__DelegateSignature_Statics::NewProp_RetMsg_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CompactFirebasePro_AuthRetDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CompactFirebasePro_AuthRetDelegate__DelegateSignature_Statics::NewProp_Email,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CompactFirebasePro_AuthRetDelegate__DelegateSignature_Statics::NewProp_RetCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CompactFirebasePro_AuthRetDelegate__DelegateSignature_Statics::NewProp_RetMsg,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CompactFirebasePro_AuthRetDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//DECLARE_LOG_CATEGORY_EXTERN(FirebaseAuthLog, Log, All);\n" },
		{ "ModuleRelativePath", "Private/Firebase/FirebaseAuthMgr.h" },
		{ "ToolTip", "DECLARE_LOG_CATEGORY_EXTERN(FirebaseAuthLog, Log, All);" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CompactFirebasePro_AuthRetDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CompactFirebasePro, nullptr, "AuthRetDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_CompactFirebasePro_AuthRetDelegate__DelegateSignature_Statics::_Script_CompactFirebasePro_eventAuthRetDelegate_Parms), Z_Construct_UDelegateFunction_CompactFirebasePro_AuthRetDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CompactFirebasePro_AuthRetDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_CompactFirebasePro_AuthRetDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CompactFirebasePro_AuthRetDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_CompactFirebasePro_AuthRetDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CompactFirebasePro_AuthRetDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERequestType;
	static UEnum* ERequestType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERequestType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERequestType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CompactFirebasePro_ERequestType, Z_Construct_UPackage__Script_CompactFirebasePro(), TEXT("ERequestType"));
		}
		return Z_Registration_Info_UEnum_ERequestType.OuterSingleton;
	}
	template<> COMPACTFIREBASEPRO_API UEnum* StaticEnum<ERequestType>()
	{
		return ERequestType_StaticEnum();
	}
	struct Z_Construct_UEnum_CompactFirebasePro_ERequestType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CompactFirebasePro_ERequestType_Statics::Enumerators[] = {
		{ "ERequestType::ERT_None", (int64)ERequestType::ERT_None },
		{ "ERequestType::ERT_Registration", (int64)ERequestType::ERT_Registration },
		{ "ERequestType::ERT_Login", (int64)ERequestType::ERT_Login },
		{ "ERequestType::ERT_ChangePassword", (int64)ERequestType::ERT_ChangePassword },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CompactFirebasePro_ERequestType_Statics::Enum_MetaDataParams[] = {
		{ "ERT_ChangePassword.Name", "ERequestType::ERT_ChangePassword" },
		{ "ERT_Login.Name", "ERequestType::ERT_Login" },
		{ "ERT_None.Name", "ERequestType::ERT_None" },
		{ "ERT_Registration.Name", "ERequestType::ERT_Registration" },
		{ "ModuleRelativePath", "Private/Firebase/FirebaseAuthMgr.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CompactFirebasePro_ERequestType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CompactFirebasePro,
		nullptr,
		"ERequestType",
		"ERequestType",
		Z_Construct_UEnum_CompactFirebasePro_ERequestType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CompactFirebasePro_ERequestType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CompactFirebasePro_ERequestType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CompactFirebasePro_ERequestType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CompactFirebasePro_ERequestType()
	{
		if (!Z_Registration_Info_UEnum_ERequestType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERequestType.InnerSingleton, Z_Construct_UEnum_CompactFirebasePro_ERequestType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERequestType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ResponseUnion;
class UScriptStruct* FResponseUnion::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ResponseUnion.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ResponseUnion.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FResponseUnion, Z_Construct_UPackage__Script_CompactFirebasePro(), TEXT("ResponseUnion"));
	}
	return Z_Registration_Info_UScriptStruct_ResponseUnion.OuterSingleton;
}
template<> COMPACTFIREBASEPRO_API UScriptStruct* StaticStruct<FResponseUnion>()
{
	return FResponseUnion::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FResponseUnion_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReqType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReqType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReqType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Email_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Email;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ErrorMsg_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMsg;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RetCode_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RetCode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResponseUnion_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Firebase/FirebaseAuthMgr.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FResponseUnion_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FResponseUnion>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FResponseUnion_Statics::NewProp_ReqType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResponseUnion_Statics::NewProp_ReqType_MetaData[] = {
		{ "ModuleRelativePath", "Private/Firebase/FirebaseAuthMgr.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FResponseUnion_Statics::NewProp_ReqType = { "ReqType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FResponseUnion, ReqType), Z_Construct_UEnum_CompactFirebasePro_ERequestType, METADATA_PARAMS(Z_Construct_UScriptStruct_FResponseUnion_Statics::NewProp_ReqType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResponseUnion_Statics::NewProp_ReqType_MetaData)) }; // 808838726
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResponseUnion_Statics::NewProp_Email_MetaData[] = {
		{ "ModuleRelativePath", "Private/Firebase/FirebaseAuthMgr.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FResponseUnion_Statics::NewProp_Email = { "Email", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FResponseUnion, Email), METADATA_PARAMS(Z_Construct_UScriptStruct_FResponseUnion_Statics::NewProp_Email_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResponseUnion_Statics::NewProp_Email_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResponseUnion_Statics::NewProp_ErrorMsg_MetaData[] = {
		{ "ModuleRelativePath", "Private/Firebase/FirebaseAuthMgr.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FResponseUnion_Statics::NewProp_ErrorMsg = { "ErrorMsg", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FResponseUnion, ErrorMsg), METADATA_PARAMS(Z_Construct_UScriptStruct_FResponseUnion_Statics::NewProp_ErrorMsg_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResponseUnion_Statics::NewProp_ErrorMsg_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResponseUnion_Statics::NewProp_RetCode_MetaData[] = {
		{ "ModuleRelativePath", "Private/Firebase/FirebaseAuthMgr.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FResponseUnion_Statics::NewProp_RetCode = { "RetCode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FResponseUnion, RetCode), METADATA_PARAMS(Z_Construct_UScriptStruct_FResponseUnion_Statics::NewProp_RetCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResponseUnion_Statics::NewProp_RetCode_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FResponseUnion_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResponseUnion_Statics::NewProp_ReqType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResponseUnion_Statics::NewProp_ReqType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResponseUnion_Statics::NewProp_Email,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResponseUnion_Statics::NewProp_ErrorMsg,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResponseUnion_Statics::NewProp_RetCode,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FResponseUnion_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CompactFirebasePro,
		nullptr,
		&NewStructOps,
		"ResponseUnion",
		sizeof(FResponseUnion),
		alignof(FResponseUnion),
		Z_Construct_UScriptStruct_FResponseUnion_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResponseUnion_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FResponseUnion_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResponseUnion_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FResponseUnion()
	{
		if (!Z_Registration_Info_UScriptStruct_ResponseUnion.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ResponseUnion.InnerSingleton, Z_Construct_UScriptStruct_FResponseUnion_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ResponseUnion.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RequestUID;
class UScriptStruct* FRequestUID::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RequestUID.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RequestUID.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRequestUID, Z_Construct_UPackage__Script_CompactFirebasePro(), TEXT("RequestUID"));
	}
	return Z_Registration_Info_UScriptStruct_RequestUID.OuterSingleton;
}
template<> COMPACTFIREBASEPRO_API UScriptStruct* StaticStruct<FRequestUID>()
{
	return FRequestUID::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRequestUID_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Email_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Email;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReqType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReqType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReqType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRequestUID_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Firebase/FirebaseAuthMgr.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRequestUID_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRequestUID>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRequestUID_Statics::NewProp_Email_MetaData[] = {
		{ "ModuleRelativePath", "Private/Firebase/FirebaseAuthMgr.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRequestUID_Statics::NewProp_Email = { "Email", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRequestUID, Email), METADATA_PARAMS(Z_Construct_UScriptStruct_FRequestUID_Statics::NewProp_Email_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRequestUID_Statics::NewProp_Email_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRequestUID_Statics::NewProp_ReqType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRequestUID_Statics::NewProp_ReqType_MetaData[] = {
		{ "ModuleRelativePath", "Private/Firebase/FirebaseAuthMgr.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRequestUID_Statics::NewProp_ReqType = { "ReqType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRequestUID, ReqType), Z_Construct_UEnum_CompactFirebasePro_ERequestType, METADATA_PARAMS(Z_Construct_UScriptStruct_FRequestUID_Statics::NewProp_ReqType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRequestUID_Statics::NewProp_ReqType_MetaData)) }; // 808838726
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRequestUID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRequestUID_Statics::NewProp_Email,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRequestUID_Statics::NewProp_ReqType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRequestUID_Statics::NewProp_ReqType,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRequestUID_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CompactFirebasePro,
		nullptr,
		&NewStructOps,
		"RequestUID",
		sizeof(FRequestUID),
		alignof(FRequestUID),
		Z_Construct_UScriptStruct_FRequestUID_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRequestUID_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRequestUID_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRequestUID_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRequestUID()
	{
		if (!Z_Registration_Info_UScriptStruct_RequestUID.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RequestUID.InnerSingleton, Z_Construct_UScriptStruct_FRequestUID_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RequestUID.InnerSingleton;
	}
	void URequestUnion::StaticRegisterNativesURequestUnion()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URequestUnion);
	UClass* Z_Construct_UClass_URequestUnion_NoRegister()
	{
		return URequestUnion::StaticClass();
	}
	struct Z_Construct_UClass_URequestUnion_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RequestEmail_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_RequestEmail;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReqType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReqType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReqType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Timer_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Timer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URequestUnion_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CompactFirebasePro,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URequestUnion_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Firebase/FirebaseAuthMgr.h" },
		{ "ModuleRelativePath", "Private/Firebase/FirebaseAuthMgr.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URequestUnion_Statics::NewProp_RequestEmail_MetaData[] = {
		{ "ModuleRelativePath", "Private/Firebase/FirebaseAuthMgr.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_URequestUnion_Statics::NewProp_RequestEmail = { "RequestEmail", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URequestUnion, RequestEmail), METADATA_PARAMS(Z_Construct_UClass_URequestUnion_Statics::NewProp_RequestEmail_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URequestUnion_Statics::NewProp_RequestEmail_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URequestUnion_Statics::NewProp_ReqType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URequestUnion_Statics::NewProp_ReqType_MetaData[] = {
		{ "ModuleRelativePath", "Private/Firebase/FirebaseAuthMgr.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_URequestUnion_Statics::NewProp_ReqType = { "ReqType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URequestUnion, ReqType), Z_Construct_UEnum_CompactFirebasePro_ERequestType, METADATA_PARAMS(Z_Construct_UClass_URequestUnion_Statics::NewProp_ReqType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URequestUnion_Statics::NewProp_ReqType_MetaData)) }; // 808838726
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URequestUnion_Statics::NewProp_Timer_MetaData[] = {
		{ "ModuleRelativePath", "Private/Firebase/FirebaseAuthMgr.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URequestUnion_Statics::NewProp_Timer = { "Timer", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URequestUnion, Timer), METADATA_PARAMS(Z_Construct_UClass_URequestUnion_Statics::NewProp_Timer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URequestUnion_Statics::NewProp_Timer_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URequestUnion_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URequestUnion_Statics::NewProp_RequestEmail,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URequestUnion_Statics::NewProp_ReqType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URequestUnion_Statics::NewProp_ReqType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URequestUnion_Statics::NewProp_Timer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URequestUnion_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URequestUnion>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URequestUnion_Statics::ClassParams = {
		&URequestUnion::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URequestUnion_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URequestUnion_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URequestUnion_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URequestUnion_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URequestUnion()
	{
		if (!Z_Registration_Info_UClass_URequestUnion.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URequestUnion.OuterSingleton, Z_Construct_UClass_URequestUnion_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URequestUnion.OuterSingleton;
	}
	template<> COMPACTFIREBASEPRO_API UClass* StaticClass<URequestUnion>()
	{
		return URequestUnion::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URequestUnion);
	DEFINE_FUNCTION(UFirebaseAuthMgr::execLogout)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Logout();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirebaseAuthMgr::execSendPasswordResetEmail)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Email);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnResponse);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendPasswordResetEmail(Z_Param_Email,FAuthRetDelegate(Z_Param_Out_OnResponse));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirebaseAuthMgr::execLogin)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Email);
		P_GET_PROPERTY(FStrProperty,Z_Param_Password);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnResponse);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Login(Z_Param_Email,Z_Param_Password,FAuthRetDelegate(Z_Param_Out_OnResponse));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirebaseAuthMgr::execRegister)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Email);
		P_GET_PROPERTY(FStrProperty,Z_Param_Password);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnResponse);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Register(Z_Param_Email,Z_Param_Password,FAuthRetDelegate(Z_Param_Out_OnResponse));
		P_NATIVE_END;
	}
	void UFirebaseAuthMgr::StaticRegisterNativesUFirebaseAuthMgr()
	{
		UClass* Class = UFirebaseAuthMgr::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Login", &UFirebaseAuthMgr::execLogin },
			{ "Logout", &UFirebaseAuthMgr::execLogout },
			{ "Register", &UFirebaseAuthMgr::execRegister },
			{ "SendPasswordResetEmail", &UFirebaseAuthMgr::execSendPasswordResetEmail },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFirebaseAuthMgr_Login_Statics
	{
		struct FirebaseAuthMgr_eventLogin_Parms
		{
			FString Email;
			FString Password;
			FScriptDelegate OnResponse;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Email;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Password;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnResponse_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnResponse;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseAuthMgr_Login_Statics::NewProp_Email = { "Email", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseAuthMgr_eventLogin_Parms, Email), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseAuthMgr_Login_Statics::NewProp_Password = { "Password", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseAuthMgr_eventLogin_Parms, Password), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseAuthMgr_Login_Statics::NewProp_OnResponse_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UFirebaseAuthMgr_Login_Statics::NewProp_OnResponse = { "OnResponse", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseAuthMgr_eventLogin_Parms, OnResponse), Z_Construct_UDelegateFunction_CompactFirebasePro_AuthRetDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseAuthMgr_Login_Statics::NewProp_OnResponse_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseAuthMgr_Login_Statics::NewProp_OnResponse_MetaData)) }; // 3298643283
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseAuthMgr_Login_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseAuthMgr_Login_Statics::NewProp_Email,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseAuthMgr_Login_Statics::NewProp_Password,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseAuthMgr_Login_Statics::NewProp_OnResponse,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseAuthMgr_Login_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase" },
		{ "ModuleRelativePath", "Private/Firebase/FirebaseAuthMgr.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseAuthMgr_Login_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseAuthMgr, nullptr, "Login", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFirebaseAuthMgr_Login_Statics::FirebaseAuthMgr_eventLogin_Parms), Z_Construct_UFunction_UFirebaseAuthMgr_Login_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseAuthMgr_Login_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseAuthMgr_Login_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseAuthMgr_Login_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseAuthMgr_Login()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFirebaseAuthMgr_Login_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseAuthMgr_Logout_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseAuthMgr_Logout_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase" },
		{ "ModuleRelativePath", "Private/Firebase/FirebaseAuthMgr.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseAuthMgr_Logout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseAuthMgr, nullptr, "Logout", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseAuthMgr_Logout_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseAuthMgr_Logout_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseAuthMgr_Logout()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFirebaseAuthMgr_Logout_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseAuthMgr_Register_Statics
	{
		struct FirebaseAuthMgr_eventRegister_Parms
		{
			FString Email;
			FString Password;
			FScriptDelegate OnResponse;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Email;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Password;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnResponse_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnResponse;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseAuthMgr_Register_Statics::NewProp_Email = { "Email", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseAuthMgr_eventRegister_Parms, Email), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseAuthMgr_Register_Statics::NewProp_Password = { "Password", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseAuthMgr_eventRegister_Parms, Password), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseAuthMgr_Register_Statics::NewProp_OnResponse_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UFirebaseAuthMgr_Register_Statics::NewProp_OnResponse = { "OnResponse", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseAuthMgr_eventRegister_Parms, OnResponse), Z_Construct_UDelegateFunction_CompactFirebasePro_AuthRetDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseAuthMgr_Register_Statics::NewProp_OnResponse_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseAuthMgr_Register_Statics::NewProp_OnResponse_MetaData)) }; // 3298643283
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseAuthMgr_Register_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseAuthMgr_Register_Statics::NewProp_Email,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseAuthMgr_Register_Statics::NewProp_Password,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseAuthMgr_Register_Statics::NewProp_OnResponse,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseAuthMgr_Register_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase" },
		{ "ModuleRelativePath", "Private/Firebase/FirebaseAuthMgr.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseAuthMgr_Register_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseAuthMgr, nullptr, "Register", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFirebaseAuthMgr_Register_Statics::FirebaseAuthMgr_eventRegister_Parms), Z_Construct_UFunction_UFirebaseAuthMgr_Register_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseAuthMgr_Register_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseAuthMgr_Register_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseAuthMgr_Register_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseAuthMgr_Register()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFirebaseAuthMgr_Register_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseAuthMgr_SendPasswordResetEmail_Statics
	{
		struct FirebaseAuthMgr_eventSendPasswordResetEmail_Parms
		{
			FString Email;
			FScriptDelegate OnResponse;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Email;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnResponse_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnResponse;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseAuthMgr_SendPasswordResetEmail_Statics::NewProp_Email = { "Email", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseAuthMgr_eventSendPasswordResetEmail_Parms, Email), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseAuthMgr_SendPasswordResetEmail_Statics::NewProp_OnResponse_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UFirebaseAuthMgr_SendPasswordResetEmail_Statics::NewProp_OnResponse = { "OnResponse", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseAuthMgr_eventSendPasswordResetEmail_Parms, OnResponse), Z_Construct_UDelegateFunction_CompactFirebasePro_AuthRetDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseAuthMgr_SendPasswordResetEmail_Statics::NewProp_OnResponse_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseAuthMgr_SendPasswordResetEmail_Statics::NewProp_OnResponse_MetaData)) }; // 3298643283
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseAuthMgr_SendPasswordResetEmail_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseAuthMgr_SendPasswordResetEmail_Statics::NewProp_Email,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseAuthMgr_SendPasswordResetEmail_Statics::NewProp_OnResponse,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseAuthMgr_SendPasswordResetEmail_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase" },
		{ "ModuleRelativePath", "Private/Firebase/FirebaseAuthMgr.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseAuthMgr_SendPasswordResetEmail_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseAuthMgr, nullptr, "SendPasswordResetEmail", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFirebaseAuthMgr_SendPasswordResetEmail_Statics::FirebaseAuthMgr_eventSendPasswordResetEmail_Parms), Z_Construct_UFunction_UFirebaseAuthMgr_SendPasswordResetEmail_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseAuthMgr_SendPasswordResetEmail_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseAuthMgr_SendPasswordResetEmail_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseAuthMgr_SendPasswordResetEmail_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseAuthMgr_SendPasswordResetEmail()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFirebaseAuthMgr_SendPasswordResetEmail_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFirebaseAuthMgr);
	UClass* Z_Construct_UClass_UFirebaseAuthMgr_NoRegister()
	{
		return UFirebaseAuthMgr::StaticClass();
	}
	struct Z_Construct_UClass_UFirebaseAuthMgr_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PendingReleaseRequests_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PendingReleaseRequests_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PendingReleaseRequests;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RequestTimeout_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RequestTimeout;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFirebaseAuthMgr_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CompactFirebasePro,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFirebaseAuthMgr_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFirebaseAuthMgr_Login, "Login" }, // 2736563439
		{ &Z_Construct_UFunction_UFirebaseAuthMgr_Logout, "Logout" }, // 1154898983
		{ &Z_Construct_UFunction_UFirebaseAuthMgr_Register, "Register" }, // 3303136828
		{ &Z_Construct_UFunction_UFirebaseAuthMgr_SendPasswordResetEmail, "SendPasswordResetEmail" }, // 3097017132
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirebaseAuthMgr_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Firebase/FirebaseAuthMgr.h" },
		{ "ModuleRelativePath", "Private/Firebase/FirebaseAuthMgr.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFirebaseAuthMgr_Statics::NewProp_PendingReleaseRequests_Inner = { "PendingReleaseRequests", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_URequestUnion_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirebaseAuthMgr_Statics::NewProp_PendingReleaseRequests_MetaData[] = {
		{ "ModuleRelativePath", "Private/Firebase/FirebaseAuthMgr.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFirebaseAuthMgr_Statics::NewProp_PendingReleaseRequests = { "PendingReleaseRequests", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirebaseAuthMgr, PendingReleaseRequests), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UFirebaseAuthMgr_Statics::NewProp_PendingReleaseRequests_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirebaseAuthMgr_Statics::NewProp_PendingReleaseRequests_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirebaseAuthMgr_Statics::NewProp_RequestTimeout_MetaData[] = {
		{ "ModuleRelativePath", "Private/Firebase/FirebaseAuthMgr.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFirebaseAuthMgr_Statics::NewProp_RequestTimeout = { "RequestTimeout", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirebaseAuthMgr, RequestTimeout), METADATA_PARAMS(Z_Construct_UClass_UFirebaseAuthMgr_Statics::NewProp_RequestTimeout_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirebaseAuthMgr_Statics::NewProp_RequestTimeout_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFirebaseAuthMgr_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirebaseAuthMgr_Statics::NewProp_PendingReleaseRequests_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirebaseAuthMgr_Statics::NewProp_PendingReleaseRequests,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirebaseAuthMgr_Statics::NewProp_RequestTimeout,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFirebaseAuthMgr_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFirebaseAuthMgr>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFirebaseAuthMgr_Statics::ClassParams = {
		&UFirebaseAuthMgr::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFirebaseAuthMgr_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UFirebaseAuthMgr_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UFirebaseAuthMgr_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFirebaseAuthMgr_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFirebaseAuthMgr()
	{
		if (!Z_Registration_Info_UClass_UFirebaseAuthMgr.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFirebaseAuthMgr.OuterSingleton, Z_Construct_UClass_UFirebaseAuthMgr_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFirebaseAuthMgr.OuterSingleton;
	}
	template<> COMPACTFIREBASEPRO_API UClass* StaticClass<UFirebaseAuthMgr>()
	{
		return UFirebaseAuthMgr::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFirebaseAuthMgr);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseAuthMgr_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseAuthMgr_h_Statics::EnumInfo[] = {
		{ ERequestType_StaticEnum, TEXT("ERequestType"), &Z_Registration_Info_UEnum_ERequestType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 808838726U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseAuthMgr_h_Statics::ScriptStructInfo[] = {
		{ FResponseUnion::StaticStruct, Z_Construct_UScriptStruct_FResponseUnion_Statics::NewStructOps, TEXT("ResponseUnion"), &Z_Registration_Info_UScriptStruct_ResponseUnion, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FResponseUnion), 2410190403U) },
		{ FRequestUID::StaticStruct, Z_Construct_UScriptStruct_FRequestUID_Statics::NewStructOps, TEXT("RequestUID"), &Z_Registration_Info_UScriptStruct_RequestUID, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRequestUID), 3158246010U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseAuthMgr_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URequestUnion, URequestUnion::StaticClass, TEXT("URequestUnion"), &Z_Registration_Info_UClass_URequestUnion, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URequestUnion), 220752844U) },
		{ Z_Construct_UClass_UFirebaseAuthMgr, UFirebaseAuthMgr::StaticClass, TEXT("UFirebaseAuthMgr"), &Z_Registration_Info_UClass_UFirebaseAuthMgr, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFirebaseAuthMgr), 1529853164U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseAuthMgr_h_1781606122(TEXT("/Script/CompactFirebasePro"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseAuthMgr_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseAuthMgr_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseAuthMgr_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseAuthMgr_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseAuthMgr_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseAuthMgr_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
