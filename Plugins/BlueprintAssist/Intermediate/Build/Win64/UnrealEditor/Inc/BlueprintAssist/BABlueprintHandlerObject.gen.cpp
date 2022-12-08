// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintAssist/BlueprintAssistObjects/BABlueprintHandlerObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBABlueprintHandlerObject() {}
// Cross Module References
	BLUEPRINTASSIST_API UClass* Z_Construct_UClass_UBABlueprintHandlerObject_NoRegister();
	BLUEPRINTASSIST_API UClass* Z_Construct_UClass_UBABlueprintHandlerObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_BlueprintAssist();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprint_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBPVariableDescription();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraph_NoRegister();
// End Cross Module References
	void UBABlueprintHandlerObject::StaticRegisterNativesUBABlueprintHandlerObject()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBABlueprintHandlerObject);
	UClass* Z_Construct_UClass_UBABlueprintHandlerObject_NoRegister()
	{
		return UBABlueprintHandlerObject::StaticClass();
	}
	struct Z_Construct_UClass_UBABlueprintHandlerObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlueprintPtr_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_BlueprintPtr;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LastVariables_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastVariables_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LastVariables;
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_LastFunctionGraphs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastFunctionGraphs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LastFunctionGraphs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBABlueprintHandlerObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintAssist,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBABlueprintHandlerObject_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BlueprintAssistObjects/BABlueprintHandlerObject.h" },
		{ "ModuleRelativePath", "BlueprintAssistObjects/BABlueprintHandlerObject.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBABlueprintHandlerObject_Statics::NewProp_BlueprintPtr_MetaData[] = {
		{ "ModuleRelativePath", "BlueprintAssistObjects/BABlueprintHandlerObject.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UBABlueprintHandlerObject_Statics::NewProp_BlueprintPtr = { "BlueprintPtr", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBABlueprintHandlerObject, BlueprintPtr), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBABlueprintHandlerObject_Statics::NewProp_BlueprintPtr_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBABlueprintHandlerObject_Statics::NewProp_BlueprintPtr_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBABlueprintHandlerObject_Statics::NewProp_LastVariables_Inner = { "LastVariables", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBPVariableDescription, METADATA_PARAMS(nullptr, 0) }; // 3257071739
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBABlueprintHandlerObject_Statics::NewProp_LastVariables_MetaData[] = {
		{ "ModuleRelativePath", "BlueprintAssistObjects/BABlueprintHandlerObject.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBABlueprintHandlerObject_Statics::NewProp_LastVariables = { "LastVariables", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBABlueprintHandlerObject, LastVariables), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBABlueprintHandlerObject_Statics::NewProp_LastVariables_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBABlueprintHandlerObject_Statics::NewProp_LastVariables_MetaData)) }; // 3257071739
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UBABlueprintHandlerObject_Statics::NewProp_LastFunctionGraphs_Inner = { "LastFunctionGraphs", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UEdGraph_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBABlueprintHandlerObject_Statics::NewProp_LastFunctionGraphs_MetaData[] = {
		{ "ModuleRelativePath", "BlueprintAssistObjects/BABlueprintHandlerObject.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBABlueprintHandlerObject_Statics::NewProp_LastFunctionGraphs = { "LastFunctionGraphs", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBABlueprintHandlerObject, LastFunctionGraphs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBABlueprintHandlerObject_Statics::NewProp_LastFunctionGraphs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBABlueprintHandlerObject_Statics::NewProp_LastFunctionGraphs_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBABlueprintHandlerObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBABlueprintHandlerObject_Statics::NewProp_BlueprintPtr,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBABlueprintHandlerObject_Statics::NewProp_LastVariables_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBABlueprintHandlerObject_Statics::NewProp_LastVariables,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBABlueprintHandlerObject_Statics::NewProp_LastFunctionGraphs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBABlueprintHandlerObject_Statics::NewProp_LastFunctionGraphs,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBABlueprintHandlerObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBABlueprintHandlerObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBABlueprintHandlerObject_Statics::ClassParams = {
		&UBABlueprintHandlerObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBABlueprintHandlerObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBABlueprintHandlerObject_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBABlueprintHandlerObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBABlueprintHandlerObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBABlueprintHandlerObject()
	{
		if (!Z_Registration_Info_UClass_UBABlueprintHandlerObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBABlueprintHandlerObject.OuterSingleton, Z_Construct_UClass_UBABlueprintHandlerObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBABlueprintHandlerObject.OuterSingleton;
	}
	template<> BLUEPRINTASSIST_API UClass* StaticClass<UBABlueprintHandlerObject>()
	{
		return UBABlueprintHandlerObject::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBABlueprintHandlerObject);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_BlueprintAssistObjects_BABlueprintHandlerObject_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_BlueprintAssistObjects_BABlueprintHandlerObject_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBABlueprintHandlerObject, UBABlueprintHandlerObject::StaticClass, TEXT("UBABlueprintHandlerObject"), &Z_Registration_Info_UClass_UBABlueprintHandlerObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBABlueprintHandlerObject), 2385821263U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_BlueprintAssistObjects_BABlueprintHandlerObject_h_1596484612(TEXT("/Script/BlueprintAssist"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_BlueprintAssistObjects_BABlueprintHandlerObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_BlueprintAssistObjects_BABlueprintHandlerObject_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
