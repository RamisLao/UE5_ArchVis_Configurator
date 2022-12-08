// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCompactFirebasePro_init() {}
	COMPACTFIREBASEPRO_API UFunction* Z_Construct_UDelegateFunction_CompactFirebasePro_AuthRetDelegate__DelegateSignature();
	COMPACTFIREBASEPRO_API UFunction* Z_Construct_UDelegateFunction_CompactFirebasePro_FirebaseStorageDelegate__DelegateSignature();
	COMPACTFIREBASEPRO_API UFunction* Z_Construct_UDelegateFunction_CompactFirebasePro_FirestoreRespDel__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_CompactFirebasePro;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_CompactFirebasePro()
	{
		if (!Z_Registration_Info_UPackage__Script_CompactFirebasePro.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_CompactFirebasePro_AuthRetDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_CompactFirebasePro_FirebaseStorageDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_CompactFirebasePro_FirestoreRespDel__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/CompactFirebasePro",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xB95AB1BD,
				0x201A76D8,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_CompactFirebasePro.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_CompactFirebasePro.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_CompactFirebasePro(Z_Construct_UPackage__Script_CompactFirebasePro, TEXT("/Script/CompactFirebasePro"), Z_Registration_Info_UPackage__Script_CompactFirebasePro, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xB95AB1BD, 0x201A76D8));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
