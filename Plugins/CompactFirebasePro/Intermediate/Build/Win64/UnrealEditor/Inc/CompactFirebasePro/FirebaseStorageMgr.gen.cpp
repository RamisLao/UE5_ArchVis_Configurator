// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CompactFirebasePro/Private/Firebase/FirebaseStorageMgr.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFirebaseStorageMgr() {}
// Cross Module References
	COMPACTFIREBASEPRO_API UFunction* Z_Construct_UDelegateFunction_CompactFirebasePro_FirebaseStorageDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_CompactFirebasePro();
	COMPACTFIREBASEPRO_API UEnum* Z_Construct_UEnum_CompactFirebasePro_EFirestoreStroageOper();
	COMPACTFIREBASEPRO_API UClass* Z_Construct_UClass_UStorageRequestUnion_NoRegister();
	COMPACTFIREBASEPRO_API UClass* Z_Construct_UClass_UStorageRequestUnion();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COMPACTFIREBASEPRO_API UClass* Z_Construct_UClass_UStorageController_NoRegister();
	COMPACTFIREBASEPRO_API UClass* Z_Construct_UClass_UStorageController();
	COMPACTFIREBASEPRO_API UClass* Z_Construct_UClass_UFirebaseStorageMgr_NoRegister();
	COMPACTFIREBASEPRO_API UClass* Z_Construct_UClass_UFirebaseStorageMgr();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_CompactFirebasePro_FirebaseStorageDelegate__DelegateSignature_Statics
	{
		struct _Script_CompactFirebasePro_eventFirebaseStorageDelegate_Parms
		{
			int32 RetCode;
			FString RetMsg;
		};
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_CompactFirebasePro_FirebaseStorageDelegate__DelegateSignature_Statics::NewProp_RetCode = { "RetCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_CompactFirebasePro_eventFirebaseStorageDelegate_Parms, RetCode), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CompactFirebasePro_FirebaseStorageDelegate__DelegateSignature_Statics::NewProp_RetMsg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_CompactFirebasePro_FirebaseStorageDelegate__DelegateSignature_Statics::NewProp_RetMsg = { "RetMsg", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_CompactFirebasePro_eventFirebaseStorageDelegate_Parms, RetMsg), METADATA_PARAMS(Z_Construct_UDelegateFunction_CompactFirebasePro_FirebaseStorageDelegate__DelegateSignature_Statics::NewProp_RetMsg_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CompactFirebasePro_FirebaseStorageDelegate__DelegateSignature_Statics::NewProp_RetMsg_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CompactFirebasePro_FirebaseStorageDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CompactFirebasePro_FirebaseStorageDelegate__DelegateSignature_Statics::NewProp_RetCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CompactFirebasePro_FirebaseStorageDelegate__DelegateSignature_Statics::NewProp_RetMsg,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CompactFirebasePro_FirebaseStorageDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Firebase/FirebaseStorageMgr.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CompactFirebasePro_FirebaseStorageDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CompactFirebasePro, nullptr, "FirebaseStorageDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_CompactFirebasePro_FirebaseStorageDelegate__DelegateSignature_Statics::_Script_CompactFirebasePro_eventFirebaseStorageDelegate_Parms), Z_Construct_UDelegateFunction_CompactFirebasePro_FirebaseStorageDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CompactFirebasePro_FirebaseStorageDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_CompactFirebasePro_FirebaseStorageDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CompactFirebasePro_FirebaseStorageDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_CompactFirebasePro_FirebaseStorageDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CompactFirebasePro_FirebaseStorageDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFirestoreStroageOper;
	static UEnum* EFirestoreStroageOper_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EFirestoreStroageOper.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EFirestoreStroageOper.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CompactFirebasePro_EFirestoreStroageOper, Z_Construct_UPackage__Script_CompactFirebasePro(), TEXT("EFirestoreStroageOper"));
		}
		return Z_Registration_Info_UEnum_EFirestoreStroageOper.OuterSingleton;
	}
	template<> COMPACTFIREBASEPRO_API UEnum* StaticEnum<EFirestoreStroageOper>()
	{
		return EFirestoreStroageOper_StaticEnum();
	}
	struct Z_Construct_UEnum_CompactFirebasePro_EFirestoreStroageOper_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CompactFirebasePro_EFirestoreStroageOper_Statics::Enumerators[] = {
		{ "EFirestoreStroageOper::EFSO_None", (int64)EFirestoreStroageOper::EFSO_None },
		{ "EFirestoreStroageOper::EFSO_Upload", (int64)EFirestoreStroageOper::EFSO_Upload },
		{ "EFirestoreStroageOper::EFSO_Download", (int64)EFirestoreStroageOper::EFSO_Download },
		{ "EFirestoreStroageOper::EFSO_Delete", (int64)EFirestoreStroageOper::EFSO_Delete },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CompactFirebasePro_EFirestoreStroageOper_Statics::Enum_MetaDataParams[] = {
		{ "EFSO_Delete.Name", "EFirestoreStroageOper::EFSO_Delete" },
		{ "EFSO_Download.Name", "EFirestoreStroageOper::EFSO_Download" },
		{ "EFSO_None.Name", "EFirestoreStroageOper::EFSO_None" },
		{ "EFSO_Upload.Name", "EFirestoreStroageOper::EFSO_Upload" },
		{ "ModuleRelativePath", "Private/Firebase/FirebaseStorageMgr.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CompactFirebasePro_EFirestoreStroageOper_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CompactFirebasePro,
		nullptr,
		"EFirestoreStroageOper",
		"EFirestoreStroageOper",
		Z_Construct_UEnum_CompactFirebasePro_EFirestoreStroageOper_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CompactFirebasePro_EFirestoreStroageOper_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CompactFirebasePro_EFirestoreStroageOper_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CompactFirebasePro_EFirestoreStroageOper_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CompactFirebasePro_EFirestoreStroageOper()
	{
		if (!Z_Registration_Info_UEnum_EFirestoreStroageOper.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFirestoreStroageOper.InnerSingleton, Z_Construct_UEnum_CompactFirebasePro_EFirestoreStroageOper_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EFirestoreStroageOper.InnerSingleton;
	}
	void UStorageRequestUnion::StaticRegisterNativesUStorageRequestUnion()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStorageRequestUnion);
	UClass* Z_Construct_UClass_UStorageRequestUnion_NoRegister()
	{
		return UStorageRequestUnion::StaticClass();
	}
	struct Z_Construct_UClass_UStorageRequestUnion_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Timer_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Timer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ErrorMsg_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMsg;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RetCode_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RetCode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPendingResponse_MetaData[];
#endif
		static void NewProp_bPendingResponse_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPendingResponse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDone_MetaData[];
#endif
		static void NewProp_bDone_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLock_MetaData[];
#endif
		static void NewProp_bLock_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLock;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OperType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OperType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OperType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStorageRequestUnion_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CompactFirebasePro,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStorageRequestUnion_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Firebase/FirebaseStorageMgr.h" },
		{ "ModuleRelativePath", "Private/Firebase/FirebaseStorageMgr.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStorageRequestUnion_Statics::NewProp_Timer_MetaData[] = {
		{ "ModuleRelativePath", "Private/Firebase/FirebaseStorageMgr.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStorageRequestUnion_Statics::NewProp_Timer = { "Timer", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStorageRequestUnion, Timer), METADATA_PARAMS(Z_Construct_UClass_UStorageRequestUnion_Statics::NewProp_Timer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStorageRequestUnion_Statics::NewProp_Timer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStorageRequestUnion_Statics::NewProp_ErrorMsg_MetaData[] = {
		{ "ModuleRelativePath", "Private/Firebase/FirebaseStorageMgr.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UStorageRequestUnion_Statics::NewProp_ErrorMsg = { "ErrorMsg", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStorageRequestUnion, ErrorMsg), METADATA_PARAMS(Z_Construct_UClass_UStorageRequestUnion_Statics::NewProp_ErrorMsg_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStorageRequestUnion_Statics::NewProp_ErrorMsg_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStorageRequestUnion_Statics::NewProp_RetCode_MetaData[] = {
		{ "ModuleRelativePath", "Private/Firebase/FirebaseStorageMgr.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStorageRequestUnion_Statics::NewProp_RetCode = { "RetCode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStorageRequestUnion, RetCode), METADATA_PARAMS(Z_Construct_UClass_UStorageRequestUnion_Statics::NewProp_RetCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStorageRequestUnion_Statics::NewProp_RetCode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStorageRequestUnion_Statics::NewProp_bPendingResponse_MetaData[] = {
		{ "ModuleRelativePath", "Private/Firebase/FirebaseStorageMgr.h" },
	};
#endif
	void Z_Construct_UClass_UStorageRequestUnion_Statics::NewProp_bPendingResponse_SetBit(void* Obj)
	{
		((UStorageRequestUnion*)Obj)->bPendingResponse = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStorageRequestUnion_Statics::NewProp_bPendingResponse = { "bPendingResponse", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UStorageRequestUnion), &Z_Construct_UClass_UStorageRequestUnion_Statics::NewProp_bPendingResponse_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStorageRequestUnion_Statics::NewProp_bPendingResponse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStorageRequestUnion_Statics::NewProp_bPendingResponse_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStorageRequestUnion_Statics::NewProp_bDone_MetaData[] = {
		{ "ModuleRelativePath", "Private/Firebase/FirebaseStorageMgr.h" },
	};
#endif
	void Z_Construct_UClass_UStorageRequestUnion_Statics::NewProp_bDone_SetBit(void* Obj)
	{
		((UStorageRequestUnion*)Obj)->bDone = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStorageRequestUnion_Statics::NewProp_bDone = { "bDone", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UStorageRequestUnion), &Z_Construct_UClass_UStorageRequestUnion_Statics::NewProp_bDone_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStorageRequestUnion_Statics::NewProp_bDone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStorageRequestUnion_Statics::NewProp_bDone_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStorageRequestUnion_Statics::NewProp_bLock_MetaData[] = {
		{ "ModuleRelativePath", "Private/Firebase/FirebaseStorageMgr.h" },
	};
#endif
	void Z_Construct_UClass_UStorageRequestUnion_Statics::NewProp_bLock_SetBit(void* Obj)
	{
		((UStorageRequestUnion*)Obj)->bLock = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStorageRequestUnion_Statics::NewProp_bLock = { "bLock", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UStorageRequestUnion), &Z_Construct_UClass_UStorageRequestUnion_Statics::NewProp_bLock_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStorageRequestUnion_Statics::NewProp_bLock_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStorageRequestUnion_Statics::NewProp_bLock_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UStorageRequestUnion_Statics::NewProp_OperType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStorageRequestUnion_Statics::NewProp_OperType_MetaData[] = {
		{ "ModuleRelativePath", "Private/Firebase/FirebaseStorageMgr.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UStorageRequestUnion_Statics::NewProp_OperType = { "OperType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStorageRequestUnion, OperType), Z_Construct_UEnum_CompactFirebasePro_EFirestoreStroageOper, METADATA_PARAMS(Z_Construct_UClass_UStorageRequestUnion_Statics::NewProp_OperType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStorageRequestUnion_Statics::NewProp_OperType_MetaData)) }; // 3332269613
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStorageRequestUnion_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStorageRequestUnion_Statics::NewProp_Timer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStorageRequestUnion_Statics::NewProp_ErrorMsg,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStorageRequestUnion_Statics::NewProp_RetCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStorageRequestUnion_Statics::NewProp_bPendingResponse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStorageRequestUnion_Statics::NewProp_bDone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStorageRequestUnion_Statics::NewProp_bLock,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStorageRequestUnion_Statics::NewProp_OperType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStorageRequestUnion_Statics::NewProp_OperType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStorageRequestUnion_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStorageRequestUnion>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStorageRequestUnion_Statics::ClassParams = {
		&UStorageRequestUnion::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UStorageRequestUnion_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UStorageRequestUnion_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UStorageRequestUnion_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStorageRequestUnion_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStorageRequestUnion()
	{
		if (!Z_Registration_Info_UClass_UStorageRequestUnion.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStorageRequestUnion.OuterSingleton, Z_Construct_UClass_UStorageRequestUnion_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStorageRequestUnion.OuterSingleton;
	}
	template<> COMPACTFIREBASEPRO_API UClass* StaticClass<UStorageRequestUnion>()
	{
		return UStorageRequestUnion::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStorageRequestUnion);
	DEFINE_FUNCTION(UStorageController::execIsTransferring)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsTransferring();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStorageController::execIsPaused)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPaused();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStorageController::execIsValidTransfer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsValidTransfer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStorageController::execGetProgress)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetProgress();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStorageController::execGetTotalBytes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetTotalBytes();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStorageController::execGetTransferedBytes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetTransferedBytes();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStorageController::execCancel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Cancel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStorageController::execResume)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Resume();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStorageController::execPause)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Pause();
		P_NATIVE_END;
	}
	void UStorageController::StaticRegisterNativesUStorageController()
	{
		UClass* Class = UStorageController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Cancel", &UStorageController::execCancel },
			{ "GetProgress", &UStorageController::execGetProgress },
			{ "GetTotalBytes", &UStorageController::execGetTotalBytes },
			{ "GetTransferedBytes", &UStorageController::execGetTransferedBytes },
			{ "IsPaused", &UStorageController::execIsPaused },
			{ "IsTransferring", &UStorageController::execIsTransferring },
			{ "IsValidTransfer", &UStorageController::execIsValidTransfer },
			{ "Pause", &UStorageController::execPause },
			{ "Resume", &UStorageController::execResume },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UStorageController_Cancel_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStorageController_Cancel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase" },
		{ "ModuleRelativePath", "Private/Firebase/FirebaseStorageMgr.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStorageController_Cancel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStorageController, nullptr, "Cancel", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStorageController_Cancel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStorageController_Cancel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStorageController_Cancel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStorageController_Cancel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStorageController_GetProgress_Statics
	{
		struct StorageController_eventGetProgress_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStorageController_GetProgress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StorageController_eventGetProgress_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStorageController_GetProgress_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStorageController_GetProgress_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStorageController_GetProgress_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase" },
		{ "ModuleRelativePath", "Private/Firebase/FirebaseStorageMgr.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStorageController_GetProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStorageController, nullptr, "GetProgress", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStorageController_GetProgress_Statics::StorageController_eventGetProgress_Parms), Z_Construct_UFunction_UStorageController_GetProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStorageController_GetProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStorageController_GetProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStorageController_GetProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStorageController_GetProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStorageController_GetProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStorageController_GetTotalBytes_Statics
	{
		struct StorageController_eventGetTotalBytes_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStorageController_GetTotalBytes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StorageController_eventGetTotalBytes_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStorageController_GetTotalBytes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStorageController_GetTotalBytes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStorageController_GetTotalBytes_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*BlueprintPure, Category = \"Firebase\"*/" },
		{ "ModuleRelativePath", "Private/Firebase/FirebaseStorageMgr.h" },
		{ "ToolTip", "BlueprintPure, Category = \"Firebase\"" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStorageController_GetTotalBytes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStorageController, nullptr, "GetTotalBytes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStorageController_GetTotalBytes_Statics::StorageController_eventGetTotalBytes_Parms), Z_Construct_UFunction_UStorageController_GetTotalBytes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStorageController_GetTotalBytes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStorageController_GetTotalBytes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStorageController_GetTotalBytes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStorageController_GetTotalBytes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStorageController_GetTotalBytes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStorageController_GetTransferedBytes_Statics
	{
		struct StorageController_eventGetTransferedBytes_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStorageController_GetTransferedBytes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StorageController_eventGetTransferedBytes_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStorageController_GetTransferedBytes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStorageController_GetTransferedBytes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStorageController_GetTransferedBytes_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*BlueprintPure, Category = \"Firebase\"*/" },
		{ "ModuleRelativePath", "Private/Firebase/FirebaseStorageMgr.h" },
		{ "ToolTip", "BlueprintPure, Category = \"Firebase\"" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStorageController_GetTransferedBytes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStorageController, nullptr, "GetTransferedBytes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStorageController_GetTransferedBytes_Statics::StorageController_eventGetTransferedBytes_Parms), Z_Construct_UFunction_UStorageController_GetTransferedBytes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStorageController_GetTransferedBytes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStorageController_GetTransferedBytes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStorageController_GetTransferedBytes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStorageController_GetTransferedBytes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStorageController_GetTransferedBytes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStorageController_IsPaused_Statics
	{
		struct StorageController_eventIsPaused_Parms
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
	void Z_Construct_UFunction_UStorageController_IsPaused_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((StorageController_eventIsPaused_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStorageController_IsPaused_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(StorageController_eventIsPaused_Parms), &Z_Construct_UFunction_UStorageController_IsPaused_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStorageController_IsPaused_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStorageController_IsPaused_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStorageController_IsPaused_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase" },
		{ "ModuleRelativePath", "Private/Firebase/FirebaseStorageMgr.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStorageController_IsPaused_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStorageController, nullptr, "IsPaused", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStorageController_IsPaused_Statics::StorageController_eventIsPaused_Parms), Z_Construct_UFunction_UStorageController_IsPaused_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStorageController_IsPaused_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStorageController_IsPaused_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStorageController_IsPaused_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStorageController_IsPaused()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStorageController_IsPaused_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStorageController_IsTransferring_Statics
	{
		struct StorageController_eventIsTransferring_Parms
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
	void Z_Construct_UFunction_UStorageController_IsTransferring_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((StorageController_eventIsTransferring_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStorageController_IsTransferring_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(StorageController_eventIsTransferring_Parms), &Z_Construct_UFunction_UStorageController_IsTransferring_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStorageController_IsTransferring_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStorageController_IsTransferring_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStorageController_IsTransferring_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase" },
		{ "ModuleRelativePath", "Private/Firebase/FirebaseStorageMgr.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStorageController_IsTransferring_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStorageController, nullptr, "IsTransferring", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStorageController_IsTransferring_Statics::StorageController_eventIsTransferring_Parms), Z_Construct_UFunction_UStorageController_IsTransferring_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStorageController_IsTransferring_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStorageController_IsTransferring_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStorageController_IsTransferring_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStorageController_IsTransferring()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStorageController_IsTransferring_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStorageController_IsValidTransfer_Statics
	{
		struct StorageController_eventIsValidTransfer_Parms
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
	void Z_Construct_UFunction_UStorageController_IsValidTransfer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((StorageController_eventIsValidTransfer_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStorageController_IsValidTransfer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(StorageController_eventIsValidTransfer_Parms), &Z_Construct_UFunction_UStorageController_IsValidTransfer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStorageController_IsValidTransfer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStorageController_IsValidTransfer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStorageController_IsValidTransfer_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*BlueprintPure, Category = \"Firebase\"*/" },
		{ "ModuleRelativePath", "Private/Firebase/FirebaseStorageMgr.h" },
		{ "ToolTip", "BlueprintPure, Category = \"Firebase\"" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStorageController_IsValidTransfer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStorageController, nullptr, "IsValidTransfer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStorageController_IsValidTransfer_Statics::StorageController_eventIsValidTransfer_Parms), Z_Construct_UFunction_UStorageController_IsValidTransfer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStorageController_IsValidTransfer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStorageController_IsValidTransfer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStorageController_IsValidTransfer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStorageController_IsValidTransfer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStorageController_IsValidTransfer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStorageController_Pause_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStorageController_Pause_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase" },
		{ "ModuleRelativePath", "Private/Firebase/FirebaseStorageMgr.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStorageController_Pause_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStorageController, nullptr, "Pause", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStorageController_Pause_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStorageController_Pause_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStorageController_Pause()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStorageController_Pause_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStorageController_Resume_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStorageController_Resume_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase" },
		{ "ModuleRelativePath", "Private/Firebase/FirebaseStorageMgr.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStorageController_Resume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStorageController, nullptr, "Resume", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStorageController_Resume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStorageController_Resume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStorageController_Resume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStorageController_Resume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStorageController);
	UClass* Z_Construct_UClass_UStorageController_NoRegister()
	{
		return UStorageController::StaticClass();
	}
	struct Z_Construct_UClass_UStorageController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStorageController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CompactFirebasePro,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UStorageController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UStorageController_Cancel, "Cancel" }, // 2394227627
		{ &Z_Construct_UFunction_UStorageController_GetProgress, "GetProgress" }, // 3961186032
		{ &Z_Construct_UFunction_UStorageController_GetTotalBytes, "GetTotalBytes" }, // 2504489104
		{ &Z_Construct_UFunction_UStorageController_GetTransferedBytes, "GetTransferedBytes" }, // 3739491742
		{ &Z_Construct_UFunction_UStorageController_IsPaused, "IsPaused" }, // 2303866615
		{ &Z_Construct_UFunction_UStorageController_IsTransferring, "IsTransferring" }, // 883490811
		{ &Z_Construct_UFunction_UStorageController_IsValidTransfer, "IsValidTransfer" }, // 592467835
		{ &Z_Construct_UFunction_UStorageController_Pause, "Pause" }, // 3418856512
		{ &Z_Construct_UFunction_UStorageController_Resume, "Resume" }, // 2419823507
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStorageController_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Firebase/FirebaseStorageMgr.h" },
		{ "ModuleRelativePath", "Private/Firebase/FirebaseStorageMgr.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStorageController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStorageController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStorageController_Statics::ClassParams = {
		&UStorageController::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UStorageController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStorageController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStorageController()
	{
		if (!Z_Registration_Info_UClass_UStorageController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStorageController.OuterSingleton, Z_Construct_UClass_UStorageController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStorageController.OuterSingleton;
	}
	template<> COMPACTFIREBASEPRO_API UClass* StaticClass<UStorageController>()
	{
		return UStorageController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStorageController);
	DEFINE_FUNCTION(UFirebaseStorageMgr::execGetUploadController)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UStorageController**)Z_Param__Result=P_THIS->GetUploadController();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirebaseStorageMgr::execGetDownloadController)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UStorageController**)Z_Param__Result=P_THIS->GetDownloadController();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirebaseStorageMgr::execDelete)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_BucketURL);
		P_GET_PROPERTY(FStrProperty,Z_Param_StorageIndexPath);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnResponse);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Delete(Z_Param_BucketURL,Z_Param_StorageIndexPath,FFirebaseStorageDelegate(Z_Param_Out_OnResponse));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirebaseStorageMgr::execDownload)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_BucketURL);
		P_GET_PROPERTY(FStrProperty,Z_Param_StorageIndexPath);
		P_GET_PROPERTY(FStrProperty,Z_Param_DownloadFilePath);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnResponse);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Download(Z_Param_BucketURL,Z_Param_StorageIndexPath,Z_Param_DownloadFilePath,FFirebaseStorageDelegate(Z_Param_Out_OnResponse));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFirebaseStorageMgr::execUpload)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_BucketURL);
		P_GET_PROPERTY(FStrProperty,Z_Param_StorageIndexPath);
		P_GET_PROPERTY(FStrProperty,Z_Param_UploadFilePath);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnResponse);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Upload(Z_Param_BucketURL,Z_Param_StorageIndexPath,Z_Param_UploadFilePath,FFirebaseStorageDelegate(Z_Param_Out_OnResponse));
		P_NATIVE_END;
	}
	void UFirebaseStorageMgr::StaticRegisterNativesUFirebaseStorageMgr()
	{
		UClass* Class = UFirebaseStorageMgr::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Delete", &UFirebaseStorageMgr::execDelete },
			{ "Download", &UFirebaseStorageMgr::execDownload },
			{ "GetDownloadController", &UFirebaseStorageMgr::execGetDownloadController },
			{ "GetUploadController", &UFirebaseStorageMgr::execGetUploadController },
			{ "Upload", &UFirebaseStorageMgr::execUpload },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFirebaseStorageMgr_Delete_Statics
	{
		struct FirebaseStorageMgr_eventDelete_Parms
		{
			FString BucketURL;
			FString StorageIndexPath;
			FScriptDelegate OnResponse;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_BucketURL;
		static const UECodeGen_Private::FStrPropertyParams NewProp_StorageIndexPath;
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseStorageMgr_Delete_Statics::NewProp_BucketURL = { "BucketURL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseStorageMgr_eventDelete_Parms, BucketURL), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseStorageMgr_Delete_Statics::NewProp_StorageIndexPath = { "StorageIndexPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseStorageMgr_eventDelete_Parms, StorageIndexPath), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseStorageMgr_Delete_Statics::NewProp_OnResponse_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UFirebaseStorageMgr_Delete_Statics::NewProp_OnResponse = { "OnResponse", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseStorageMgr_eventDelete_Parms, OnResponse), Z_Construct_UDelegateFunction_CompactFirebasePro_FirebaseStorageDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseStorageMgr_Delete_Statics::NewProp_OnResponse_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseStorageMgr_Delete_Statics::NewProp_OnResponse_MetaData)) }; // 2494272668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseStorageMgr_Delete_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseStorageMgr_Delete_Statics::NewProp_BucketURL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseStorageMgr_Delete_Statics::NewProp_StorageIndexPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseStorageMgr_Delete_Statics::NewProp_OnResponse,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseStorageMgr_Delete_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase" },
		{ "ModuleRelativePath", "Private/Firebase/FirebaseStorageMgr.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseStorageMgr_Delete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseStorageMgr, nullptr, "Delete", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFirebaseStorageMgr_Delete_Statics::FirebaseStorageMgr_eventDelete_Parms), Z_Construct_UFunction_UFirebaseStorageMgr_Delete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseStorageMgr_Delete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseStorageMgr_Delete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseStorageMgr_Delete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseStorageMgr_Delete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFirebaseStorageMgr_Delete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseStorageMgr_Download_Statics
	{
		struct FirebaseStorageMgr_eventDownload_Parms
		{
			FString BucketURL;
			FString StorageIndexPath;
			FString DownloadFilePath;
			FScriptDelegate OnResponse;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_BucketURL;
		static const UECodeGen_Private::FStrPropertyParams NewProp_StorageIndexPath;
		static const UECodeGen_Private::FStrPropertyParams NewProp_DownloadFilePath;
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseStorageMgr_Download_Statics::NewProp_BucketURL = { "BucketURL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseStorageMgr_eventDownload_Parms, BucketURL), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseStorageMgr_Download_Statics::NewProp_StorageIndexPath = { "StorageIndexPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseStorageMgr_eventDownload_Parms, StorageIndexPath), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseStorageMgr_Download_Statics::NewProp_DownloadFilePath = { "DownloadFilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseStorageMgr_eventDownload_Parms, DownloadFilePath), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseStorageMgr_Download_Statics::NewProp_OnResponse_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UFirebaseStorageMgr_Download_Statics::NewProp_OnResponse = { "OnResponse", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseStorageMgr_eventDownload_Parms, OnResponse), Z_Construct_UDelegateFunction_CompactFirebasePro_FirebaseStorageDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseStorageMgr_Download_Statics::NewProp_OnResponse_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseStorageMgr_Download_Statics::NewProp_OnResponse_MetaData)) }; // 2494272668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseStorageMgr_Download_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseStorageMgr_Download_Statics::NewProp_BucketURL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseStorageMgr_Download_Statics::NewProp_StorageIndexPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseStorageMgr_Download_Statics::NewProp_DownloadFilePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseStorageMgr_Download_Statics::NewProp_OnResponse,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseStorageMgr_Download_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase" },
		{ "ModuleRelativePath", "Private/Firebase/FirebaseStorageMgr.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseStorageMgr_Download_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseStorageMgr, nullptr, "Download", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFirebaseStorageMgr_Download_Statics::FirebaseStorageMgr_eventDownload_Parms), Z_Construct_UFunction_UFirebaseStorageMgr_Download_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseStorageMgr_Download_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseStorageMgr_Download_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseStorageMgr_Download_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseStorageMgr_Download()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFirebaseStorageMgr_Download_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseStorageMgr_GetDownloadController_Statics
	{
		struct FirebaseStorageMgr_eventGetDownloadController_Parms
		{
			UStorageController* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFirebaseStorageMgr_GetDownloadController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseStorageMgr_eventGetDownloadController_Parms, ReturnValue), Z_Construct_UClass_UStorageController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseStorageMgr_GetDownloadController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseStorageMgr_GetDownloadController_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseStorageMgr_GetDownloadController_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase" },
		{ "ModuleRelativePath", "Private/Firebase/FirebaseStorageMgr.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseStorageMgr_GetDownloadController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseStorageMgr, nullptr, "GetDownloadController", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFirebaseStorageMgr_GetDownloadController_Statics::FirebaseStorageMgr_eventGetDownloadController_Parms), Z_Construct_UFunction_UFirebaseStorageMgr_GetDownloadController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseStorageMgr_GetDownloadController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseStorageMgr_GetDownloadController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseStorageMgr_GetDownloadController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseStorageMgr_GetDownloadController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFirebaseStorageMgr_GetDownloadController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseStorageMgr_GetUploadController_Statics
	{
		struct FirebaseStorageMgr_eventGetUploadController_Parms
		{
			UStorageController* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFirebaseStorageMgr_GetUploadController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseStorageMgr_eventGetUploadController_Parms, ReturnValue), Z_Construct_UClass_UStorageController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseStorageMgr_GetUploadController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseStorageMgr_GetUploadController_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseStorageMgr_GetUploadController_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase" },
		{ "ModuleRelativePath", "Private/Firebase/FirebaseStorageMgr.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseStorageMgr_GetUploadController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseStorageMgr, nullptr, "GetUploadController", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFirebaseStorageMgr_GetUploadController_Statics::FirebaseStorageMgr_eventGetUploadController_Parms), Z_Construct_UFunction_UFirebaseStorageMgr_GetUploadController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseStorageMgr_GetUploadController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseStorageMgr_GetUploadController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseStorageMgr_GetUploadController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseStorageMgr_GetUploadController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFirebaseStorageMgr_GetUploadController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFirebaseStorageMgr_Upload_Statics
	{
		struct FirebaseStorageMgr_eventUpload_Parms
		{
			FString BucketURL;
			FString StorageIndexPath;
			FString UploadFilePath;
			FScriptDelegate OnResponse;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_BucketURL;
		static const UECodeGen_Private::FStrPropertyParams NewProp_StorageIndexPath;
		static const UECodeGen_Private::FStrPropertyParams NewProp_UploadFilePath;
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseStorageMgr_Upload_Statics::NewProp_BucketURL = { "BucketURL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseStorageMgr_eventUpload_Parms, BucketURL), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseStorageMgr_Upload_Statics::NewProp_StorageIndexPath = { "StorageIndexPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseStorageMgr_eventUpload_Parms, StorageIndexPath), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFirebaseStorageMgr_Upload_Statics::NewProp_UploadFilePath = { "UploadFilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseStorageMgr_eventUpload_Parms, UploadFilePath), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseStorageMgr_Upload_Statics::NewProp_OnResponse_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UFirebaseStorageMgr_Upload_Statics::NewProp_OnResponse = { "OnResponse", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseStorageMgr_eventUpload_Parms, OnResponse), Z_Construct_UDelegateFunction_CompactFirebasePro_FirebaseStorageDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseStorageMgr_Upload_Statics::NewProp_OnResponse_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseStorageMgr_Upload_Statics::NewProp_OnResponse_MetaData)) }; // 2494272668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirebaseStorageMgr_Upload_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseStorageMgr_Upload_Statics::NewProp_BucketURL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseStorageMgr_Upload_Statics::NewProp_StorageIndexPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseStorageMgr_Upload_Statics::NewProp_UploadFilePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirebaseStorageMgr_Upload_Statics::NewProp_OnResponse,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFirebaseStorageMgr_Upload_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase" },
		{ "ModuleRelativePath", "Private/Firebase/FirebaseStorageMgr.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirebaseStorageMgr_Upload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFirebaseStorageMgr, nullptr, "Upload", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFirebaseStorageMgr_Upload_Statics::FirebaseStorageMgr_eventUpload_Parms), Z_Construct_UFunction_UFirebaseStorageMgr_Upload_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseStorageMgr_Upload_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFirebaseStorageMgr_Upload_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirebaseStorageMgr_Upload_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFirebaseStorageMgr_Upload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFirebaseStorageMgr_Upload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFirebaseStorageMgr);
	UClass* Z_Construct_UClass_UFirebaseStorageMgr_NoRegister()
	{
		return UFirebaseStorageMgr::StaticClass();
	}
	struct Z_Construct_UClass_UFirebaseStorageMgr_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RequestTimeout_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RequestTimeout;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PendingReqData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PendingReqData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UploadController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_UploadController;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DownloadController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DownloadController;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFirebaseStorageMgr_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CompactFirebasePro,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFirebaseStorageMgr_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFirebaseStorageMgr_Delete, "Delete" }, // 1113414362
		{ &Z_Construct_UFunction_UFirebaseStorageMgr_Download, "Download" }, // 3379372962
		{ &Z_Construct_UFunction_UFirebaseStorageMgr_GetDownloadController, "GetDownloadController" }, // 3911432499
		{ &Z_Construct_UFunction_UFirebaseStorageMgr_GetUploadController, "GetUploadController" }, // 1605139196
		{ &Z_Construct_UFunction_UFirebaseStorageMgr_Upload, "Upload" }, // 2450331990
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirebaseStorageMgr_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Firebase/FirebaseStorageMgr.h" },
		{ "ModuleRelativePath", "Private/Firebase/FirebaseStorageMgr.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirebaseStorageMgr_Statics::NewProp_RequestTimeout_MetaData[] = {
		{ "ModuleRelativePath", "Private/Firebase/FirebaseStorageMgr.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFirebaseStorageMgr_Statics::NewProp_RequestTimeout = { "RequestTimeout", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirebaseStorageMgr, RequestTimeout), METADATA_PARAMS(Z_Construct_UClass_UFirebaseStorageMgr_Statics::NewProp_RequestTimeout_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirebaseStorageMgr_Statics::NewProp_RequestTimeout_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirebaseStorageMgr_Statics::NewProp_PendingReqData_MetaData[] = {
		{ "ModuleRelativePath", "Private/Firebase/FirebaseStorageMgr.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFirebaseStorageMgr_Statics::NewProp_PendingReqData = { "PendingReqData", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirebaseStorageMgr, PendingReqData), Z_Construct_UClass_UStorageRequestUnion_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFirebaseStorageMgr_Statics::NewProp_PendingReqData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirebaseStorageMgr_Statics::NewProp_PendingReqData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirebaseStorageMgr_Statics::NewProp_UploadController_MetaData[] = {
		{ "ModuleRelativePath", "Private/Firebase/FirebaseStorageMgr.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFirebaseStorageMgr_Statics::NewProp_UploadController = { "UploadController", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirebaseStorageMgr, UploadController), Z_Construct_UClass_UStorageController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFirebaseStorageMgr_Statics::NewProp_UploadController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirebaseStorageMgr_Statics::NewProp_UploadController_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFirebaseStorageMgr_Statics::NewProp_DownloadController_MetaData[] = {
		{ "ModuleRelativePath", "Private/Firebase/FirebaseStorageMgr.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFirebaseStorageMgr_Statics::NewProp_DownloadController = { "DownloadController", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFirebaseStorageMgr, DownloadController), Z_Construct_UClass_UStorageController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFirebaseStorageMgr_Statics::NewProp_DownloadController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFirebaseStorageMgr_Statics::NewProp_DownloadController_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFirebaseStorageMgr_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirebaseStorageMgr_Statics::NewProp_RequestTimeout,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirebaseStorageMgr_Statics::NewProp_PendingReqData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirebaseStorageMgr_Statics::NewProp_UploadController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirebaseStorageMgr_Statics::NewProp_DownloadController,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFirebaseStorageMgr_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFirebaseStorageMgr>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFirebaseStorageMgr_Statics::ClassParams = {
		&UFirebaseStorageMgr::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFirebaseStorageMgr_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UFirebaseStorageMgr_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UFirebaseStorageMgr_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFirebaseStorageMgr_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFirebaseStorageMgr()
	{
		if (!Z_Registration_Info_UClass_UFirebaseStorageMgr.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFirebaseStorageMgr.OuterSingleton, Z_Construct_UClass_UFirebaseStorageMgr_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFirebaseStorageMgr.OuterSingleton;
	}
	template<> COMPACTFIREBASEPRO_API UClass* StaticClass<UFirebaseStorageMgr>()
	{
		return UFirebaseStorageMgr::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFirebaseStorageMgr);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseStorageMgr_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseStorageMgr_h_Statics::EnumInfo[] = {
		{ EFirestoreStroageOper_StaticEnum, TEXT("EFirestoreStroageOper"), &Z_Registration_Info_UEnum_EFirestoreStroageOper, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3332269613U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseStorageMgr_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UStorageRequestUnion, UStorageRequestUnion::StaticClass, TEXT("UStorageRequestUnion"), &Z_Registration_Info_UClass_UStorageRequestUnion, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStorageRequestUnion), 3805926550U) },
		{ Z_Construct_UClass_UStorageController, UStorageController::StaticClass, TEXT("UStorageController"), &Z_Registration_Info_UClass_UStorageController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStorageController), 2063056811U) },
		{ Z_Construct_UClass_UFirebaseStorageMgr, UFirebaseStorageMgr::StaticClass, TEXT("UFirebaseStorageMgr"), &Z_Registration_Info_UClass_UFirebaseStorageMgr, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFirebaseStorageMgr), 2003950662U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseStorageMgr_h_1252160394(TEXT("/Script/CompactFirebasePro"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseStorageMgr_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseStorageMgr_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseStorageMgr_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseStorageMgr_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
