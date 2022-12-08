// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintAssist/BlueprintAssistObjects/BARootObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBARootObject() {}
// Cross Module References
	BLUEPRINTASSIST_API UClass* Z_Construct_UClass_UBARootObject_NoRegister();
	BLUEPRINTASSIST_API UClass* Z_Construct_UClass_UBARootObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_BlueprintAssist();
	BLUEPRINTASSIST_API UClass* Z_Construct_UClass_UBAAssetEditorHandlerObject_NoRegister();
// End Cross Module References
	void UBARootObject::StaticRegisterNativesUBARootObject()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBARootObject);
	UClass* Z_Construct_UClass_UBARootObject_NoRegister()
	{
		return UBARootObject::StaticClass();
	}
	struct Z_Construct_UClass_UBARootObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetHandler_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AssetHandler;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBARootObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintAssist,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBARootObject_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlueprintAssistObjects/BARootObject.h" },
		{ "ModuleRelativePath", "BlueprintAssistObjects/BARootObject.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBARootObject_Statics::NewProp_AssetHandler_MetaData[] = {
		{ "ModuleRelativePath", "BlueprintAssistObjects/BARootObject.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBARootObject_Statics::NewProp_AssetHandler = { "AssetHandler", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBARootObject, AssetHandler), Z_Construct_UClass_UBAAssetEditorHandlerObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBARootObject_Statics::NewProp_AssetHandler_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBARootObject_Statics::NewProp_AssetHandler_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBARootObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBARootObject_Statics::NewProp_AssetHandler,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBARootObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBARootObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBARootObject_Statics::ClassParams = {
		&UBARootObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBARootObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBARootObject_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBARootObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBARootObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBARootObject()
	{
		if (!Z_Registration_Info_UClass_UBARootObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBARootObject.OuterSingleton, Z_Construct_UClass_UBARootObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBARootObject.OuterSingleton;
	}
	template<> BLUEPRINTASSIST_API UClass* StaticClass<UBARootObject>()
	{
		return UBARootObject::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBARootObject);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_BlueprintAssistObjects_BARootObject_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_BlueprintAssistObjects_BARootObject_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBARootObject, UBARootObject::StaticClass, TEXT("UBARootObject"), &Z_Registration_Info_UClass_UBARootObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBARootObject), 584430518U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_BlueprintAssistObjects_BARootObject_h_1531469066(TEXT("/Script/BlueprintAssist"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_BlueprintAssistObjects_BARootObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_BlueprintAssistObjects_BARootObject_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
