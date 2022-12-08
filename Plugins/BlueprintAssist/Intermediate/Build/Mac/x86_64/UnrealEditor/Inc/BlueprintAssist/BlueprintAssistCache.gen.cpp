// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintAssist/Public/BlueprintAssistCache.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprintAssistCache() {}
// Cross Module References
	BLUEPRINTASSIST_API UScriptStruct* Z_Construct_UScriptStruct_FBANodeData();
	UPackage* Z_Construct_UPackage__Script_BlueprintAssist();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	BLUEPRINTASSIST_API UScriptStruct* Z_Construct_UScriptStruct_FBAGraphData();
	BLUEPRINTASSIST_API UScriptStruct* Z_Construct_UScriptStruct_FBAPackageData();
	BLUEPRINTASSIST_API UScriptStruct* Z_Construct_UScriptStruct_FBACacheData();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BANodeData;
class UScriptStruct* FBANodeData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BANodeData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BANodeData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBANodeData, Z_Construct_UPackage__Script_BlueprintAssist(), TEXT("BANodeData"));
	}
	return Z_Registration_Info_UScriptStruct_BANodeData.OuterSingleton;
}
template<> BLUEPRINTASSIST_API UScriptStruct* StaticStruct<FBANodeData>()
{
	return FBANodeData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBANodeData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedNodeSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedNodeSize;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CachedPins_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedPins_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedPins_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_CachedPins;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBANodeData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlueprintAssistCache.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBANodeData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBANodeData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBANodeData_Statics::NewProp_CachedNodeSize_MetaData[] = {
		{ "ModuleRelativePath", "Public/BlueprintAssistCache.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBANodeData_Statics::NewProp_CachedNodeSize = { "CachedNodeSize", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBANodeData, CachedNodeSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FBANodeData_Statics::NewProp_CachedNodeSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBANodeData_Statics::NewProp_CachedNodeSize_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBANodeData_Statics::NewProp_CachedPins_ValueProp = { "CachedPins", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBANodeData_Statics::NewProp_CachedPins_Key_KeyProp = { "CachedPins_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBANodeData_Statics::NewProp_CachedPins_MetaData[] = {
		{ "ModuleRelativePath", "Public/BlueprintAssistCache.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FBANodeData_Statics::NewProp_CachedPins = { "CachedPins", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBANodeData, CachedPins), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FBANodeData_Statics::NewProp_CachedPins_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBANodeData_Statics::NewProp_CachedPins_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBANodeData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBANodeData_Statics::NewProp_CachedNodeSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBANodeData_Statics::NewProp_CachedPins_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBANodeData_Statics::NewProp_CachedPins_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBANodeData_Statics::NewProp_CachedPins,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBANodeData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintAssist,
		nullptr,
		&NewStructOps,
		"BANodeData",
		sizeof(FBANodeData),
		alignof(FBANodeData),
		Z_Construct_UScriptStruct_FBANodeData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBANodeData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBANodeData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBANodeData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBANodeData()
	{
		if (!Z_Registration_Info_UScriptStruct_BANodeData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BANodeData.InnerSingleton, Z_Construct_UScriptStruct_FBANodeData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BANodeData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BAGraphData;
class UScriptStruct* FBAGraphData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BAGraphData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BAGraphData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBAGraphData, Z_Construct_UPackage__Script_BlueprintAssist(), TEXT("BAGraphData"));
	}
	return Z_Registration_Info_UScriptStruct_BAGraphData.OuterSingleton;
}
template<> BLUEPRINTASSIST_API UScriptStruct* StaticStruct<FBAGraphData>()
{
	return FBAGraphData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBAGraphData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_NodeData_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NodeData_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeData_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_NodeData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBAGraphData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlueprintAssistCache.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBAGraphData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBAGraphData>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBAGraphData_Statics::NewProp_NodeData_ValueProp = { "NodeData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FBANodeData, METADATA_PARAMS(nullptr, 0) }; // 2193093831
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBAGraphData_Statics::NewProp_NodeData_Key_KeyProp = { "NodeData_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBAGraphData_Statics::NewProp_NodeData_MetaData[] = {
		{ "ModuleRelativePath", "Public/BlueprintAssistCache.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FBAGraphData_Statics::NewProp_NodeData = { "NodeData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBAGraphData, NodeData), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FBAGraphData_Statics::NewProp_NodeData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBAGraphData_Statics::NewProp_NodeData_MetaData)) }; // 2193093831
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBAGraphData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBAGraphData_Statics::NewProp_NodeData_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBAGraphData_Statics::NewProp_NodeData_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBAGraphData_Statics::NewProp_NodeData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBAGraphData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintAssist,
		nullptr,
		&NewStructOps,
		"BAGraphData",
		sizeof(FBAGraphData),
		alignof(FBAGraphData),
		Z_Construct_UScriptStruct_FBAGraphData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBAGraphData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBAGraphData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBAGraphData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBAGraphData()
	{
		if (!Z_Registration_Info_UScriptStruct_BAGraphData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BAGraphData.InnerSingleton, Z_Construct_UScriptStruct_FBAGraphData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BAGraphData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BAPackageData;
class UScriptStruct* FBAPackageData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BAPackageData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BAPackageData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBAPackageData, Z_Construct_UPackage__Script_BlueprintAssist(), TEXT("BAPackageData"));
	}
	return Z_Registration_Info_UScriptStruct_BAPackageData.OuterSingleton;
}
template<> BLUEPRINTASSIST_API UScriptStruct* StaticStruct<FBAPackageData>()
{
	return FBAPackageData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBAPackageData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_GraphData_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GraphData_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GraphData_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_GraphData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBAPackageData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlueprintAssistCache.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBAPackageData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBAPackageData>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBAPackageData_Statics::NewProp_GraphData_ValueProp = { "GraphData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FBAGraphData, METADATA_PARAMS(nullptr, 0) }; // 3439111368
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBAPackageData_Statics::NewProp_GraphData_Key_KeyProp = { "GraphData_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBAPackageData_Statics::NewProp_GraphData_MetaData[] = {
		{ "ModuleRelativePath", "Public/BlueprintAssistCache.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FBAPackageData_Statics::NewProp_GraphData = { "GraphData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBAPackageData, GraphData), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FBAPackageData_Statics::NewProp_GraphData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBAPackageData_Statics::NewProp_GraphData_MetaData)) }; // 3439111368
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBAPackageData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBAPackageData_Statics::NewProp_GraphData_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBAPackageData_Statics::NewProp_GraphData_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBAPackageData_Statics::NewProp_GraphData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBAPackageData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintAssist,
		nullptr,
		&NewStructOps,
		"BAPackageData",
		sizeof(FBAPackageData),
		alignof(FBAPackageData),
		Z_Construct_UScriptStruct_FBAPackageData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBAPackageData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBAPackageData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBAPackageData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBAPackageData()
	{
		if (!Z_Registration_Info_UScriptStruct_BAPackageData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BAPackageData.InnerSingleton, Z_Construct_UScriptStruct_FBAPackageData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BAPackageData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BACacheData;
class UScriptStruct* FBACacheData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BACacheData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BACacheData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBACacheData, Z_Construct_UPackage__Script_BlueprintAssist(), TEXT("BACacheData"));
	}
	return Z_Registration_Info_UScriptStruct_BACacheData.OuterSingleton;
}
template<> BLUEPRINTASSIST_API UScriptStruct* StaticStruct<FBACacheData>()
{
	return FBACacheData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBACacheData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_PackageData_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_PackageData_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PackageData_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_PackageData;
		static const UECodeGen_Private::FStrPropertyParams NewProp_BookmarkedFolders_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BookmarkedFolders_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BookmarkedFolders;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CacheVersion_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_CacheVersion;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBACacheData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlueprintAssistCache.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBACacheData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBACacheData>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBACacheData_Statics::NewProp_PackageData_ValueProp = { "PackageData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FBAPackageData, METADATA_PARAMS(nullptr, 0) }; // 1843906317
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBACacheData_Statics::NewProp_PackageData_Key_KeyProp = { "PackageData_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBACacheData_Statics::NewProp_PackageData_MetaData[] = {
		{ "ModuleRelativePath", "Public/BlueprintAssistCache.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FBACacheData_Statics::NewProp_PackageData = { "PackageData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBACacheData, PackageData), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FBACacheData_Statics::NewProp_PackageData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBACacheData_Statics::NewProp_PackageData_MetaData)) }; // 1843906317
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBACacheData_Statics::NewProp_BookmarkedFolders_Inner = { "BookmarkedFolders", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBACacheData_Statics::NewProp_BookmarkedFolders_MetaData[] = {
		{ "Comment", "// package name -> package data\n" },
		{ "ModuleRelativePath", "Public/BlueprintAssistCache.h" },
		{ "ToolTip", "package name -> package data" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBACacheData_Statics::NewProp_BookmarkedFolders = { "BookmarkedFolders", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBACacheData, BookmarkedFolders), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FBACacheData_Statics::NewProp_BookmarkedFolders_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBACacheData_Statics::NewProp_BookmarkedFolders_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBACacheData_Statics::NewProp_CacheVersion_MetaData[] = {
		{ "ModuleRelativePath", "Public/BlueprintAssistCache.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FBACacheData_Statics::NewProp_CacheVersion = { "CacheVersion", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBACacheData, CacheVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FBACacheData_Statics::NewProp_CacheVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBACacheData_Statics::NewProp_CacheVersion_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBACacheData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBACacheData_Statics::NewProp_PackageData_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBACacheData_Statics::NewProp_PackageData_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBACacheData_Statics::NewProp_PackageData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBACacheData_Statics::NewProp_BookmarkedFolders_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBACacheData_Statics::NewProp_BookmarkedFolders,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBACacheData_Statics::NewProp_CacheVersion,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBACacheData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintAssist,
		nullptr,
		&NewStructOps,
		"BACacheData",
		sizeof(FBACacheData),
		alignof(FBACacheData),
		Z_Construct_UScriptStruct_FBACacheData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBACacheData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBACacheData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBACacheData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBACacheData()
	{
		if (!Z_Registration_Info_UScriptStruct_BACacheData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BACacheData.InnerSingleton, Z_Construct_UScriptStruct_FBACacheData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BACacheData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistCache_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistCache_h_Statics::ScriptStructInfo[] = {
		{ FBANodeData::StaticStruct, Z_Construct_UScriptStruct_FBANodeData_Statics::NewStructOps, TEXT("BANodeData"), &Z_Registration_Info_UScriptStruct_BANodeData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBANodeData), 2193093831U) },
		{ FBAGraphData::StaticStruct, Z_Construct_UScriptStruct_FBAGraphData_Statics::NewStructOps, TEXT("BAGraphData"), &Z_Registration_Info_UScriptStruct_BAGraphData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBAGraphData), 3439111368U) },
		{ FBAPackageData::StaticStruct, Z_Construct_UScriptStruct_FBAPackageData_Statics::NewStructOps, TEXT("BAPackageData"), &Z_Registration_Info_UScriptStruct_BAPackageData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBAPackageData), 1843906317U) },
		{ FBACacheData::StaticStruct, Z_Construct_UScriptStruct_FBACacheData_Statics::NewStructOps, TEXT("BACacheData"), &Z_Registration_Info_UScriptStruct_BACacheData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBACacheData), 633263320U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistCache_h_3566872241(TEXT("/Script/BlueprintAssist"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistCache_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistCache_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
