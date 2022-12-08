// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CompactFirebasePro/Private/Firebase/FirebaseProxy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFirebaseProxy() {}
// Cross Module References
	COMPACTFIREBASEPRO_API UClass* Z_Construct_UClass_AFirebaseProxy_NoRegister();
	COMPACTFIREBASEPRO_API UClass* Z_Construct_UClass_AFirebaseProxy();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_CompactFirebasePro();
	COMPACTFIREBASEPRO_API UClass* Z_Construct_UClass_UFirebaseAuthMgr_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COMPACTFIREBASEPRO_API UClass* Z_Construct_UClass_UFirestoreMgr_NoRegister();
	COMPACTFIREBASEPRO_API UClass* Z_Construct_UClass_UFirebaseStorageMgr_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AFirebaseProxy::execGetStorageMgr)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFirebaseStorageMgr**)Z_Param__Result=P_THIS->GetStorageMgr();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFirebaseProxy::execGetFirestoreMgr)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFirestoreMgr**)Z_Param__Result=P_THIS->GetFirestoreMgr();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFirebaseProxy::execGetAuthMgr)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFirebaseAuthMgr**)Z_Param__Result=P_THIS->GetAuthMgr();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFirebaseProxy::execGetFirebaseProxy)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContentObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AFirebaseProxy**)Z_Param__Result=AFirebaseProxy::GetFirebaseProxy(Z_Param_WorldContentObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFirebaseProxy::execGetStorageManager)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContentObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFirebaseStorageMgr**)Z_Param__Result=AFirebaseProxy::GetStorageManager(Z_Param_WorldContentObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFirebaseProxy::execGetFirestoreManager)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContentObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFirestoreMgr**)Z_Param__Result=AFirebaseProxy::GetFirestoreManager(Z_Param_WorldContentObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFirebaseProxy::execGetFirebaseAuthManager)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContentObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFirebaseAuthMgr**)Z_Param__Result=AFirebaseProxy::GetFirebaseAuthManager(Z_Param_WorldContentObject);
		P_NATIVE_END;
	}
	void AFirebaseProxy::StaticRegisterNativesAFirebaseProxy()
	{
		UClass* Class = AFirebaseProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAuthMgr", &AFirebaseProxy::execGetAuthMgr },
			{ "GetFirebaseAuthManager", &AFirebaseProxy::execGetFirebaseAuthManager },
			{ "GetFirebaseProxy", &AFirebaseProxy::execGetFirebaseProxy },
			{ "GetFirestoreManager", &AFirebaseProxy::execGetFirestoreManager },
			{ "GetFirestoreMgr", &AFirebaseProxy::execGetFirestoreMgr },
			{ "GetStorageManager", &AFirebaseProxy::execGetStorageManager },
			{ "GetStorageMgr", &AFirebaseProxy::execGetStorageMgr },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFirebaseProxy_GetAuthMgr_Statics
	{
		struct FirebaseProxy_eventGetAuthMgr_Parms
		{
			UFirebaseAuthMgr* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFirebaseProxy_GetAuthMgr_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseProxy_eventGetAuthMgr_Parms, ReturnValue), Z_Construct_UClass_UFirebaseAuthMgr_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFirebaseProxy_GetAuthMgr_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFirebaseProxy_GetAuthMgr_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFirebaseProxy_GetAuthMgr_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase" },
		{ "ModuleRelativePath", "Private/Firebase/FirebaseProxy.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFirebaseProxy_GetAuthMgr_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFirebaseProxy, nullptr, "GetAuthMgr", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFirebaseProxy_GetAuthMgr_Statics::FirebaseProxy_eventGetAuthMgr_Parms), Z_Construct_UFunction_AFirebaseProxy_GetAuthMgr_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirebaseProxy_GetAuthMgr_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFirebaseProxy_GetAuthMgr_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirebaseProxy_GetAuthMgr_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFirebaseProxy_GetAuthMgr()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFirebaseProxy_GetAuthMgr_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFirebaseProxy_GetFirebaseAuthManager_Statics
	{
		struct FirebaseProxy_eventGetFirebaseAuthManager_Parms
		{
			UObject* WorldContentObject;
			UFirebaseAuthMgr* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContentObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFirebaseProxy_GetFirebaseAuthManager_Statics::NewProp_WorldContentObject = { "WorldContentObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseProxy_eventGetFirebaseAuthManager_Parms, WorldContentObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFirebaseProxy_GetFirebaseAuthManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseProxy_eventGetFirebaseAuthManager_Parms, ReturnValue), Z_Construct_UClass_UFirebaseAuthMgr_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFirebaseProxy_GetFirebaseAuthManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFirebaseProxy_GetFirebaseAuthManager_Statics::NewProp_WorldContentObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFirebaseProxy_GetFirebaseAuthManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFirebaseProxy_GetFirebaseAuthManager_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase" },
		{ "DefaultToSelf", "WorldContentObject" },
		{ "HidePin", "WorldContentObject" },
		{ "ModuleRelativePath", "Private/Firebase/FirebaseProxy.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFirebaseProxy_GetFirebaseAuthManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFirebaseProxy, nullptr, "GetFirebaseAuthManager", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFirebaseProxy_GetFirebaseAuthManager_Statics::FirebaseProxy_eventGetFirebaseAuthManager_Parms), Z_Construct_UFunction_AFirebaseProxy_GetFirebaseAuthManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirebaseProxy_GetFirebaseAuthManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFirebaseProxy_GetFirebaseAuthManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirebaseProxy_GetFirebaseAuthManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFirebaseProxy_GetFirebaseAuthManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFirebaseProxy_GetFirebaseAuthManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFirebaseProxy_GetFirebaseProxy_Statics
	{
		struct FirebaseProxy_eventGetFirebaseProxy_Parms
		{
			UObject* WorldContentObject;
			AFirebaseProxy* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContentObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFirebaseProxy_GetFirebaseProxy_Statics::NewProp_WorldContentObject = { "WorldContentObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseProxy_eventGetFirebaseProxy_Parms, WorldContentObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFirebaseProxy_GetFirebaseProxy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseProxy_eventGetFirebaseProxy_Parms, ReturnValue), Z_Construct_UClass_AFirebaseProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFirebaseProxy_GetFirebaseProxy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFirebaseProxy_GetFirebaseProxy_Statics::NewProp_WorldContentObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFirebaseProxy_GetFirebaseProxy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFirebaseProxy_GetFirebaseProxy_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase" },
		{ "DefaultToSelf", "WorldContentObject" },
		{ "HidePin", "WorldContentObject" },
		{ "ModuleRelativePath", "Private/Firebase/FirebaseProxy.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFirebaseProxy_GetFirebaseProxy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFirebaseProxy, nullptr, "GetFirebaseProxy", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFirebaseProxy_GetFirebaseProxy_Statics::FirebaseProxy_eventGetFirebaseProxy_Parms), Z_Construct_UFunction_AFirebaseProxy_GetFirebaseProxy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirebaseProxy_GetFirebaseProxy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFirebaseProxy_GetFirebaseProxy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirebaseProxy_GetFirebaseProxy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFirebaseProxy_GetFirebaseProxy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFirebaseProxy_GetFirebaseProxy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFirebaseProxy_GetFirestoreManager_Statics
	{
		struct FirebaseProxy_eventGetFirestoreManager_Parms
		{
			UObject* WorldContentObject;
			UFirestoreMgr* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContentObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFirebaseProxy_GetFirestoreManager_Statics::NewProp_WorldContentObject = { "WorldContentObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseProxy_eventGetFirestoreManager_Parms, WorldContentObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFirebaseProxy_GetFirestoreManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseProxy_eventGetFirestoreManager_Parms, ReturnValue), Z_Construct_UClass_UFirestoreMgr_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFirebaseProxy_GetFirestoreManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFirebaseProxy_GetFirestoreManager_Statics::NewProp_WorldContentObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFirebaseProxy_GetFirestoreManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFirebaseProxy_GetFirestoreManager_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase" },
		{ "DefaultToSelf", "WorldContentObject" },
		{ "HidePin", "WorldContentObject" },
		{ "ModuleRelativePath", "Private/Firebase/FirebaseProxy.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFirebaseProxy_GetFirestoreManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFirebaseProxy, nullptr, "GetFirestoreManager", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFirebaseProxy_GetFirestoreManager_Statics::FirebaseProxy_eventGetFirestoreManager_Parms), Z_Construct_UFunction_AFirebaseProxy_GetFirestoreManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirebaseProxy_GetFirestoreManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFirebaseProxy_GetFirestoreManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirebaseProxy_GetFirestoreManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFirebaseProxy_GetFirestoreManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFirebaseProxy_GetFirestoreManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFirebaseProxy_GetFirestoreMgr_Statics
	{
		struct FirebaseProxy_eventGetFirestoreMgr_Parms
		{
			UFirestoreMgr* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFirebaseProxy_GetFirestoreMgr_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseProxy_eventGetFirestoreMgr_Parms, ReturnValue), Z_Construct_UClass_UFirestoreMgr_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFirebaseProxy_GetFirestoreMgr_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFirebaseProxy_GetFirestoreMgr_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFirebaseProxy_GetFirestoreMgr_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase" },
		{ "ModuleRelativePath", "Private/Firebase/FirebaseProxy.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFirebaseProxy_GetFirestoreMgr_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFirebaseProxy, nullptr, "GetFirestoreMgr", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFirebaseProxy_GetFirestoreMgr_Statics::FirebaseProxy_eventGetFirestoreMgr_Parms), Z_Construct_UFunction_AFirebaseProxy_GetFirestoreMgr_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirebaseProxy_GetFirestoreMgr_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFirebaseProxy_GetFirestoreMgr_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirebaseProxy_GetFirestoreMgr_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFirebaseProxy_GetFirestoreMgr()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFirebaseProxy_GetFirestoreMgr_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFirebaseProxy_GetStorageManager_Statics
	{
		struct FirebaseProxy_eventGetStorageManager_Parms
		{
			UObject* WorldContentObject;
			UFirebaseStorageMgr* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContentObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFirebaseProxy_GetStorageManager_Statics::NewProp_WorldContentObject = { "WorldContentObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseProxy_eventGetStorageManager_Parms, WorldContentObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFirebaseProxy_GetStorageManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseProxy_eventGetStorageManager_Parms, ReturnValue), Z_Construct_UClass_UFirebaseStorageMgr_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFirebaseProxy_GetStorageManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFirebaseProxy_GetStorageManager_Statics::NewProp_WorldContentObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFirebaseProxy_GetStorageManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFirebaseProxy_GetStorageManager_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase" },
		{ "DefaultToSelf", "WorldContentObject" },
		{ "HidePin", "WorldContentObject" },
		{ "ModuleRelativePath", "Private/Firebase/FirebaseProxy.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFirebaseProxy_GetStorageManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFirebaseProxy, nullptr, "GetStorageManager", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFirebaseProxy_GetStorageManager_Statics::FirebaseProxy_eventGetStorageManager_Parms), Z_Construct_UFunction_AFirebaseProxy_GetStorageManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirebaseProxy_GetStorageManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFirebaseProxy_GetStorageManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirebaseProxy_GetStorageManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFirebaseProxy_GetStorageManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFirebaseProxy_GetStorageManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFirebaseProxy_GetStorageMgr_Statics
	{
		struct FirebaseProxy_eventGetStorageMgr_Parms
		{
			UFirebaseStorageMgr* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFirebaseProxy_GetStorageMgr_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirebaseProxy_eventGetStorageMgr_Parms, ReturnValue), Z_Construct_UClass_UFirebaseStorageMgr_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFirebaseProxy_GetStorageMgr_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFirebaseProxy_GetStorageMgr_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFirebaseProxy_GetStorageMgr_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase" },
		{ "ModuleRelativePath", "Private/Firebase/FirebaseProxy.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFirebaseProxy_GetStorageMgr_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFirebaseProxy, nullptr, "GetStorageMgr", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFirebaseProxy_GetStorageMgr_Statics::FirebaseProxy_eventGetStorageMgr_Parms), Z_Construct_UFunction_AFirebaseProxy_GetStorageMgr_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirebaseProxy_GetStorageMgr_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFirebaseProxy_GetStorageMgr_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirebaseProxy_GetStorageMgr_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFirebaseProxy_GetStorageMgr()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFirebaseProxy_GetStorageMgr_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFirebaseProxy);
	UClass* Z_Construct_UClass_AFirebaseProxy_NoRegister()
	{
		return AFirebaseProxy::StaticClass();
	}
	struct Z_Construct_UClass_AFirebaseProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AuthMgr_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AuthMgr;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FirestoreMgr_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FirestoreMgr;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StorageMgr_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StorageMgr;
		static const UECodeGen_Private::FBoolPropertyParams NewProp_PListBoolMap_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PListBoolMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PListBoolMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_PListBoolMap;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PListStringMap_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PListStringMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PListStringMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_PListStringMap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFirebaseProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CompactFirebasePro,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFirebaseProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFirebaseProxy_GetAuthMgr, "GetAuthMgr" }, // 2049858947
		{ &Z_Construct_UFunction_AFirebaseProxy_GetFirebaseAuthManager, "GetFirebaseAuthManager" }, // 15632674
		{ &Z_Construct_UFunction_AFirebaseProxy_GetFirebaseProxy, "GetFirebaseProxy" }, // 1850784204
		{ &Z_Construct_UFunction_AFirebaseProxy_GetFirestoreManager, "GetFirestoreManager" }, // 411190629
		{ &Z_Construct_UFunction_AFirebaseProxy_GetFirestoreMgr, "GetFirestoreMgr" }, // 1255829235
		{ &Z_Construct_UFunction_AFirebaseProxy_GetStorageManager, "GetStorageManager" }, // 1865236616
		{ &Z_Construct_UFunction_AFirebaseProxy_GetStorageMgr, "GetStorageMgr" }, // 2724929424
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirebaseProxy_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Firebase/FirebaseProxy.h" },
		{ "ModuleRelativePath", "Private/Firebase/FirebaseProxy.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirebaseProxy_Statics::NewProp_AuthMgr_MetaData[] = {
		{ "ModuleRelativePath", "Private/Firebase/FirebaseProxy.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFirebaseProxy_Statics::NewProp_AuthMgr = { "AuthMgr", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirebaseProxy, AuthMgr), Z_Construct_UClass_UFirebaseAuthMgr_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFirebaseProxy_Statics::NewProp_AuthMgr_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirebaseProxy_Statics::NewProp_AuthMgr_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirebaseProxy_Statics::NewProp_FirestoreMgr_MetaData[] = {
		{ "ModuleRelativePath", "Private/Firebase/FirebaseProxy.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFirebaseProxy_Statics::NewProp_FirestoreMgr = { "FirestoreMgr", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirebaseProxy, FirestoreMgr), Z_Construct_UClass_UFirestoreMgr_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFirebaseProxy_Statics::NewProp_FirestoreMgr_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirebaseProxy_Statics::NewProp_FirestoreMgr_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirebaseProxy_Statics::NewProp_StorageMgr_MetaData[] = {
		{ "ModuleRelativePath", "Private/Firebase/FirebaseProxy.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFirebaseProxy_Statics::NewProp_StorageMgr = { "StorageMgr", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirebaseProxy, StorageMgr), Z_Construct_UClass_UFirebaseStorageMgr_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFirebaseProxy_Statics::NewProp_StorageMgr_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirebaseProxy_Statics::NewProp_StorageMgr_MetaData)) };
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFirebaseProxy_Statics::NewProp_PListBoolMap_ValueProp = { "PListBoolMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AFirebaseProxy_Statics::NewProp_PListBoolMap_Key_KeyProp = { "PListBoolMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirebaseProxy_Statics::NewProp_PListBoolMap_MetaData[] = {
		{ "ModuleRelativePath", "Private/Firebase/FirebaseProxy.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AFirebaseProxy_Statics::NewProp_PListBoolMap = { "PListBoolMap", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirebaseProxy, PListBoolMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AFirebaseProxy_Statics::NewProp_PListBoolMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirebaseProxy_Statics::NewProp_PListBoolMap_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AFirebaseProxy_Statics::NewProp_PListStringMap_ValueProp = { "PListStringMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AFirebaseProxy_Statics::NewProp_PListStringMap_Key_KeyProp = { "PListStringMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirebaseProxy_Statics::NewProp_PListStringMap_MetaData[] = {
		{ "ModuleRelativePath", "Private/Firebase/FirebaseProxy.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AFirebaseProxy_Statics::NewProp_PListStringMap = { "PListStringMap", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirebaseProxy, PListStringMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AFirebaseProxy_Statics::NewProp_PListStringMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirebaseProxy_Statics::NewProp_PListStringMap_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFirebaseProxy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirebaseProxy_Statics::NewProp_AuthMgr,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirebaseProxy_Statics::NewProp_FirestoreMgr,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirebaseProxy_Statics::NewProp_StorageMgr,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirebaseProxy_Statics::NewProp_PListBoolMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirebaseProxy_Statics::NewProp_PListBoolMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirebaseProxy_Statics::NewProp_PListBoolMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirebaseProxy_Statics::NewProp_PListStringMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirebaseProxy_Statics::NewProp_PListStringMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirebaseProxy_Statics::NewProp_PListStringMap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFirebaseProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFirebaseProxy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFirebaseProxy_Statics::ClassParams = {
		&AFirebaseProxy::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFirebaseProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AFirebaseProxy_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFirebaseProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFirebaseProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFirebaseProxy()
	{
		if (!Z_Registration_Info_UClass_AFirebaseProxy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFirebaseProxy.OuterSingleton, Z_Construct_UClass_AFirebaseProxy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFirebaseProxy.OuterSingleton;
	}
	template<> COMPACTFIREBASEPRO_API UClass* StaticClass<AFirebaseProxy>()
	{
		return AFirebaseProxy::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFirebaseProxy);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseProxy_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseProxy_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFirebaseProxy, AFirebaseProxy::StaticClass, TEXT("AFirebaseProxy"), &Z_Registration_Info_UClass_AFirebaseProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFirebaseProxy), 1021199937U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseProxy_h_783708767(TEXT("/Script/CompactFirebasePro"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseProxy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseProxy_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
