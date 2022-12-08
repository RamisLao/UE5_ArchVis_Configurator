// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintAssist/BlueprintAssistObjects/BAAssetEditorHandlerObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBAAssetEditorHandlerObject() {}
// Cross Module References
	BLUEPRINTASSIST_API UClass* Z_Construct_UClass_UBAAssetEditorHandlerObject_NoRegister();
	BLUEPRINTASSIST_API UClass* Z_Construct_UClass_UBAAssetEditorHandlerObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_BlueprintAssist();
	BLUEPRINTASSIST_API UClass* Z_Construct_UClass_UBABlueprintHandlerObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
	void UBAAssetEditorHandlerObject::StaticRegisterNativesUBAAssetEditorHandlerObject()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBAAssetEditorHandlerObject);
	UClass* Z_Construct_UClass_UBAAssetEditorHandlerObject_NoRegister()
	{
		return UBAAssetEditorHandlerObject::StaticClass();
	}
	struct Z_Construct_UClass_UBAAssetEditorHandlerObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BlueprintHandlers_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BlueprintHandlers_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlueprintHandlers_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_BlueprintHandlers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBAAssetEditorHandlerObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintAssist,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBAAssetEditorHandlerObject_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlueprintAssistObjects/BAAssetEditorHandlerObject.h" },
		{ "ModuleRelativePath", "BlueprintAssistObjects/BAAssetEditorHandlerObject.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBAAssetEditorHandlerObject_Statics::NewProp_BlueprintHandlers_ValueProp = { "BlueprintHandlers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UBABlueprintHandlerObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBAAssetEditorHandlerObject_Statics::NewProp_BlueprintHandlers_Key_KeyProp = { "BlueprintHandlers_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBAAssetEditorHandlerObject_Statics::NewProp_BlueprintHandlers_MetaData[] = {
		{ "ModuleRelativePath", "BlueprintAssistObjects/BAAssetEditorHandlerObject.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UBAAssetEditorHandlerObject_Statics::NewProp_BlueprintHandlers = { "BlueprintHandlers", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBAAssetEditorHandlerObject, BlueprintHandlers), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBAAssetEditorHandlerObject_Statics::NewProp_BlueprintHandlers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBAAssetEditorHandlerObject_Statics::NewProp_BlueprintHandlers_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBAAssetEditorHandlerObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBAAssetEditorHandlerObject_Statics::NewProp_BlueprintHandlers_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBAAssetEditorHandlerObject_Statics::NewProp_BlueprintHandlers_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBAAssetEditorHandlerObject_Statics::NewProp_BlueprintHandlers,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBAAssetEditorHandlerObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBAAssetEditorHandlerObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBAAssetEditorHandlerObject_Statics::ClassParams = {
		&UBAAssetEditorHandlerObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBAAssetEditorHandlerObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBAAssetEditorHandlerObject_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBAAssetEditorHandlerObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBAAssetEditorHandlerObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBAAssetEditorHandlerObject()
	{
		if (!Z_Registration_Info_UClass_UBAAssetEditorHandlerObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBAAssetEditorHandlerObject.OuterSingleton, Z_Construct_UClass_UBAAssetEditorHandlerObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBAAssetEditorHandlerObject.OuterSingleton;
	}
	template<> BLUEPRINTASSIST_API UClass* StaticClass<UBAAssetEditorHandlerObject>()
	{
		return UBAAssetEditorHandlerObject::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBAAssetEditorHandlerObject);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_BlueprintAssistObjects_BAAssetEditorHandlerObject_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_BlueprintAssistObjects_BAAssetEditorHandlerObject_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBAAssetEditorHandlerObject, UBAAssetEditorHandlerObject::StaticClass, TEXT("UBAAssetEditorHandlerObject"), &Z_Registration_Info_UClass_UBAAssetEditorHandlerObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBAAssetEditorHandlerObject), 3928162447U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_BlueprintAssistObjects_BAAssetEditorHandlerObject_h_1254859242(TEXT("/Script/BlueprintAssist"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_BlueprintAssistObjects_BAAssetEditorHandlerObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_BlueprintAssistObjects_BAAssetEditorHandlerObject_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
