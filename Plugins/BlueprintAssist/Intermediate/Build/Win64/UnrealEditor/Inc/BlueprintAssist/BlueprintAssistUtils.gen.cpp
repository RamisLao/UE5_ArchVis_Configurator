// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintAssist/Public/BlueprintAssistUtils.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprintAssistUtils() {}
// Cross Module References
	BLUEPRINTASSIST_API UEnum* Z_Construct_UEnum_BlueprintAssist_EBARoundingMethod();
	UPackage* Z_Construct_UPackage__Script_BlueprintAssist();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBARoundingMethod;
	static UEnum* EBARoundingMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EBARoundingMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EBARoundingMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_BlueprintAssist_EBARoundingMethod, Z_Construct_UPackage__Script_BlueprintAssist(), TEXT("EBARoundingMethod"));
		}
		return Z_Registration_Info_UEnum_EBARoundingMethod.OuterSingleton;
	}
	template<> BLUEPRINTASSIST_API UEnum* StaticEnum<EBARoundingMethod>()
	{
		return EBARoundingMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_BlueprintAssist_EBARoundingMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_BlueprintAssist_EBARoundingMethod_Statics::Enumerators[] = {
		{ "EBARoundingMethod::Round", (int64)EBARoundingMethod::Round },
		{ "EBARoundingMethod::Ceil", (int64)EBARoundingMethod::Ceil },
		{ "EBARoundingMethod::Floor", (int64)EBARoundingMethod::Floor },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_BlueprintAssist_EBARoundingMethod_Statics::Enum_MetaDataParams[] = {
		{ "Ceil.DisplayName", "Ceil" },
		{ "Ceil.Name", "EBARoundingMethod::Ceil" },
		{ "Floor.DisplayName", "Floor" },
		{ "Floor.Name", "EBARoundingMethod::Floor" },
		{ "ModuleRelativePath", "Public/BlueprintAssistUtils.h" },
		{ "Round.DisplayName", "Round" },
		{ "Round.Name", "EBARoundingMethod::Round" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_BlueprintAssist_EBARoundingMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_BlueprintAssist,
		nullptr,
		"EBARoundingMethod",
		"EBARoundingMethod",
		Z_Construct_UEnum_BlueprintAssist_EBARoundingMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_BlueprintAssist_EBARoundingMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_BlueprintAssist_EBARoundingMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_BlueprintAssist_EBARoundingMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_BlueprintAssist_EBARoundingMethod()
	{
		if (!Z_Registration_Info_UEnum_EBARoundingMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBARoundingMethod.InnerSingleton, Z_Construct_UEnum_BlueprintAssist_EBARoundingMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EBARoundingMethod.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistUtils_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistUtils_h_Statics::EnumInfo[] = {
		{ EBARoundingMethod_StaticEnum, TEXT("EBARoundingMethod"), &Z_Registration_Info_UEnum_EBARoundingMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 702174706U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistUtils_h_2846583903(TEXT("/Script/BlueprintAssist"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistUtils_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistUtils_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
