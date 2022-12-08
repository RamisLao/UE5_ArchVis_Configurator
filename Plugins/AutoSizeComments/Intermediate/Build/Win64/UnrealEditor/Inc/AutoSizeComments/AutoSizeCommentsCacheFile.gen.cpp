// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoSizeComments/Public/AutoSizeCommentsCacheFile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutoSizeCommentsCacheFile() {}
// Cross Module References
	AUTOSIZECOMMENTS_API UScriptStruct* Z_Construct_UScriptStruct_FASCCommentData();
	UPackage* Z_Construct_UPackage__Script_AutoSizeComments();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	AUTOSIZECOMMENTS_API UScriptStruct* Z_Construct_UScriptStruct_FASCGraphData();
	AUTOSIZECOMMENTS_API UScriptStruct* Z_Construct_UScriptStruct_FASCPackageData();
	AUTOSIZECOMMENTS_API UScriptStruct* Z_Construct_UScriptStruct_FASCCacheData();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ASCCommentData;
class UScriptStruct* FASCCommentData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ASCCommentData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ASCCommentData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FASCCommentData, Z_Construct_UPackage__Script_AutoSizeComments(), TEXT("ASCCommentData"));
	}
	return Z_Registration_Info_UScriptStruct_ASCCommentData.OuterSingleton;
}
template<> AUTOSIZECOMMENTS_API UScriptStruct* StaticStruct<FASCCommentData>()
{
	return FASCCommentData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FASCCommentData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_NodeGuids_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeGuids_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NodeGuids;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHeader_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_bHeader;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInit_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_bInit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASCCommentData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AutoSizeCommentsCacheFile.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FASCCommentData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FASCCommentData>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FASCCommentData_Statics::NewProp_NodeGuids_Inner = { "NodeGuids", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASCCommentData_Statics::NewProp_NodeGuids_MetaData[] = {
		{ "Comment", "/* Containing nodes */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsCacheFile.h" },
		{ "ToolTip", "Containing nodes" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FASCCommentData_Statics::NewProp_NodeGuids = { "NodeGuids", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FASCCommentData, NodeGuids), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FASCCommentData_Statics::NewProp_NodeGuids_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASCCommentData_Statics::NewProp_NodeGuids_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASCCommentData_Statics::NewProp_bHeader_MetaData[] = {
		{ "Comment", "/* Is this node a header node */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsCacheFile.h" },
		{ "ToolTip", "Is this node a header node" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FASCCommentData_Statics::NewProp_bHeader = { "bHeader", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FASCCommentData, bHeader), METADATA_PARAMS(Z_Construct_UScriptStruct_FASCCommentData_Statics::NewProp_bHeader_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASCCommentData_Statics::NewProp_bHeader_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASCCommentData_Statics::NewProp_bInit_MetaData[] = {
		{ "Comment", "/* Has the node been initialized */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsCacheFile.h" },
		{ "ToolTip", "Has the node been initialized" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FASCCommentData_Statics::NewProp_bInit = { "bInit", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FASCCommentData, bInit), METADATA_PARAMS(Z_Construct_UScriptStruct_FASCCommentData_Statics::NewProp_bInit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASCCommentData_Statics::NewProp_bInit_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FASCCommentData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASCCommentData_Statics::NewProp_NodeGuids_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASCCommentData_Statics::NewProp_NodeGuids,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASCCommentData_Statics::NewProp_bHeader,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASCCommentData_Statics::NewProp_bInit,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FASCCommentData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AutoSizeComments,
		nullptr,
		&NewStructOps,
		"ASCCommentData",
		sizeof(FASCCommentData),
		alignof(FASCCommentData),
		Z_Construct_UScriptStruct_FASCCommentData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASCCommentData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FASCCommentData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASCCommentData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FASCCommentData()
	{
		if (!Z_Registration_Info_UScriptStruct_ASCCommentData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ASCCommentData.InnerSingleton, Z_Construct_UScriptStruct_FASCCommentData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ASCCommentData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ASCGraphData;
class UScriptStruct* FASCGraphData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ASCGraphData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ASCGraphData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FASCGraphData, Z_Construct_UPackage__Script_AutoSizeComments(), TEXT("ASCGraphData"));
	}
	return Z_Registration_Info_UScriptStruct_ASCGraphData.OuterSingleton;
}
template<> AUTOSIZECOMMENTS_API UScriptStruct* StaticStruct<FASCGraphData>()
{
	return FASCGraphData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FASCGraphData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_CommentData_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CommentData_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CommentData_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_CommentData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASCGraphData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AutoSizeCommentsCacheFile.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FASCGraphData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FASCGraphData>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FASCGraphData_Statics::NewProp_CommentData_ValueProp = { "CommentData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FASCCommentData, METADATA_PARAMS(nullptr, 0) }; // 14318554
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FASCGraphData_Statics::NewProp_CommentData_Key_KeyProp = { "CommentData_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASCGraphData_Statics::NewProp_CommentData_MetaData[] = {
		{ "ModuleRelativePath", "Public/AutoSizeCommentsCacheFile.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FASCGraphData_Statics::NewProp_CommentData = { "CommentData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FASCGraphData, CommentData), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FASCGraphData_Statics::NewProp_CommentData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASCGraphData_Statics::NewProp_CommentData_MetaData)) }; // 14318554
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FASCGraphData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASCGraphData_Statics::NewProp_CommentData_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASCGraphData_Statics::NewProp_CommentData_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASCGraphData_Statics::NewProp_CommentData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FASCGraphData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AutoSizeComments,
		nullptr,
		&NewStructOps,
		"ASCGraphData",
		sizeof(FASCGraphData),
		alignof(FASCGraphData),
		Z_Construct_UScriptStruct_FASCGraphData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASCGraphData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FASCGraphData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASCGraphData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FASCGraphData()
	{
		if (!Z_Registration_Info_UScriptStruct_ASCGraphData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ASCGraphData.InnerSingleton, Z_Construct_UScriptStruct_FASCGraphData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ASCGraphData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ASCPackageData;
class UScriptStruct* FASCPackageData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ASCPackageData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ASCPackageData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FASCPackageData, Z_Construct_UPackage__Script_AutoSizeComments(), TEXT("ASCPackageData"));
	}
	return Z_Registration_Info_UScriptStruct_ASCPackageData.OuterSingleton;
}
template<> AUTOSIZECOMMENTS_API UScriptStruct* StaticStruct<FASCPackageData>()
{
	return FASCPackageData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FASCPackageData_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASCPackageData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AutoSizeCommentsCacheFile.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FASCPackageData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FASCPackageData>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FASCPackageData_Statics::NewProp_GraphData_ValueProp = { "GraphData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FASCGraphData, METADATA_PARAMS(nullptr, 0) }; // 3415561152
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FASCPackageData_Statics::NewProp_GraphData_Key_KeyProp = { "GraphData_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASCPackageData_Statics::NewProp_GraphData_MetaData[] = {
		{ "ModuleRelativePath", "Public/AutoSizeCommentsCacheFile.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FASCPackageData_Statics::NewProp_GraphData = { "GraphData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FASCPackageData, GraphData), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FASCPackageData_Statics::NewProp_GraphData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASCPackageData_Statics::NewProp_GraphData_MetaData)) }; // 3415561152
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FASCPackageData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASCPackageData_Statics::NewProp_GraphData_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASCPackageData_Statics::NewProp_GraphData_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASCPackageData_Statics::NewProp_GraphData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FASCPackageData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AutoSizeComments,
		nullptr,
		&NewStructOps,
		"ASCPackageData",
		sizeof(FASCPackageData),
		alignof(FASCPackageData),
		Z_Construct_UScriptStruct_FASCPackageData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASCPackageData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FASCPackageData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASCPackageData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FASCPackageData()
	{
		if (!Z_Registration_Info_UScriptStruct_ASCPackageData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ASCPackageData.InnerSingleton, Z_Construct_UScriptStruct_FASCPackageData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ASCPackageData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ASCCacheData;
class UScriptStruct* FASCCacheData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ASCCacheData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ASCCacheData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FASCCacheData, Z_Construct_UPackage__Script_AutoSizeComments(), TEXT("ASCCacheData"));
	}
	return Z_Registration_Info_UScriptStruct_ASCCacheData.OuterSingleton;
}
template<> AUTOSIZECOMMENTS_API UScriptStruct* StaticStruct<FASCCacheData>()
{
	return FASCCacheData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FASCCacheData_Statics
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
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASCCacheData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AutoSizeCommentsCacheFile.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FASCCacheData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FASCCacheData>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FASCCacheData_Statics::NewProp_PackageData_ValueProp = { "PackageData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FASCPackageData, METADATA_PARAMS(nullptr, 0) }; // 85975841
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FASCCacheData_Statics::NewProp_PackageData_Key_KeyProp = { "PackageData_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASCCacheData_Statics::NewProp_PackageData_MetaData[] = {
		{ "ModuleRelativePath", "Public/AutoSizeCommentsCacheFile.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FASCCacheData_Statics::NewProp_PackageData = { "PackageData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FASCCacheData, PackageData), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FASCCacheData_Statics::NewProp_PackageData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASCCacheData_Statics::NewProp_PackageData_MetaData)) }; // 85975841
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FASCCacheData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASCCacheData_Statics::NewProp_PackageData_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASCCacheData_Statics::NewProp_PackageData_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASCCacheData_Statics::NewProp_PackageData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FASCCacheData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AutoSizeComments,
		nullptr,
		&NewStructOps,
		"ASCCacheData",
		sizeof(FASCCacheData),
		alignof(FASCCacheData),
		Z_Construct_UScriptStruct_FASCCacheData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASCCacheData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FASCCacheData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASCCacheData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FASCCacheData()
	{
		if (!Z_Registration_Info_UScriptStruct_ASCCacheData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ASCCacheData.InnerSingleton, Z_Construct_UScriptStruct_FASCCacheData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ASCCacheData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_AutoSizeComments_Source_AutoSizeComments_Public_AutoSizeCommentsCacheFile_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_AutoSizeComments_Source_AutoSizeComments_Public_AutoSizeCommentsCacheFile_h_Statics::ScriptStructInfo[] = {
		{ FASCCommentData::StaticStruct, Z_Construct_UScriptStruct_FASCCommentData_Statics::NewStructOps, TEXT("ASCCommentData"), &Z_Registration_Info_UScriptStruct_ASCCommentData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FASCCommentData), 14318554U) },
		{ FASCGraphData::StaticStruct, Z_Construct_UScriptStruct_FASCGraphData_Statics::NewStructOps, TEXT("ASCGraphData"), &Z_Registration_Info_UScriptStruct_ASCGraphData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FASCGraphData), 3415561152U) },
		{ FASCPackageData::StaticStruct, Z_Construct_UScriptStruct_FASCPackageData_Statics::NewStructOps, TEXT("ASCPackageData"), &Z_Registration_Info_UScriptStruct_ASCPackageData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FASCPackageData), 85975841U) },
		{ FASCCacheData::StaticStruct, Z_Construct_UScriptStruct_FASCCacheData_Statics::NewStructOps, TEXT("ASCCacheData"), &Z_Registration_Info_UScriptStruct_ASCCacheData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FASCCacheData), 1481572744U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_AutoSizeComments_Source_AutoSizeComments_Public_AutoSizeCommentsCacheFile_h_1549659796(TEXT("/Script/AutoSizeComments"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_AutoSizeComments_Source_AutoSizeComments_Public_AutoSizeCommentsCacheFile_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_AutoSizeComments_Source_AutoSizeComments_Public_AutoSizeCommentsCacheFile_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
