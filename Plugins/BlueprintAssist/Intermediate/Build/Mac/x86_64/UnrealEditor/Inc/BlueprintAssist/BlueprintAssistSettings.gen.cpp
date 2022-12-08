// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintAssist/Public/BlueprintAssistSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprintAssistSettings() {}
// Cross Module References
	BLUEPRINTASSIST_API UEnum* Z_Construct_UEnum_BlueprintAssist_EBANodeFormattingStyle();
	UPackage* Z_Construct_UPackage__Script_BlueprintAssist();
	BLUEPRINTASSIST_API UEnum* Z_Construct_UEnum_BlueprintAssist_EBAParameterFormattingStyle();
	BLUEPRINTASSIST_API UEnum* Z_Construct_UEnum_BlueprintAssist_EBAWiringStyle();
	BLUEPRINTASSIST_API UEnum* Z_Construct_UEnum_BlueprintAssist_EBAAutoFormatting();
	BLUEPRINTASSIST_API UEnum* Z_Construct_UEnum_BlueprintAssist_EBAFormatAllStyle();
	BLUEPRINTASSIST_API UEnum* Z_Construct_UEnum_BlueprintAssist_EBAFormatAllHorizontalAlignment();
	BLUEPRINTASSIST_API UEnum* Z_Construct_UEnum_BlueprintAssist_EBAFormatterType();
	BLUEPRINTASSIST_API UEnum* Z_Construct_UEnum_BlueprintAssist_EBAAutoZoomToNode();
	BLUEPRINTASSIST_API UEnum* Z_Construct_UEnum_BlueprintAssist_EBAFunctionAccessSpecifier();
	BLUEPRINTASSIST_API UScriptStruct* Z_Construct_UScriptStruct_FBAFormatterSettings();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EEdGraphPinDirection();
	BLUEPRINTASSIST_API UClass* Z_Construct_UClass_UBASettings_NoRegister();
	BLUEPRINTASSIST_API UClass* Z_Construct_UClass_UBASettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	SLATE_API UScriptStruct* Z_Construct_UScriptStruct_FInputChord();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBANodeFormattingStyle;
	static UEnum* EBANodeFormattingStyle_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EBANodeFormattingStyle.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EBANodeFormattingStyle.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_BlueprintAssist_EBANodeFormattingStyle, Z_Construct_UPackage__Script_BlueprintAssist(), TEXT("EBANodeFormattingStyle"));
		}
		return Z_Registration_Info_UEnum_EBANodeFormattingStyle.OuterSingleton;
	}
	template<> BLUEPRINTASSIST_API UEnum* StaticEnum<EBANodeFormattingStyle>()
	{
		return EBANodeFormattingStyle_StaticEnum();
	}
	struct Z_Construct_UEnum_BlueprintAssist_EBANodeFormattingStyle_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_BlueprintAssist_EBANodeFormattingStyle_Statics::Enumerators[] = {
		{ "EBANodeFormattingStyle::Expanded", (int64)EBANodeFormattingStyle::Expanded },
		{ "EBANodeFormattingStyle::Compact", (int64)EBANodeFormattingStyle::Compact },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_BlueprintAssist_EBANodeFormattingStyle_Statics::Enum_MetaDataParams[] = {
		{ "Compact.DisplayName", "Compact" },
		{ "Compact.Name", "EBANodeFormattingStyle::Compact" },
		{ "Expanded.DisplayName", "Expanded" },
		{ "Expanded.Name", "EBANodeFormattingStyle::Expanded" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_BlueprintAssist_EBANodeFormattingStyle_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_BlueprintAssist,
		nullptr,
		"EBANodeFormattingStyle",
		"EBANodeFormattingStyle",
		Z_Construct_UEnum_BlueprintAssist_EBANodeFormattingStyle_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_BlueprintAssist_EBANodeFormattingStyle_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_BlueprintAssist_EBANodeFormattingStyle_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_BlueprintAssist_EBANodeFormattingStyle_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_BlueprintAssist_EBANodeFormattingStyle()
	{
		if (!Z_Registration_Info_UEnum_EBANodeFormattingStyle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBANodeFormattingStyle.InnerSingleton, Z_Construct_UEnum_BlueprintAssist_EBANodeFormattingStyle_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EBANodeFormattingStyle.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBAParameterFormattingStyle;
	static UEnum* EBAParameterFormattingStyle_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EBAParameterFormattingStyle.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EBAParameterFormattingStyle.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_BlueprintAssist_EBAParameterFormattingStyle, Z_Construct_UPackage__Script_BlueprintAssist(), TEXT("EBAParameterFormattingStyle"));
		}
		return Z_Registration_Info_UEnum_EBAParameterFormattingStyle.OuterSingleton;
	}
	template<> BLUEPRINTASSIST_API UEnum* StaticEnum<EBAParameterFormattingStyle>()
	{
		return EBAParameterFormattingStyle_StaticEnum();
	}
	struct Z_Construct_UEnum_BlueprintAssist_EBAParameterFormattingStyle_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_BlueprintAssist_EBAParameterFormattingStyle_Statics::Enumerators[] = {
		{ "EBAParameterFormattingStyle::Helixing", (int64)EBAParameterFormattingStyle::Helixing },
		{ "EBAParameterFormattingStyle::LeftSide", (int64)EBAParameterFormattingStyle::LeftSide },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_BlueprintAssist_EBAParameterFormattingStyle_Statics::Enum_MetaDataParams[] = {
		{ "Helixing.DisplayName", "Helixing" },
		{ "Helixing.Name", "EBAParameterFormattingStyle::Helixing" },
		{ "LeftSide.DisplayName", "Left-side" },
		{ "LeftSide.Name", "EBAParameterFormattingStyle::LeftSide" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_BlueprintAssist_EBAParameterFormattingStyle_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_BlueprintAssist,
		nullptr,
		"EBAParameterFormattingStyle",
		"EBAParameterFormattingStyle",
		Z_Construct_UEnum_BlueprintAssist_EBAParameterFormattingStyle_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_BlueprintAssist_EBAParameterFormattingStyle_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_BlueprintAssist_EBAParameterFormattingStyle_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_BlueprintAssist_EBAParameterFormattingStyle_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_BlueprintAssist_EBAParameterFormattingStyle()
	{
		if (!Z_Registration_Info_UEnum_EBAParameterFormattingStyle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBAParameterFormattingStyle.InnerSingleton, Z_Construct_UEnum_BlueprintAssist_EBAParameterFormattingStyle_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EBAParameterFormattingStyle.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBAWiringStyle;
	static UEnum* EBAWiringStyle_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EBAWiringStyle.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EBAWiringStyle.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_BlueprintAssist_EBAWiringStyle, Z_Construct_UPackage__Script_BlueprintAssist(), TEXT("EBAWiringStyle"));
		}
		return Z_Registration_Info_UEnum_EBAWiringStyle.OuterSingleton;
	}
	template<> BLUEPRINTASSIST_API UEnum* StaticEnum<EBAWiringStyle>()
	{
		return EBAWiringStyle_StaticEnum();
	}
	struct Z_Construct_UEnum_BlueprintAssist_EBAWiringStyle_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_BlueprintAssist_EBAWiringStyle_Statics::Enumerators[] = {
		{ "EBAWiringStyle::AlwaysMerge", (int64)EBAWiringStyle::AlwaysMerge },
		{ "EBAWiringStyle::MergeWhenNear", (int64)EBAWiringStyle::MergeWhenNear },
		{ "EBAWiringStyle::SingleWire", (int64)EBAWiringStyle::SingleWire },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_BlueprintAssist_EBAWiringStyle_Statics::Enum_MetaDataParams[] = {
		{ "AlwaysMerge.DisplayName", "Always Merge" },
		{ "AlwaysMerge.Name", "EBAWiringStyle::AlwaysMerge" },
		{ "MergeWhenNear.DisplayName", "Merge When Near" },
		{ "MergeWhenNear.Name", "EBAWiringStyle::MergeWhenNear" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "SingleWire.DisplayName", "Single Wire" },
		{ "SingleWire.Name", "EBAWiringStyle::SingleWire" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_BlueprintAssist_EBAWiringStyle_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_BlueprintAssist,
		nullptr,
		"EBAWiringStyle",
		"EBAWiringStyle",
		Z_Construct_UEnum_BlueprintAssist_EBAWiringStyle_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_BlueprintAssist_EBAWiringStyle_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_BlueprintAssist_EBAWiringStyle_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_BlueprintAssist_EBAWiringStyle_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_BlueprintAssist_EBAWiringStyle()
	{
		if (!Z_Registration_Info_UEnum_EBAWiringStyle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBAWiringStyle.InnerSingleton, Z_Construct_UEnum_BlueprintAssist_EBAWiringStyle_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EBAWiringStyle.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBAAutoFormatting;
	static UEnum* EBAAutoFormatting_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EBAAutoFormatting.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EBAAutoFormatting.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_BlueprintAssist_EBAAutoFormatting, Z_Construct_UPackage__Script_BlueprintAssist(), TEXT("EBAAutoFormatting"));
		}
		return Z_Registration_Info_UEnum_EBAAutoFormatting.OuterSingleton;
	}
	template<> BLUEPRINTASSIST_API UEnum* StaticEnum<EBAAutoFormatting>()
	{
		return EBAAutoFormatting_StaticEnum();
	}
	struct Z_Construct_UEnum_BlueprintAssist_EBAAutoFormatting_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_BlueprintAssist_EBAAutoFormatting_Statics::Enumerators[] = {
		{ "EBAAutoFormatting::Never", (int64)EBAAutoFormatting::Never },
		{ "EBAAutoFormatting::FormatAllConnected", (int64)EBAAutoFormatting::FormatAllConnected },
		{ "EBAAutoFormatting::FormatSingleConnected", (int64)EBAAutoFormatting::FormatSingleConnected },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_BlueprintAssist_EBAAutoFormatting_Statics::Enum_MetaDataParams[] = {
		{ "FormatAllConnected.DisplayName", "Format all connected nodes" },
		{ "FormatAllConnected.Name", "EBAAutoFormatting::FormatAllConnected" },
		{ "FormatSingleConnected.DisplayName", "Format relative to a connected node" },
		{ "FormatSingleConnected.Name", "EBAAutoFormatting::FormatSingleConnected" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "Never.DisplayName", "Never" },
		{ "Never.Name", "EBAAutoFormatting::Never" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_BlueprintAssist_EBAAutoFormatting_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_BlueprintAssist,
		nullptr,
		"EBAAutoFormatting",
		"EBAAutoFormatting",
		Z_Construct_UEnum_BlueprintAssist_EBAAutoFormatting_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_BlueprintAssist_EBAAutoFormatting_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_BlueprintAssist_EBAAutoFormatting_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_BlueprintAssist_EBAAutoFormatting_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_BlueprintAssist_EBAAutoFormatting()
	{
		if (!Z_Registration_Info_UEnum_EBAAutoFormatting.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBAAutoFormatting.InnerSingleton, Z_Construct_UEnum_BlueprintAssist_EBAAutoFormatting_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EBAAutoFormatting.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBAFormatAllStyle;
	static UEnum* EBAFormatAllStyle_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EBAFormatAllStyle.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EBAFormatAllStyle.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_BlueprintAssist_EBAFormatAllStyle, Z_Construct_UPackage__Script_BlueprintAssist(), TEXT("EBAFormatAllStyle"));
		}
		return Z_Registration_Info_UEnum_EBAFormatAllStyle.OuterSingleton;
	}
	template<> BLUEPRINTASSIST_API UEnum* StaticEnum<EBAFormatAllStyle>()
	{
		return EBAFormatAllStyle_StaticEnum();
	}
	struct Z_Construct_UEnum_BlueprintAssist_EBAFormatAllStyle_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_BlueprintAssist_EBAFormatAllStyle_Statics::Enumerators[] = {
		{ "EBAFormatAllStyle::Simple", (int64)EBAFormatAllStyle::Simple },
		{ "EBAFormatAllStyle::Smart", (int64)EBAFormatAllStyle::Smart },
		{ "EBAFormatAllStyle::NodeType", (int64)EBAFormatAllStyle::NodeType },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_BlueprintAssist_EBAFormatAllStyle_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "NodeType.DisplayName", "Node Type (columns by node type)" },
		{ "NodeType.Name", "EBAFormatAllStyle::NodeType" },
		{ "Simple.DisplayName", "Simple (single column)" },
		{ "Simple.Name", "EBAFormatAllStyle::Simple" },
		{ "Smart.DisplayName", "Smart (create columns from node position)" },
		{ "Smart.Name", "EBAFormatAllStyle::Smart" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_BlueprintAssist_EBAFormatAllStyle_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_BlueprintAssist,
		nullptr,
		"EBAFormatAllStyle",
		"EBAFormatAllStyle",
		Z_Construct_UEnum_BlueprintAssist_EBAFormatAllStyle_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_BlueprintAssist_EBAFormatAllStyle_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_BlueprintAssist_EBAFormatAllStyle_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_BlueprintAssist_EBAFormatAllStyle_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_BlueprintAssist_EBAFormatAllStyle()
	{
		if (!Z_Registration_Info_UEnum_EBAFormatAllStyle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBAFormatAllStyle.InnerSingleton, Z_Construct_UEnum_BlueprintAssist_EBAFormatAllStyle_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EBAFormatAllStyle.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBAFormatAllHorizontalAlignment;
	static UEnum* EBAFormatAllHorizontalAlignment_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EBAFormatAllHorizontalAlignment.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EBAFormatAllHorizontalAlignment.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_BlueprintAssist_EBAFormatAllHorizontalAlignment, Z_Construct_UPackage__Script_BlueprintAssist(), TEXT("EBAFormatAllHorizontalAlignment"));
		}
		return Z_Registration_Info_UEnum_EBAFormatAllHorizontalAlignment.OuterSingleton;
	}
	template<> BLUEPRINTASSIST_API UEnum* StaticEnum<EBAFormatAllHorizontalAlignment>()
	{
		return EBAFormatAllHorizontalAlignment_StaticEnum();
	}
	struct Z_Construct_UEnum_BlueprintAssist_EBAFormatAllHorizontalAlignment_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_BlueprintAssist_EBAFormatAllHorizontalAlignment_Statics::Enumerators[] = {
		{ "EBAFormatAllHorizontalAlignment::RootNode", (int64)EBAFormatAllHorizontalAlignment::RootNode },
		{ "EBAFormatAllHorizontalAlignment::Comment", (int64)EBAFormatAllHorizontalAlignment::Comment },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_BlueprintAssist_EBAFormatAllHorizontalAlignment_Statics::Enum_MetaDataParams[] = {
		{ "Comment.DisplayName", "Comment (align the left-side of any containing comments)" },
		{ "Comment.Name", "EBAFormatAllHorizontalAlignment::Comment" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "RootNode.DisplayName", "Root Node (align the left-side of the node tree's root node)" },
		{ "RootNode.Name", "EBAFormatAllHorizontalAlignment::RootNode" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_BlueprintAssist_EBAFormatAllHorizontalAlignment_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_BlueprintAssist,
		nullptr,
		"EBAFormatAllHorizontalAlignment",
		"EBAFormatAllHorizontalAlignment",
		Z_Construct_UEnum_BlueprintAssist_EBAFormatAllHorizontalAlignment_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_BlueprintAssist_EBAFormatAllHorizontalAlignment_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_BlueprintAssist_EBAFormatAllHorizontalAlignment_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_BlueprintAssist_EBAFormatAllHorizontalAlignment_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_BlueprintAssist_EBAFormatAllHorizontalAlignment()
	{
		if (!Z_Registration_Info_UEnum_EBAFormatAllHorizontalAlignment.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBAFormatAllHorizontalAlignment.InnerSingleton, Z_Construct_UEnum_BlueprintAssist_EBAFormatAllHorizontalAlignment_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EBAFormatAllHorizontalAlignment.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBAFormatterType;
	static UEnum* EBAFormatterType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EBAFormatterType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EBAFormatterType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_BlueprintAssist_EBAFormatterType, Z_Construct_UPackage__Script_BlueprintAssist(), TEXT("EBAFormatterType"));
		}
		return Z_Registration_Info_UEnum_EBAFormatterType.OuterSingleton;
	}
	template<> BLUEPRINTASSIST_API UEnum* StaticEnum<EBAFormatterType>()
	{
		return EBAFormatterType_StaticEnum();
	}
	struct Z_Construct_UEnum_BlueprintAssist_EBAFormatterType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_BlueprintAssist_EBAFormatterType_Statics::Enumerators[] = {
		{ "EBAFormatterType::Blueprint", (int64)EBAFormatterType::Blueprint },
		{ "EBAFormatterType::BehaviorTree", (int64)EBAFormatterType::BehaviorTree },
		{ "EBAFormatterType::Simple", (int64)EBAFormatterType::Simple },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_BlueprintAssist_EBAFormatterType_Statics::Enum_MetaDataParams[] = {
		{ "BehaviorTree.DisplayName", "BehaviorTree" },
		{ "BehaviorTree.Name", "EBAFormatterType::BehaviorTree" },
		{ "Blueprint.DisplayName", "Blueprint" },
		{ "Blueprint.Name", "EBAFormatterType::Blueprint" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "Simple.DisplayName", "Simple formatter" },
		{ "Simple.Name", "EBAFormatterType::Simple" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_BlueprintAssist_EBAFormatterType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_BlueprintAssist,
		nullptr,
		"EBAFormatterType",
		"EBAFormatterType",
		Z_Construct_UEnum_BlueprintAssist_EBAFormatterType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_BlueprintAssist_EBAFormatterType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_BlueprintAssist_EBAFormatterType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_BlueprintAssist_EBAFormatterType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_BlueprintAssist_EBAFormatterType()
	{
		if (!Z_Registration_Info_UEnum_EBAFormatterType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBAFormatterType.InnerSingleton, Z_Construct_UEnum_BlueprintAssist_EBAFormatterType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EBAFormatterType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBAAutoZoomToNode;
	static UEnum* EBAAutoZoomToNode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EBAAutoZoomToNode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EBAAutoZoomToNode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_BlueprintAssist_EBAAutoZoomToNode, Z_Construct_UPackage__Script_BlueprintAssist(), TEXT("EBAAutoZoomToNode"));
		}
		return Z_Registration_Info_UEnum_EBAAutoZoomToNode.OuterSingleton;
	}
	template<> BLUEPRINTASSIST_API UEnum* StaticEnum<EBAAutoZoomToNode>()
	{
		return EBAAutoZoomToNode_StaticEnum();
	}
	struct Z_Construct_UEnum_BlueprintAssist_EBAAutoZoomToNode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_BlueprintAssist_EBAAutoZoomToNode_Statics::Enumerators[] = {
		{ "EBAAutoZoomToNode::Never", (int64)EBAAutoZoomToNode::Never },
		{ "EBAAutoZoomToNode::Always", (int64)EBAAutoZoomToNode::Always },
		{ "EBAAutoZoomToNode::Outside_Viewport", (int64)EBAAutoZoomToNode::Outside_Viewport },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_BlueprintAssist_EBAAutoZoomToNode_Statics::Enum_MetaDataParams[] = {
		{ "Always.DisplayName", "Always" },
		{ "Always.Name", "EBAAutoZoomToNode::Always" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "Never.DisplayName", "Never" },
		{ "Never.Name", "EBAAutoZoomToNode::Never" },
		{ "Outside_Viewport.DisplayName", "Outside viewport" },
		{ "Outside_Viewport.Name", "EBAAutoZoomToNode::Outside_Viewport" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_BlueprintAssist_EBAAutoZoomToNode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_BlueprintAssist,
		nullptr,
		"EBAAutoZoomToNode",
		"EBAAutoZoomToNode",
		Z_Construct_UEnum_BlueprintAssist_EBAAutoZoomToNode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_BlueprintAssist_EBAAutoZoomToNode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_BlueprintAssist_EBAAutoZoomToNode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_BlueprintAssist_EBAAutoZoomToNode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_BlueprintAssist_EBAAutoZoomToNode()
	{
		if (!Z_Registration_Info_UEnum_EBAAutoZoomToNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBAAutoZoomToNode.InnerSingleton, Z_Construct_UEnum_BlueprintAssist_EBAAutoZoomToNode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EBAAutoZoomToNode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBAFunctionAccessSpecifier;
	static UEnum* EBAFunctionAccessSpecifier_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EBAFunctionAccessSpecifier.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EBAFunctionAccessSpecifier.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_BlueprintAssist_EBAFunctionAccessSpecifier, Z_Construct_UPackage__Script_BlueprintAssist(), TEXT("EBAFunctionAccessSpecifier"));
		}
		return Z_Registration_Info_UEnum_EBAFunctionAccessSpecifier.OuterSingleton;
	}
	template<> BLUEPRINTASSIST_API UEnum* StaticEnum<EBAFunctionAccessSpecifier>()
	{
		return EBAFunctionAccessSpecifier_StaticEnum();
	}
	struct Z_Construct_UEnum_BlueprintAssist_EBAFunctionAccessSpecifier_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_BlueprintAssist_EBAFunctionAccessSpecifier_Statics::Enumerators[] = {
		{ "EBAFunctionAccessSpecifier::Public", (int64)EBAFunctionAccessSpecifier::Public },
		{ "EBAFunctionAccessSpecifier::Protected", (int64)EBAFunctionAccessSpecifier::Protected },
		{ "EBAFunctionAccessSpecifier::Private", (int64)EBAFunctionAccessSpecifier::Private },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_BlueprintAssist_EBAFunctionAccessSpecifier_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "Private.DisplayName", "Private" },
		{ "Private.Name", "EBAFunctionAccessSpecifier::Private" },
		{ "Protected.DisplayName", "Protected" },
		{ "Protected.Name", "EBAFunctionAccessSpecifier::Protected" },
		{ "Public.DisplayName", "Public" },
		{ "Public.Name", "EBAFunctionAccessSpecifier::Public" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_BlueprintAssist_EBAFunctionAccessSpecifier_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_BlueprintAssist,
		nullptr,
		"EBAFunctionAccessSpecifier",
		"EBAFunctionAccessSpecifier",
		Z_Construct_UEnum_BlueprintAssist_EBAFunctionAccessSpecifier_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_BlueprintAssist_EBAFunctionAccessSpecifier_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_BlueprintAssist_EBAFunctionAccessSpecifier_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_BlueprintAssist_EBAFunctionAccessSpecifier_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_BlueprintAssist_EBAFunctionAccessSpecifier()
	{
		if (!Z_Registration_Info_UEnum_EBAFunctionAccessSpecifier.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBAFunctionAccessSpecifier.InnerSingleton, Z_Construct_UEnum_BlueprintAssist_EBAFunctionAccessSpecifier_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EBAFunctionAccessSpecifier.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BAFormatterSettings;
class UScriptStruct* FBAFormatterSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BAFormatterSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BAFormatterSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBAFormatterSettings, Z_Construct_UPackage__Script_BlueprintAssist(), TEXT("BAFormatterSettings"));
	}
	return Z_Registration_Info_UScriptStruct_BAFormatterSettings.OuterSingleton;
}
template<> BLUEPRINTASSIST_API UScriptStruct* StaticStruct<FBAFormatterSettings>()
{
	return FBAFormatterSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBAFormatterSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UECodeGen_Private::FBytePropertyParams NewProp_FormatterType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FormatterType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FormatterType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Padding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Padding;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AutoFormatting_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoFormatting_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AutoFormatting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FormatterDirection_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_FormatterDirection;
		static const UECodeGen_Private::FNamePropertyParams NewProp_RootNodes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootNodes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RootNodes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExecPinName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ExecPinName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBAFormatterSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBAFormatterSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBAFormatterSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBAFormatterSettings_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Category", "FormatterSettings" },
		{ "Comment", "/* Setting to enable / disable all behaviour for this graph type */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Setting to enable / disable all behaviour for this graph type" },
	};
#endif
	void Z_Construct_UScriptStruct_FBAFormatterSettings_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((FBAFormatterSettings*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBAFormatterSettings_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBAFormatterSettings), &Z_Construct_UScriptStruct_FBAFormatterSettings_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBAFormatterSettings_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBAFormatterSettings_Statics::NewProp_bEnabled_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBAFormatterSettings_Statics::NewProp_FormatterType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBAFormatterSettings_Statics::NewProp_FormatterType_MetaData[] = {
		{ "Category", "FormatterSettings" },
		{ "Comment", "/* Formatter to use */" },
		{ "EditCondition", "bEnabled" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Formatter to use" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FBAFormatterSettings_Statics::NewProp_FormatterType = { "FormatterType", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBAFormatterSettings, FormatterType), Z_Construct_UEnum_BlueprintAssist_EBAFormatterType, METADATA_PARAMS(Z_Construct_UScriptStruct_FBAFormatterSettings_Statics::NewProp_FormatterType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBAFormatterSettings_Statics::NewProp_FormatterType_MetaData)) }; // 2964372042
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBAFormatterSettings_Statics::NewProp_Padding_MetaData[] = {
		{ "Category", "FormatterSettings" },
		{ "Comment", "/* Padding used when formatting nodes */" },
		{ "EditCondition", "bEnabled" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Padding used when formatting nodes" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBAFormatterSettings_Statics::NewProp_Padding = { "Padding", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBAFormatterSettings, Padding), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FBAFormatterSettings_Statics::NewProp_Padding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBAFormatterSettings_Statics::NewProp_Padding_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBAFormatterSettings_Statics::NewProp_AutoFormatting_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBAFormatterSettings_Statics::NewProp_AutoFormatting_MetaData[] = {
		{ "Category", "FormatterSettings" },
		{ "Comment", "/* Auto formatting method to be used for this graph */" },
		{ "EditCondition", "bEnabled" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Auto formatting method to be used for this graph" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FBAFormatterSettings_Statics::NewProp_AutoFormatting = { "AutoFormatting", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBAFormatterSettings, AutoFormatting), Z_Construct_UEnum_BlueprintAssist_EBAAutoFormatting, METADATA_PARAMS(Z_Construct_UScriptStruct_FBAFormatterSettings_Statics::NewProp_AutoFormatting_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBAFormatterSettings_Statics::NewProp_AutoFormatting_MetaData)) }; // 2217451862
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBAFormatterSettings_Statics::NewProp_FormatterDirection_MetaData[] = {
		{ "Category", "FormatterSettings" },
		{ "Comment", "/* Direction of execution flow in this graph */" },
		{ "EditCondition", "bEnabled" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Direction of execution flow in this graph" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBAFormatterSettings_Statics::NewProp_FormatterDirection = { "FormatterDirection", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBAFormatterSettings, FormatterDirection), Z_Construct_UEnum_Engine_EEdGraphPinDirection, METADATA_PARAMS(Z_Construct_UScriptStruct_FBAFormatterSettings_Statics::NewProp_FormatterDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBAFormatterSettings_Statics::NewProp_FormatterDirection_MetaData)) }; // 1668123198
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBAFormatterSettings_Statics::NewProp_RootNodes_Inner = { "RootNodes", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBAFormatterSettings_Statics::NewProp_RootNodes_MetaData[] = {
		{ "Category", "FormatterSettings" },
		{ "Comment", "/* Names of any root nodes that this graph uses */" },
		{ "EditCondition", "bEnabled" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Names of any root nodes that this graph uses" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBAFormatterSettings_Statics::NewProp_RootNodes = { "RootNodes", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBAFormatterSettings, RootNodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FBAFormatterSettings_Statics::NewProp_RootNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBAFormatterSettings_Statics::NewProp_RootNodes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBAFormatterSettings_Statics::NewProp_ExecPinName_MetaData[] = {
		{ "Category", "FormatterSettings" },
		{ "Comment", "/* Name of the execution pin for this graph type */" },
		{ "EditCondition", "bEnabled" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Name of the execution pin for this graph type" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBAFormatterSettings_Statics::NewProp_ExecPinName = { "ExecPinName", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBAFormatterSettings, ExecPinName), METADATA_PARAMS(Z_Construct_UScriptStruct_FBAFormatterSettings_Statics::NewProp_ExecPinName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBAFormatterSettings_Statics::NewProp_ExecPinName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBAFormatterSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBAFormatterSettings_Statics::NewProp_bEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBAFormatterSettings_Statics::NewProp_FormatterType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBAFormatterSettings_Statics::NewProp_FormatterType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBAFormatterSettings_Statics::NewProp_Padding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBAFormatterSettings_Statics::NewProp_AutoFormatting_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBAFormatterSettings_Statics::NewProp_AutoFormatting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBAFormatterSettings_Statics::NewProp_FormatterDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBAFormatterSettings_Statics::NewProp_RootNodes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBAFormatterSettings_Statics::NewProp_RootNodes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBAFormatterSettings_Statics::NewProp_ExecPinName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBAFormatterSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintAssist,
		nullptr,
		&NewStructOps,
		"BAFormatterSettings",
		sizeof(FBAFormatterSettings),
		alignof(FBAFormatterSettings),
		Z_Construct_UScriptStruct_FBAFormatterSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBAFormatterSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBAFormatterSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBAFormatterSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBAFormatterSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_BAFormatterSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BAFormatterSettings.InnerSingleton, Z_Construct_UScriptStruct_FBAFormatterSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BAFormatterSettings.InnerSingleton;
	}
	void UBASettings::StaticRegisterNativesUBASettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBASettings);
	UClass* Z_Construct_UClass_UBASettings_NoRegister()
	{
		return UBASettings::StaticClass();
	}
	struct Z_Construct_UClass_UBASettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAddToolbarWidget_MetaData[];
#endif
		static void NewProp_bAddToolbarWidget_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddToolbarWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedPinHighlightColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SelectedPinHighlightColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableGlobalCommentBubblePinned_MetaData[];
#endif
		static void NewProp_bEnableGlobalCommentBubblePinned_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableGlobalCommentBubblePinned;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGlobalCommentBubblePinnedValue_MetaData[];
#endif
		static void NewProp_bGlobalCommentBubblePinnedValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGlobalCommentBubblePinnedValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBetterWiringForNewNodes_MetaData[];
#endif
		static void NewProp_bBetterWiringForNewNodes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBetterWiringForNewNodes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoAddParentNode_MetaData[];
#endif
		static void NewProp_bAutoAddParentNode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoAddParentNode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoRenameGettersAndSetters_MetaData[];
#endif
		static void NewProp_bAutoRenameGettersAndSetters_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoRenameGettersAndSetters;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMergeGenerateGetterAndSetterButton_MetaData[];
#endif
		static void NewProp_bMergeGenerateGetterAndSetterButton_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMergeGenerateGetterAndSetterButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShiftCameraDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ShiftCameraDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSlowButAccurateSizeCaching_MetaData[];
#endif
		static void NewProp_bSlowButAccurateSizeCaching_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSlowButAccurateSizeCaching;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSaveBlueprintAssistCacheToFile_MetaData[];
#endif
		static void NewProp_bSaveBlueprintAssistCacheToFile_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSaveBlueprintAssistCacheToFile;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AutoZoomToNodeBehavior_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoZoomToNodeBehavior_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AutoZoomToNodeBehavior;
		static const UECodeGen_Private::FNamePropertyParams NewProp_SupportedAssetEditors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SupportedAssetEditors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SupportedAssetEditors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGloballyDisableAutoFormatting_MetaData[];
#endif
		static void NewProp_bGloballyDisableAutoFormatting_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGloballyDisableAutoFormatting;
		static const UECodeGen_Private::FBytePropertyParams NewProp_FormattingStyle_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FormattingStyle_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FormattingStyle;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ParameterStyle_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterStyle_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ParameterStyle;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ExecutionWiringStyle_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExecutionWiringStyle_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ExecutionWiringStyle;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ParameterWiringStyle_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterWiringStyle_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ParameterWiringStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableFasterFormatting_MetaData[];
#endif
		static void NewProp_bEnableFasterFormatting_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableFasterFormatting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseKnotNodePool_MetaData[];
#endif
		static void NewProp_bUseKnotNodePool_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseKnotNodePool;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLimitHelixingHeight_MetaData[];
#endif
		static void NewProp_bLimitHelixingHeight_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLimitHelixingHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HelixingHeightMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HelixingHeightMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SingleNodeMaxHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SingleNodeMaxHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDetectNewNodesAndCacheNodeSizes_MetaData[];
#endif
		static void NewProp_bDetectNewNodesAndCacheNodeSizes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDetectNewNodesAndCacheNodeSizes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRefreshNodeSizeBeforeFormatting_MetaData[];
#endif
		static void NewProp_bRefreshNodeSizeBeforeFormatting_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRefreshNodeSizeBeforeFormatting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCreateKnotNodes_MetaData[];
#endif
		static void NewProp_bCreateKnotNodes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreateKnotNodes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExpandNodesAheadOfParameters_MetaData[];
#endif
		static void NewProp_bExpandNodesAheadOfParameters_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExpandNodesAheadOfParameters;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExpandNodesByHeight_MetaData[];
#endif
		static void NewProp_bExpandNodesByHeight_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExpandNodesByHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExpandParametersByHeight_MetaData[];
#endif
		static void NewProp_bExpandParametersByHeight_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExpandParametersByHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSnapToGrid_MetaData[];
#endif
		static void NewProp_bSnapToGrid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSnapToGrid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAlignExecNodesTo8x8Grid_MetaData[];
#endif
		static void NewProp_bAlignExecNodesTo8x8Grid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlignExecNodesTo8x8Grid;
		static const UECodeGen_Private::FBytePropertyParams NewProp_FormatAllStyle_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FormatAllStyle_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FormatAllStyle;
		static const UECodeGen_Private::FBytePropertyParams NewProp_FormatAllHorizontalAlignment_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FormatAllHorizontalAlignment_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FormatAllHorizontalAlignment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FormatAllPadding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FormatAllPadding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoPositionEventNodes_MetaData[];
#endif
		static void NewProp_bAutoPositionEventNodes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoPositionEventNodes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAlwaysFormatAll_MetaData[];
#endif
		static void NewProp_bAlwaysFormatAll_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlwaysFormatAll;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlueprintFormatterSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BlueprintFormatterSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlueprintParameterPadding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BlueprintParameterPadding;
		static const UECodeGen_Private::FNamePropertyParams NewProp_UseBlueprintFormattingForTheseGraphs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UseBlueprintFormattingForTheseGraphs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UseBlueprintFormattingForTheseGraphs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTreatDelegatesAsExecutionPins_MetaData[];
#endif
		static void NewProp_bTreatDelegatesAsExecutionPins_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTreatDelegatesAsExecutionPins;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCenterBranches_MetaData[];
#endif
		static void NewProp_bCenterBranches_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCenterBranches;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumRequiredBranches_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_NumRequiredBranches;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCenterBranchesForParameters_MetaData[];
#endif
		static void NewProp_bCenterBranchesForParameters_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCenterBranchesForParameters;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumRequiredBranchesForParameters_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_NumRequiredBranchesForParameters;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VerticalPinSpacing_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VerticalPinSpacing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterVerticalPinSpacing_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ParameterVerticalPinSpacing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlueprintKnotTrackSpacing_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlueprintKnotTrackSpacing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KnotNodeDistanceThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_KnotNodeDistanceThreshold;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NonBlueprintFormatterSettings_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_NonBlueprintFormatterSettings_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NonBlueprintFormatterSettings_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_NonBlueprintFormatterSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bApplyCommentPadding_MetaData[];
#endif
		static void NewProp_bApplyCommentPadding_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyCommentPadding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAddKnotNodesToComments_MetaData[];
#endif
		static void NewProp_bAddKnotNodesToComments_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddKnotNodesToComments;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CommentNodePadding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CommentNodePadding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableVariableDefaults_MetaData[];
#endif
		static void NewProp_bEnableVariableDefaults_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableVariableDefaults;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDefaultVariableInstanceEditable_MetaData[];
#endif
		static void NewProp_bDefaultVariableInstanceEditable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDefaultVariableInstanceEditable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDefaultVariableBlueprintReadOnly_MetaData[];
#endif
		static void NewProp_bDefaultVariableBlueprintReadOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDefaultVariableBlueprintReadOnly;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDefaultVariableExposeOnSpawn_MetaData[];
#endif
		static void NewProp_bDefaultVariableExposeOnSpawn_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDefaultVariableExposeOnSpawn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDefaultVariablePrivate_MetaData[];
#endif
		static void NewProp_bDefaultVariablePrivate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDefaultVariablePrivate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDefaultVariableExposeToCinematics_MetaData[];
#endif
		static void NewProp_bDefaultVariableExposeToCinematics_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDefaultVariableExposeToCinematics;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultVariableName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultVariableName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultVariableTooltip_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_DefaultVariableTooltip;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultVariableCategory_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_DefaultVariableCategory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableFunctionDefaults_MetaData[];
#endif
		static void NewProp_bEnableFunctionDefaults_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableFunctionDefaults;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultFunctionAccessSpecifier_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultFunctionAccessSpecifier_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DefaultFunctionAccessSpecifier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDefaultFunctionPure_MetaData[];
#endif
		static void NewProp_bDefaultFunctionPure_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDefaultFunctionPure;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDefaultFunctionConst_MetaData[];
#endif
		static void NewProp_bDefaultFunctionConst_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDefaultFunctionConst;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDefaultFunctionExec_MetaData[];
#endif
		static void NewProp_bDefaultFunctionExec_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDefaultFunctionExec;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultFunctionTooltip_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_DefaultFunctionTooltip;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultFunctionKeywords_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_DefaultFunctionKeywords;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultFunctionCategory_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_DefaultFunctionCategory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultGeneratedGettersCategory_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_DefaultGeneratedGettersCategory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultGeneratedSettersCategory_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_DefaultGeneratedSettersCategory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableDoubleClickGoToDefinition_MetaData[];
#endif
		static void NewProp_bEnableDoubleClickGoToDefinition_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDoubleClickGoToDefinition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableInvisibleKnotNodes_MetaData[];
#endif
		static void NewProp_bEnableInvisibleKnotNodes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableInvisibleKnotNodes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPlayLiveCompileSound_MetaData[];
#endif
		static void NewProp_bPlayLiveCompileSound_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPlayLiveCompileSound;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AdditionalDragNodesChords_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalDragNodesChords_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AdditionalDragNodesChords;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GroupMovementChords_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupMovementChords_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GroupMovementChords;
		static const UECodeGen_Private::FStructPropertyParams NewProp_FolderBookmarks_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FolderBookmarks_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FolderBookmarks;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClickTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ClickTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHighlightBadComments_MetaData[];
#endif
		static void NewProp_bHighlightBadComments_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHighlightBadComments;
		static const UECodeGen_Private::FStrPropertyParams NewProp_BlueprintAssistDebug_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlueprintAssistDebug_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BlueprintAssistDebug;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowOverlayWhenCachingNodes_MetaData[];
#endif
		static void NewProp_bShowOverlayWhenCachingNodes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowOverlayWhenCachingNodes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RequiredNodesToShowOverlayProgressBar_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_RequiredNodesToShowOverlayProgressBar;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBASettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintAssist,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlueprintAssistSettings.h" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_bAddToolbarWidget_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/* Add the BlueprintAssist widget to the toolbar */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Add the BlueprintAssist widget to the toolbar" },
	};
#endif
	void Z_Construct_UClass_UBASettings_Statics::NewProp_bAddToolbarWidget_SetBit(void* Obj)
	{
		((UBASettings*)Obj)->bAddToolbarWidget = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_bAddToolbarWidget = { "bAddToolbarWidget", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBASettings), &Z_Construct_UClass_UBASettings_Statics::NewProp_bAddToolbarWidget_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_bAddToolbarWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_bAddToolbarWidget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_SelectedPinHighlightColor_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/* Change the color of the border around the selected pin */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Change the color of the border around the selected pin" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_SelectedPinHighlightColor = { "SelectedPinHighlightColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBASettings, SelectedPinHighlightColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_SelectedPinHighlightColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_SelectedPinHighlightColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_bEnableGlobalCommentBubblePinned_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/* Sets the 'Comment Bubble Pinned' bool for all nodes on the graph (Auto Size Comment plugin handles this value for comments) */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Sets the 'Comment Bubble Pinned' bool for all nodes on the graph (Auto Size Comment plugin handles this value for comments)" },
	};
#endif
	void Z_Construct_UClass_UBASettings_Statics::NewProp_bEnableGlobalCommentBubblePinned_SetBit(void* Obj)
	{
		((UBASettings*)Obj)->bEnableGlobalCommentBubblePinned = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_bEnableGlobalCommentBubblePinned = { "bEnableGlobalCommentBubblePinned", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBASettings), &Z_Construct_UClass_UBASettings_Statics::NewProp_bEnableGlobalCommentBubblePinned_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_bEnableGlobalCommentBubblePinned_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_bEnableGlobalCommentBubblePinned_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_bGlobalCommentBubblePinnedValue_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/* The global 'Comment Bubble Pinned' value */" },
		{ "EditCondition", "bEnableGlobalCommentBubblePinned" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "The global 'Comment Bubble Pinned' value" },
	};
#endif
	void Z_Construct_UClass_UBASettings_Statics::NewProp_bGlobalCommentBubblePinnedValue_SetBit(void* Obj)
	{
		((UBASettings*)Obj)->bGlobalCommentBubblePinnedValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_bGlobalCommentBubblePinnedValue = { "bGlobalCommentBubblePinnedValue", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBASettings), &Z_Construct_UClass_UBASettings_Statics::NewProp_bGlobalCommentBubblePinnedValue_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_bGlobalCommentBubblePinnedValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_bGlobalCommentBubblePinnedValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_bBetterWiringForNewNodes_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/* Improves the default wiring behavior for new nodes */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Improves the default wiring behavior for new nodes" },
	};
#endif
	void Z_Construct_UClass_UBASettings_Statics::NewProp_bBetterWiringForNewNodes_SetBit(void* Obj)
	{
		((UBASettings*)Obj)->bBetterWiringForNewNodes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_bBetterWiringForNewNodes = { "bBetterWiringForNewNodes", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBASettings), &Z_Construct_UClass_UBASettings_Statics::NewProp_bBetterWiringForNewNodes_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_bBetterWiringForNewNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_bBetterWiringForNewNodes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_bAutoAddParentNode_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/* Automatically add parent nodes to event nodes */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Automatically add parent nodes to event nodes" },
	};
#endif
	void Z_Construct_UClass_UBASettings_Statics::NewProp_bAutoAddParentNode_SetBit(void* Obj)
	{
		((UBASettings*)Obj)->bAutoAddParentNode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_bAutoAddParentNode = { "bAutoAddParentNode", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBASettings), &Z_Construct_UClass_UBASettings_Statics::NewProp_bAutoAddParentNode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_bAutoAddParentNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_bAutoAddParentNode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_bAutoRenameGettersAndSetters_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/* Automatically rename Function getters and setters when the Function is renamed */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Automatically rename Function getters and setters when the Function is renamed" },
	};
#endif
	void Z_Construct_UClass_UBASettings_Statics::NewProp_bAutoRenameGettersAndSetters_SetBit(void* Obj)
	{
		((UBASettings*)Obj)->bAutoRenameGettersAndSetters = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_bAutoRenameGettersAndSetters = { "bAutoRenameGettersAndSetters", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBASettings), &Z_Construct_UClass_UBASettings_Statics::NewProp_bAutoRenameGettersAndSetters_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_bAutoRenameGettersAndSetters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_bAutoRenameGettersAndSetters_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_bMergeGenerateGetterAndSetterButton_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/* Merge the generate getter and setter into one button */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Merge the generate getter and setter into one button" },
	};
#endif
	void Z_Construct_UClass_UBASettings_Statics::NewProp_bMergeGenerateGetterAndSetterButton_SetBit(void* Obj)
	{
		((UBASettings*)Obj)->bMergeGenerateGetterAndSetterButton = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_bMergeGenerateGetterAndSetterButton = { "bMergeGenerateGetterAndSetterButton", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBASettings), &Z_Construct_UClass_UBASettings_Statics::NewProp_bMergeGenerateGetterAndSetterButton_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_bMergeGenerateGetterAndSetterButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_bMergeGenerateGetterAndSetterButton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_ShiftCameraDistance_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/* Distance the viewport moves when running the Shift Camera command. Scaled by zoom distance. */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Distance the viewport moves when running the Shift Camera command. Scaled by zoom distance." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_ShiftCameraDistance = { "ShiftCameraDistance", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBASettings, ShiftCameraDistance), METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_ShiftCameraDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_ShiftCameraDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_bSlowButAccurateSizeCaching_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/* Enable more slower but more accurate node size caching */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Enable more slower but more accurate node size caching" },
	};
#endif
	void Z_Construct_UClass_UBASettings_Statics::NewProp_bSlowButAccurateSizeCaching_SetBit(void* Obj)
	{
		((UBASettings*)Obj)->bSlowButAccurateSizeCaching = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_bSlowButAccurateSizeCaching = { "bSlowButAccurateSizeCaching", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBASettings), &Z_Construct_UClass_UBASettings_Statics::NewProp_bSlowButAccurateSizeCaching_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_bSlowButAccurateSizeCaching_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_bSlowButAccurateSizeCaching_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_bSaveBlueprintAssistCacheToFile_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/* Save the node size cache to a file (located in the the plugin folder) */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Save the node size cache to a file (located in the the plugin folder)" },
	};
#endif
	void Z_Construct_UClass_UBASettings_Statics::NewProp_bSaveBlueprintAssistCacheToFile_SetBit(void* Obj)
	{
		((UBASettings*)Obj)->bSaveBlueprintAssistCacheToFile = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_bSaveBlueprintAssistCacheToFile = { "bSaveBlueprintAssistCacheToFile", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBASettings), &Z_Construct_UClass_UBASettings_Statics::NewProp_bSaveBlueprintAssistCacheToFile_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_bSaveBlueprintAssistCacheToFile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_bSaveBlueprintAssistCacheToFile_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_AutoZoomToNodeBehavior_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_AutoZoomToNodeBehavior_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/* Determines if we should auto zoom to a newly created node */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Determines if we should auto zoom to a newly created node" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_AutoZoomToNodeBehavior = { "AutoZoomToNodeBehavior", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBASettings, AutoZoomToNodeBehavior), Z_Construct_UEnum_BlueprintAssist_EBAAutoZoomToNode, METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_AutoZoomToNodeBehavior_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_AutoZoomToNodeBehavior_MetaData)) }; // 26963365
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_SupportedAssetEditors_Inner = { "SupportedAssetEditors", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_SupportedAssetEditors_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/* Supported asset editors by name */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Supported asset editors by name" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_SupportedAssetEditors = { "SupportedAssetEditors", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBASettings, SupportedAssetEditors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_SupportedAssetEditors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_SupportedAssetEditors_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_bGloballyDisableAutoFormatting_MetaData[] = {
		{ "Category", "FormattingOptions" },
		{ "Comment", "/* Enabling this is the same as setting auto formatting to Never for all graphs */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Enabling this is the same as setting auto formatting to Never for all graphs" },
	};
#endif
	void Z_Construct_UClass_UBASettings_Statics::NewProp_bGloballyDisableAutoFormatting_SetBit(void* Obj)
	{
		((UBASettings*)Obj)->bGloballyDisableAutoFormatting = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_bGloballyDisableAutoFormatting = { "bGloballyDisableAutoFormatting", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBASettings), &Z_Construct_UClass_UBASettings_Statics::NewProp_bGloballyDisableAutoFormatting_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_bGloballyDisableAutoFormatting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_bGloballyDisableAutoFormatting_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_FormattingStyle_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_FormattingStyle_MetaData[] = {
		{ "Category", "FormattingOptions" },
		{ "Comment", "/* Determines how execution nodes are positioned */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Determines how execution nodes are positioned" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_FormattingStyle = { "FormattingStyle", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBASettings, FormattingStyle), Z_Construct_UEnum_BlueprintAssist_EBANodeFormattingStyle, METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_FormattingStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_FormattingStyle_MetaData)) }; // 2046504552
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_ParameterStyle_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_ParameterStyle_MetaData[] = {
		{ "Category", "FormattingOptions" },
		{ "Comment", "/* Determines how parameters are positioned */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Determines how parameters are positioned" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_ParameterStyle = { "ParameterStyle", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBASettings, ParameterStyle), Z_Construct_UEnum_BlueprintAssist_EBAParameterFormattingStyle, METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_ParameterStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_ParameterStyle_MetaData)) }; // 3855296438
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_ExecutionWiringStyle_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_ExecutionWiringStyle_MetaData[] = {
		{ "Category", "FormattingOptions" },
		{ "Comment", "/* Determines how execution wires are created */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Determines how execution wires are created" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_ExecutionWiringStyle = { "ExecutionWiringStyle", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBASettings, ExecutionWiringStyle), Z_Construct_UEnum_BlueprintAssist_EBAWiringStyle, METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_ExecutionWiringStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_ExecutionWiringStyle_MetaData)) }; // 3392189654
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_ParameterWiringStyle_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_ParameterWiringStyle_MetaData[] = {
		{ "Category", "FormattingOptions" },
		{ "Comment", "/* Determines how parameter wires are created */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Determines how parameter wires are created" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_ParameterWiringStyle = { "ParameterWiringStyle", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBASettings, ParameterWiringStyle), Z_Construct_UEnum_BlueprintAssist_EBAWiringStyle, METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_ParameterWiringStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_ParameterWiringStyle_MetaData)) }; // 3392189654
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_bEnableFasterFormatting_MetaData[] = {
		{ "Category", "FormattingOptions" },
		{ "Comment", "/* Faster formatting will only format chains of nodes have been moved or had connections changed. Greatly increases speed of the format all command. */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Faster formatting will only format chains of nodes have been moved or had connections changed. Greatly increases speed of the format all command." },
	};
#endif
	void Z_Construct_UClass_UBASettings_Statics::NewProp_bEnableFasterFormatting_SetBit(void* Obj)
	{
		((UBASettings*)Obj)->bEnableFasterFormatting = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_bEnableFasterFormatting = { "bEnableFasterFormatting", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBASettings), &Z_Construct_UClass_UBASettings_Statics::NewProp_bEnableFasterFormatting_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_bEnableFasterFormatting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_bEnableFasterFormatting_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_bUseKnotNodePool_MetaData[] = {
		{ "Category", "FormattingOptions" },
		{ "Comment", "/* Reuse knot nodes instead of creating new ones every time */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Reuse knot nodes instead of creating new ones every time" },
	};
#endif
	void Z_Construct_UClass_UBASettings_Statics::NewProp_bUseKnotNodePool_SetBit(void* Obj)
	{
		((UBASettings*)Obj)->bUseKnotNodePool = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_bUseKnotNodePool = { "bUseKnotNodePool", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBASettings), &Z_Construct_UClass_UBASettings_Statics::NewProp_bUseKnotNodePool_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_bUseKnotNodePool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_bUseKnotNodePool_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_bLimitHelixingHeight_MetaData[] = {
		{ "Category", "FormattingOptions" },
		{ "Comment", "/* Whether to use HelixingHeightMax and SingleNodeMaxHeight */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Whether to use HelixingHeightMax and SingleNodeMaxHeight" },
	};
#endif
	void Z_Construct_UClass_UBASettings_Statics::NewProp_bLimitHelixingHeight_SetBit(void* Obj)
	{
		((UBASettings*)Obj)->bLimitHelixingHeight = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_bLimitHelixingHeight = { "bLimitHelixingHeight", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBASettings), &Z_Construct_UClass_UBASettings_Statics::NewProp_bLimitHelixingHeight_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_bLimitHelixingHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_bLimitHelixingHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_HelixingHeightMax_MetaData[] = {
		{ "Category", "FormattingOptions" },
		{ "Comment", "/* Helixing is disabled if the total height of the parameter nodes is larger than this value */" },
		{ "EditCondition", "bLimitHelixingHeight" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Helixing is disabled if the total height of the parameter nodes is larger than this value" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_HelixingHeightMax = { "HelixingHeightMax", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBASettings, HelixingHeightMax), METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_HelixingHeightMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_HelixingHeightMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_SingleNodeMaxHeight_MetaData[] = {
		{ "Category", "FormattingOptions" },
		{ "Comment", "/* Helixing is disabled if a single node is taller than this value */" },
		{ "EditCondition", "bLimitHelixingHeight" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Helixing is disabled if a single node is taller than this value" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_SingleNodeMaxHeight = { "SingleNodeMaxHeight", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBASettings, SingleNodeMaxHeight), METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_SingleNodeMaxHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_SingleNodeMaxHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_bDetectNewNodesAndCacheNodeSizes_MetaData[] = {
		{ "Category", "FormattingOptions" },
		{ "Comment", "/* Cache node sizes of any newly detected nodes. Checks upon opening a blueprint or when a new node is added to the graph. */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Cache node sizes of any newly detected nodes. Checks upon opening a blueprint or when a new node is added to the graph." },
	};
#endif
	void Z_Construct_UClass_UBASettings_Statics::NewProp_bDetectNewNodesAndCacheNodeSizes_SetBit(void* Obj)
	{
		((UBASettings*)Obj)->bDetectNewNodesAndCacheNodeSizes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_bDetectNewNodesAndCacheNodeSizes = { "bDetectNewNodesAndCacheNodeSizes", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBASettings), &Z_Construct_UClass_UBASettings_Statics::NewProp_bDetectNewNodesAndCacheNodeSizes_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_bDetectNewNodesAndCacheNodeSizes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_bDetectNewNodesAndCacheNodeSizes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_bRefreshNodeSizeBeforeFormatting_MetaData[] = {
		{ "Category", "FormattingOptions" },
		{ "Comment", "/* Refresh node sizes before formatting */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Refresh node sizes before formatting" },
	};
#endif
	void Z_Construct_UClass_UBASettings_Statics::NewProp_bRefreshNodeSizeBeforeFormatting_SetBit(void* Obj)
	{
		((UBASettings*)Obj)->bRefreshNodeSizeBeforeFormatting = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_bRefreshNodeSizeBeforeFormatting = { "bRefreshNodeSizeBeforeFormatting", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBASettings), &Z_Construct_UClass_UBASettings_Statics::NewProp_bRefreshNodeSizeBeforeFormatting_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_bRefreshNodeSizeBeforeFormatting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_bRefreshNodeSizeBeforeFormatting_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_bCreateKnotNodes_MetaData[] = {
		{ "Category", "FormattingOptions" },
		{ "Comment", "/* Create knot nodes */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Create knot nodes" },
	};
#endif
	void Z_Construct_UClass_UBASettings_Statics::NewProp_bCreateKnotNodes_SetBit(void* Obj)
	{
		((UBASettings*)Obj)->bCreateKnotNodes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_bCreateKnotNodes = { "bCreateKnotNodes", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBASettings), &Z_Construct_UClass_UBASettings_Statics::NewProp_bCreateKnotNodes_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_bCreateKnotNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_bCreateKnotNodes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_bExpandNodesAheadOfParameters_MetaData[] = {
		{ "Category", "FormattingOptions" },
		{ "Comment", "/* Add spacing to nodes so they are always in front of their input parameters */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Add spacing to nodes so they are always in front of their input parameters" },
	};
#endif
	void Z_Construct_UClass_UBASettings_Statics::NewProp_bExpandNodesAheadOfParameters_SetBit(void* Obj)
	{
		((UBASettings*)Obj)->bExpandNodesAheadOfParameters = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_bExpandNodesAheadOfParameters = { "bExpandNodesAheadOfParameters", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBASettings), &Z_Construct_UClass_UBASettings_Statics::NewProp_bExpandNodesAheadOfParameters_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_bExpandNodesAheadOfParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_bExpandNodesAheadOfParameters_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_bExpandNodesByHeight_MetaData[] = {
		{ "Category", "FormattingOptions" },
		{ "Comment", "/* Add spacing to nodes which have many connections, fixing hard to read wires */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Add spacing to nodes which have many connections, fixing hard to read wires" },
	};
#endif
	void Z_Construct_UClass_UBASettings_Statics::NewProp_bExpandNodesByHeight_SetBit(void* Obj)
	{
		((UBASettings*)Obj)->bExpandNodesByHeight = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_bExpandNodesByHeight = { "bExpandNodesByHeight", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBASettings), &Z_Construct_UClass_UBASettings_Statics::NewProp_bExpandNodesByHeight_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_bExpandNodesByHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_bExpandNodesByHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_bExpandParametersByHeight_MetaData[] = {
		{ "Category", "FormattingOptions" },
		{ "Comment", "/* Add spacing to parameter nodes which have many connections, fixing hard to read wires */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Add spacing to parameter nodes which have many connections, fixing hard to read wires" },
	};
#endif
	void Z_Construct_UClass_UBASettings_Statics::NewProp_bExpandParametersByHeight_SetBit(void* Obj)
	{
		((UBASettings*)Obj)->bExpandParametersByHeight = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_bExpandParametersByHeight = { "bExpandParametersByHeight", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBASettings), &Z_Construct_UClass_UBASettings_Statics::NewProp_bExpandParametersByHeight_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_bExpandParametersByHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_bExpandParametersByHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_bSnapToGrid_MetaData[] = {
		{ "Category", "FormattingOptions" },
		{ "Comment", "/* Snap nodes to grid (in the x-axis) after formatting */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Snap nodes to grid (in the x-axis) after formatting" },
	};
#endif
	void Z_Construct_UClass_UBASettings_Statics::NewProp_bSnapToGrid_SetBit(void* Obj)
	{
		((UBASettings*)Obj)->bSnapToGrid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_bSnapToGrid = { "bSnapToGrid", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBASettings), &Z_Construct_UClass_UBASettings_Statics::NewProp_bSnapToGrid_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_bSnapToGrid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_bSnapToGrid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_bAlignExecNodesTo8x8Grid_MetaData[] = {
		{ "Category", "FormattingOptions" },
		{ "Comment", "/* Align execution nodes to the 8x8 grid when formatting */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Align execution nodes to the 8x8 grid when formatting" },
	};
#endif
	void Z_Construct_UClass_UBASettings_Statics::NewProp_bAlignExecNodesTo8x8Grid_SetBit(void* Obj)
	{
		((UBASettings*)Obj)->bAlignExecNodesTo8x8Grid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_bAlignExecNodesTo8x8Grid = { "bAlignExecNodesTo8x8Grid", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBASettings), &Z_Construct_UClass_UBASettings_Statics::NewProp_bAlignExecNodesTo8x8Grid_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_bAlignExecNodesTo8x8Grid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_bAlignExecNodesTo8x8Grid_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_FormatAllStyle_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_FormatAllStyle_MetaData[] = {
		{ "Category", "FormatAll" },
		{ "Comment", "/* Determines how nodes are positioned into columns when running formatting all nodes */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Determines how nodes are positioned into columns when running formatting all nodes" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_FormatAllStyle = { "FormatAllStyle", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBASettings, FormatAllStyle), Z_Construct_UEnum_BlueprintAssist_EBAFormatAllStyle, METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_FormatAllStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_FormatAllStyle_MetaData)) }; // 3530000995
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_FormatAllHorizontalAlignment_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_FormatAllHorizontalAlignment_MetaData[] = {
		{ "Category", "FormatAll" },
		{ "Comment", "/* Determines how nodes are aligned horizontally */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Determines how nodes are aligned horizontally" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_FormatAllHorizontalAlignment = { "FormatAllHorizontalAlignment", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBASettings, FormatAllHorizontalAlignment), Z_Construct_UEnum_BlueprintAssist_EBAFormatAllHorizontalAlignment, METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_FormatAllHorizontalAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_FormatAllHorizontalAlignment_MetaData)) }; // 3407043606
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_FormatAllPadding_MetaData[] = {
		{ "Category", "FormatAll" },
		{ "Comment", "/* x values defines padding between columns, y value defines horizontal padding between node trees */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "x values defines padding between columns, y value defines horizontal padding between node trees" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_FormatAllPadding = { "FormatAllPadding", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBASettings, FormatAllPadding), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_FormatAllPadding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_FormatAllPadding_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_bAutoPositionEventNodes_MetaData[] = {
		{ "Category", "FormatAll" },
		{ "Comment", "/* Call the format all function when a new event node is added to the graph */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Call the format all function when a new event node is added to the graph" },
	};
#endif
	void Z_Construct_UClass_UBASettings_Statics::NewProp_bAutoPositionEventNodes_SetBit(void* Obj)
	{
		((UBASettings*)Obj)->bAutoPositionEventNodes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_bAutoPositionEventNodes = { "bAutoPositionEventNodes", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBASettings), &Z_Construct_UClass_UBASettings_Statics::NewProp_bAutoPositionEventNodes_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_bAutoPositionEventNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_bAutoPositionEventNodes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_bAlwaysFormatAll_MetaData[] = {
		{ "Category", "FormatAll" },
		{ "Comment", "/* Call the format all function when ANY new node is added to the graph. Useful for when the 'UseColumnsForFormatAll' setting is on. */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Call the format all function when ANY new node is added to the graph. Useful for when the 'UseColumnsForFormatAll' setting is on." },
	};
#endif
	void Z_Construct_UClass_UBASettings_Statics::NewProp_bAlwaysFormatAll_SetBit(void* Obj)
	{
		((UBASettings*)Obj)->bAlwaysFormatAll = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_bAlwaysFormatAll = { "bAlwaysFormatAll", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBASettings), &Z_Construct_UClass_UBASettings_Statics::NewProp_bAlwaysFormatAll_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_bAlwaysFormatAll_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_bAlwaysFormatAll_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_BlueprintFormatterSettings_MetaData[] = {
		{ "Category", "BlueprintFormatting" },
		{ "Comment", "////////////////////////////////////////////////////////////\n// Blueprint formatting\n////////////////////////////////////////////////////////////\n" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Blueprint formatting" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_BlueprintFormatterSettings = { "BlueprintFormatterSettings", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBASettings, BlueprintFormatterSettings), Z_Construct_UScriptStruct_FBAFormatterSettings, METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_BlueprintFormatterSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_BlueprintFormatterSettings_MetaData)) }; // 1511644832
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_BlueprintParameterPadding_MetaData[] = {
		{ "Category", "BlueprintFormatting" },
		{ "Comment", "/* Padding used between parameter nodes */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Padding used between parameter nodes" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_BlueprintParameterPadding = { "BlueprintParameterPadding", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBASettings, BlueprintParameterPadding), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_BlueprintParameterPadding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_BlueprintParameterPadding_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_UseBlueprintFormattingForTheseGraphs_Inner = { "UseBlueprintFormattingForTheseGraphs", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_UseBlueprintFormattingForTheseGraphs_MetaData[] = {
		{ "Category", "BlueprintFormatting" },
		{ "Comment", "/* Blueprint formatting will be used for these types of graphs (you can see the type of a graph with the PrintGraphInfo command, default: unbound) */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Blueprint formatting will be used for these types of graphs (you can see the type of a graph with the PrintGraphInfo command, default: unbound)" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_UseBlueprintFormattingForTheseGraphs = { "UseBlueprintFormattingForTheseGraphs", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBASettings, UseBlueprintFormattingForTheseGraphs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_UseBlueprintFormattingForTheseGraphs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_UseBlueprintFormattingForTheseGraphs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_bTreatDelegatesAsExecutionPins_MetaData[] = {
		{ "Category", "BlueprintFormatting" },
		{ "Comment", "/* When formatting treat delegate pins as execution pins, recommended to turn this option off and use the 'CreateEvent' node */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "When formatting treat delegate pins as execution pins, recommended to turn this option off and use the 'CreateEvent' node" },
	};
#endif
	void Z_Construct_UClass_UBASettings_Statics::NewProp_bTreatDelegatesAsExecutionPins_SetBit(void* Obj)
	{
		((UBASettings*)Obj)->bTreatDelegatesAsExecutionPins = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_bTreatDelegatesAsExecutionPins = { "bTreatDelegatesAsExecutionPins", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBASettings), &Z_Construct_UClass_UBASettings_Statics::NewProp_bTreatDelegatesAsExecutionPins_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_bTreatDelegatesAsExecutionPins_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_bTreatDelegatesAsExecutionPins_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_bCenterBranches_MetaData[] = {
		{ "Category", "BlueprintFormatting" },
		{ "Comment", "/* Center node execution branches (Default: center nodes with 3 or more branches) */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Center node execution branches (Default: center nodes with 3 or more branches)" },
	};
#endif
	void Z_Construct_UClass_UBASettings_Statics::NewProp_bCenterBranches_SetBit(void* Obj)
	{
		((UBASettings*)Obj)->bCenterBranches = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_bCenterBranches = { "bCenterBranches", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBASettings), &Z_Construct_UClass_UBASettings_Statics::NewProp_bCenterBranches_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_bCenterBranches_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_bCenterBranches_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_NumRequiredBranches_MetaData[] = {
		{ "Category", "BlueprintFormatting" },
		{ "Comment", "/* Only center branches if we have this (or more) number of branches */" },
		{ "EditCondition", "bCenterBranches" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Only center branches if we have this (or more) number of branches" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_NumRequiredBranches = { "NumRequiredBranches", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBASettings, NumRequiredBranches), METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_NumRequiredBranches_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_NumRequiredBranches_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_bCenterBranchesForParameters_MetaData[] = {
		{ "Category", "BlueprintFormatting" },
		{ "Comment", "/* Center parameters nodes with multiple links */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Center parameters nodes with multiple links" },
	};
#endif
	void Z_Construct_UClass_UBASettings_Statics::NewProp_bCenterBranchesForParameters_SetBit(void* Obj)
	{
		((UBASettings*)Obj)->bCenterBranchesForParameters = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_bCenterBranchesForParameters = { "bCenterBranchesForParameters", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBASettings), &Z_Construct_UClass_UBASettings_Statics::NewProp_bCenterBranchesForParameters_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_bCenterBranchesForParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_bCenterBranchesForParameters_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_NumRequiredBranchesForParameters_MetaData[] = {
		{ "Category", "BlueprintFormatting" },
		{ "Comment", "/* Only center parameters which have this many (or more) number of links */" },
		{ "EditCondition", "bCenterBranchesForParameters" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Only center parameters which have this many (or more) number of links" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_NumRequiredBranchesForParameters = { "NumRequiredBranchesForParameters", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBASettings, NumRequiredBranchesForParameters), METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_NumRequiredBranchesForParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_NumRequiredBranchesForParameters_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_VerticalPinSpacing_MetaData[] = {
		{ "Category", "BlueprintFormatting" },
		{ "Comment", "/* Vertical spacing from the last linked pin */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Vertical spacing from the last linked pin" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_VerticalPinSpacing = { "VerticalPinSpacing", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBASettings, VerticalPinSpacing), METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_VerticalPinSpacing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_VerticalPinSpacing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_ParameterVerticalPinSpacing_MetaData[] = {
		{ "Category", "BlueprintFormatting" },
		{ "Comment", "/* Vertical spacing from the last linked pin for parameters */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Vertical spacing from the last linked pin for parameters" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_ParameterVerticalPinSpacing = { "ParameterVerticalPinSpacing", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBASettings, ParameterVerticalPinSpacing), METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_ParameterVerticalPinSpacing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_ParameterVerticalPinSpacing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_BlueprintKnotTrackSpacing_MetaData[] = {
		{ "Category", "BlueprintFormatting" },
		{ "Comment", "/* Spacing used between wire tracks */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Spacing used between wire tracks" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_BlueprintKnotTrackSpacing = { "BlueprintKnotTrackSpacing", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBASettings, BlueprintKnotTrackSpacing), METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_BlueprintKnotTrackSpacing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_BlueprintKnotTrackSpacing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_KnotNodeDistanceThreshold_MetaData[] = {
		{ "Category", "BlueprintFormatting" },
		{ "Comment", "/* The width between pins required for a knot node to be created */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "The width between pins required for a knot node to be created" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_KnotNodeDistanceThreshold = { "KnotNodeDistanceThreshold", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBASettings, KnotNodeDistanceThreshold), METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_KnotNodeDistanceThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_KnotNodeDistanceThreshold_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_NonBlueprintFormatterSettings_ValueProp = { "NonBlueprintFormatterSettings", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FBAFormatterSettings, METADATA_PARAMS(nullptr, 0) }; // 1511644832
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_NonBlueprintFormatterSettings_Key_KeyProp = { "NonBlueprintFormatterSettings_Key", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_NonBlueprintFormatterSettings_MetaData[] = {
		{ "Category", "OtherGraphs" },
		{ "Comment", "////////////////////////////////////////////////////////////\n// Other Graphs\n////////////////////////////////////////////////////////////\n" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Other Graphs" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_NonBlueprintFormatterSettings = { "NonBlueprintFormatterSettings", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBASettings, NonBlueprintFormatterSettings), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_NonBlueprintFormatterSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_NonBlueprintFormatterSettings_MetaData)) }; // 1511644832
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_bApplyCommentPadding_MetaData[] = {
		{ "Category", "CommentSettings" },
		{ "Comment", "/* Apply comment padding when formatting */" },
		{ "DevelopmentStatus", "Experimental" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Apply comment padding when formatting" },
	};
#endif
	void Z_Construct_UClass_UBASettings_Statics::NewProp_bApplyCommentPadding_SetBit(void* Obj)
	{
		((UBASettings*)Obj)->bApplyCommentPadding = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_bApplyCommentPadding = { "bApplyCommentPadding", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBASettings), &Z_Construct_UClass_UBASettings_Statics::NewProp_bApplyCommentPadding_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_bApplyCommentPadding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_bApplyCommentPadding_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_bAddKnotNodesToComments_MetaData[] = {
		{ "Category", "CommentSettings" },
		{ "Comment", "/* Add knot nodes to comments after formatting */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Add knot nodes to comments after formatting" },
	};
#endif
	void Z_Construct_UClass_UBASettings_Statics::NewProp_bAddKnotNodesToComments_SetBit(void* Obj)
	{
		((UBASettings*)Obj)->bAddKnotNodesToComments = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_bAddKnotNodesToComments = { "bAddKnotNodesToComments", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBASettings), &Z_Construct_UClass_UBASettings_Statics::NewProp_bAddKnotNodesToComments_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_bAddKnotNodesToComments_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_bAddKnotNodesToComments_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_CommentNodePadding_MetaData[] = {
		{ "Category", "CommentSettings" },
		{ "Comment", "/* Padding around the comment box. Make sure this is the same as in the AutoSizeComments setting */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Padding around the comment box. Make sure this is the same as in the AutoSizeComments setting" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_CommentNodePadding = { "CommentNodePadding", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBASettings, CommentNodePadding), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_CommentNodePadding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_CommentNodePadding_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_bEnableVariableDefaults_MetaData[] = {
		{ "Category", "NewVariableDefaults" },
		{ "Comment", "/* Enable Variable defaults */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Enable Variable defaults" },
	};
#endif
	void Z_Construct_UClass_UBASettings_Statics::NewProp_bEnableVariableDefaults_SetBit(void* Obj)
	{
		((UBASettings*)Obj)->bEnableVariableDefaults = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_bEnableVariableDefaults = { "bEnableVariableDefaults", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBASettings), &Z_Construct_UClass_UBASettings_Statics::NewProp_bEnableVariableDefaults_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_bEnableVariableDefaults_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_bEnableVariableDefaults_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_bDefaultVariableInstanceEditable_MetaData[] = {
		{ "Category", "NewVariableDefaults" },
		{ "Comment", "/* Variable default Instance Editable */" },
		{ "EditCondition", "bEnableVariableDefaults" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Variable default Instance Editable" },
	};
#endif
	void Z_Construct_UClass_UBASettings_Statics::NewProp_bDefaultVariableInstanceEditable_SetBit(void* Obj)
	{
		((UBASettings*)Obj)->bDefaultVariableInstanceEditable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_bDefaultVariableInstanceEditable = { "bDefaultVariableInstanceEditable", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBASettings), &Z_Construct_UClass_UBASettings_Statics::NewProp_bDefaultVariableInstanceEditable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_bDefaultVariableInstanceEditable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_bDefaultVariableInstanceEditable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_bDefaultVariableBlueprintReadOnly_MetaData[] = {
		{ "Category", "NewVariableDefaults" },
		{ "Comment", "/* Variable default Blueprint Read Only */" },
		{ "EditCondition", "bEnableVariableDefaults" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Variable default Blueprint Read Only" },
	};
#endif
	void Z_Construct_UClass_UBASettings_Statics::NewProp_bDefaultVariableBlueprintReadOnly_SetBit(void* Obj)
	{
		((UBASettings*)Obj)->bDefaultVariableBlueprintReadOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_bDefaultVariableBlueprintReadOnly = { "bDefaultVariableBlueprintReadOnly", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBASettings), &Z_Construct_UClass_UBASettings_Statics::NewProp_bDefaultVariableBlueprintReadOnly_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_bDefaultVariableBlueprintReadOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_bDefaultVariableBlueprintReadOnly_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_bDefaultVariableExposeOnSpawn_MetaData[] = {
		{ "Category", "NewVariableDefaults" },
		{ "Comment", "/* Variable default Expose on Spawn */" },
		{ "EditCondition", "bEnableVariableDefaults" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Variable default Expose on Spawn" },
	};
#endif
	void Z_Construct_UClass_UBASettings_Statics::NewProp_bDefaultVariableExposeOnSpawn_SetBit(void* Obj)
	{
		((UBASettings*)Obj)->bDefaultVariableExposeOnSpawn = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_bDefaultVariableExposeOnSpawn = { "bDefaultVariableExposeOnSpawn", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBASettings), &Z_Construct_UClass_UBASettings_Statics::NewProp_bDefaultVariableExposeOnSpawn_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_bDefaultVariableExposeOnSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_bDefaultVariableExposeOnSpawn_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_bDefaultVariablePrivate_MetaData[] = {
		{ "Category", "NewVariableDefaults" },
		{ "Comment", "/* Variable default Private */" },
		{ "EditCondition", "bEnableVariableDefaults" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Variable default Private" },
	};
#endif
	void Z_Construct_UClass_UBASettings_Statics::NewProp_bDefaultVariablePrivate_SetBit(void* Obj)
	{
		((UBASettings*)Obj)->bDefaultVariablePrivate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_bDefaultVariablePrivate = { "bDefaultVariablePrivate", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBASettings), &Z_Construct_UClass_UBASettings_Statics::NewProp_bDefaultVariablePrivate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_bDefaultVariablePrivate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_bDefaultVariablePrivate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_bDefaultVariableExposeToCinematics_MetaData[] = {
		{ "Category", "NewVariableDefaults" },
		{ "Comment", "/* Variable default Expose to Cinematics */" },
		{ "EditCondition", "bEnableVariableDefaults" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Variable default Expose to Cinematics" },
	};
#endif
	void Z_Construct_UClass_UBASettings_Statics::NewProp_bDefaultVariableExposeToCinematics_SetBit(void* Obj)
	{
		((UBASettings*)Obj)->bDefaultVariableExposeToCinematics = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_bDefaultVariableExposeToCinematics = { "bDefaultVariableExposeToCinematics", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBASettings), &Z_Construct_UClass_UBASettings_Statics::NewProp_bDefaultVariableExposeToCinematics_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_bDefaultVariableExposeToCinematics_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_bDefaultVariableExposeToCinematics_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_DefaultVariableName_MetaData[] = {
		{ "Category", "NewVariableDefaults" },
		{ "Comment", "/* Variable default name */" },
		{ "EditCondition", "bEnableVariableDefaults" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Variable default name" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_DefaultVariableName = { "DefaultVariableName", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBASettings, DefaultVariableName), METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_DefaultVariableName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_DefaultVariableName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_DefaultVariableTooltip_MetaData[] = {
		{ "Category", "NewVariableDefaults" },
		{ "Comment", "/* Variable default Tooltip */" },
		{ "EditCondition", "bEnableVariableDefaults" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Variable default Tooltip" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_DefaultVariableTooltip = { "DefaultVariableTooltip", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBASettings, DefaultVariableTooltip), METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_DefaultVariableTooltip_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_DefaultVariableTooltip_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_DefaultVariableCategory_MetaData[] = {
		{ "Category", "NewVariableDefaults" },
		{ "Comment", "/* Variable default Category */" },
		{ "EditCondition", "bEnableVariableDefaults" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Variable default Category" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_DefaultVariableCategory = { "DefaultVariableCategory", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBASettings, DefaultVariableCategory), METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_DefaultVariableCategory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_DefaultVariableCategory_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_bEnableFunctionDefaults_MetaData[] = {
		{ "Category", "NewFunctionDefaults" },
		{ "Comment", "/* Enable Function defaults */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Enable Function defaults" },
	};
#endif
	void Z_Construct_UClass_UBASettings_Statics::NewProp_bEnableFunctionDefaults_SetBit(void* Obj)
	{
		((UBASettings*)Obj)->bEnableFunctionDefaults = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_bEnableFunctionDefaults = { "bEnableFunctionDefaults", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBASettings), &Z_Construct_UClass_UBASettings_Statics::NewProp_bEnableFunctionDefaults_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_bEnableFunctionDefaults_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_bEnableFunctionDefaults_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_DefaultFunctionAccessSpecifier_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_DefaultFunctionAccessSpecifier_MetaData[] = {
		{ "Category", "NewFunctionDefaults" },
		{ "Comment", "/* Function default AccessSpecifier */" },
		{ "EditCondition", "bEnableFunctionDefaults" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Function default AccessSpecifier" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_DefaultFunctionAccessSpecifier = { "DefaultFunctionAccessSpecifier", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBASettings, DefaultFunctionAccessSpecifier), Z_Construct_UEnum_BlueprintAssist_EBAFunctionAccessSpecifier, METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_DefaultFunctionAccessSpecifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_DefaultFunctionAccessSpecifier_MetaData)) }; // 4199308162
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_bDefaultFunctionPure_MetaData[] = {
		{ "Category", "NewFunctionDefaults" },
		{ "Comment", "/* Function default Pure */" },
		{ "EditCondition", "bEnableFunctionDefaults" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Function default Pure" },
	};
#endif
	void Z_Construct_UClass_UBASettings_Statics::NewProp_bDefaultFunctionPure_SetBit(void* Obj)
	{
		((UBASettings*)Obj)->bDefaultFunctionPure = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_bDefaultFunctionPure = { "bDefaultFunctionPure", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBASettings), &Z_Construct_UClass_UBASettings_Statics::NewProp_bDefaultFunctionPure_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_bDefaultFunctionPure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_bDefaultFunctionPure_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_bDefaultFunctionConst_MetaData[] = {
		{ "Category", "NewFunctionDefaults" },
		{ "Comment", "/* Function default Const */" },
		{ "EditCondition", "bEnableFunctionDefaults" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Function default Const" },
	};
#endif
	void Z_Construct_UClass_UBASettings_Statics::NewProp_bDefaultFunctionConst_SetBit(void* Obj)
	{
		((UBASettings*)Obj)->bDefaultFunctionConst = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_bDefaultFunctionConst = { "bDefaultFunctionConst", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBASettings), &Z_Construct_UClass_UBASettings_Statics::NewProp_bDefaultFunctionConst_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_bDefaultFunctionConst_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_bDefaultFunctionConst_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_bDefaultFunctionExec_MetaData[] = {
		{ "Category", "NewFunctionDefaults" },
		{ "Comment", "/* Function default Exec */" },
		{ "EditCondition", "bEnableFunctionDefaults" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Function default Exec" },
	};
#endif
	void Z_Construct_UClass_UBASettings_Statics::NewProp_bDefaultFunctionExec_SetBit(void* Obj)
	{
		((UBASettings*)Obj)->bDefaultFunctionExec = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_bDefaultFunctionExec = { "bDefaultFunctionExec", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBASettings), &Z_Construct_UClass_UBASettings_Statics::NewProp_bDefaultFunctionExec_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_bDefaultFunctionExec_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_bDefaultFunctionExec_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_DefaultFunctionTooltip_MetaData[] = {
		{ "Category", "NewFunctionDefaults" },
		{ "Comment", "/* Function default Tooltip */" },
		{ "EditCondition", "bEnableFunctionDefaults" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Function default Tooltip" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_DefaultFunctionTooltip = { "DefaultFunctionTooltip", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBASettings, DefaultFunctionTooltip), METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_DefaultFunctionTooltip_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_DefaultFunctionTooltip_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_DefaultFunctionKeywords_MetaData[] = {
		{ "Category", "NewFunctionDefaults" },
		{ "Comment", "/* Function default Keywords */" },
		{ "EditCondition", "bEnableFunctionDefaults" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Function default Keywords" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_DefaultFunctionKeywords = { "DefaultFunctionKeywords", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBASettings, DefaultFunctionKeywords), METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_DefaultFunctionKeywords_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_DefaultFunctionKeywords_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_DefaultFunctionCategory_MetaData[] = {
		{ "Category", "NewFunctionDefaults" },
		{ "Comment", "/* Function default Category */" },
		{ "EditCondition", "bEnableFunctionDefaults" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Function default Category" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_DefaultFunctionCategory = { "DefaultFunctionCategory", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBASettings, DefaultFunctionCategory), METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_DefaultFunctionCategory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_DefaultFunctionCategory_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_DefaultGeneratedGettersCategory_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "/* What category to assign to generated getter functions. Overrides DefaultFunctionCategory. */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "What category to assign to generated getter functions. Overrides DefaultFunctionCategory." },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_DefaultGeneratedGettersCategory = { "DefaultGeneratedGettersCategory", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBASettings, DefaultGeneratedGettersCategory), METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_DefaultGeneratedGettersCategory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_DefaultGeneratedGettersCategory_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_DefaultGeneratedSettersCategory_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "/* What category to assign to generated setter functions. Overrides DefaultFunctionCategory. */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "What category to assign to generated setter functions. Overrides DefaultFunctionCategory." },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_DefaultGeneratedSettersCategory = { "DefaultGeneratedSettersCategory", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBASettings, DefaultGeneratedSettersCategory), METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_DefaultGeneratedSettersCategory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_DefaultGeneratedSettersCategory_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_bEnableDoubleClickGoToDefinition_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "/* Double click on a node to go to definition. Currently only implemented for Cast blueprint node. */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Double click on a node to go to definition. Currently only implemented for Cast blueprint node." },
	};
#endif
	void Z_Construct_UClass_UBASettings_Statics::NewProp_bEnableDoubleClickGoToDefinition_SetBit(void* Obj)
	{
		((UBASettings*)Obj)->bEnableDoubleClickGoToDefinition = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_bEnableDoubleClickGoToDefinition = { "bEnableDoubleClickGoToDefinition", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBASettings), &Z_Construct_UClass_UBASettings_Statics::NewProp_bEnableDoubleClickGoToDefinition_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_bEnableDoubleClickGoToDefinition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_bEnableDoubleClickGoToDefinition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_bEnableInvisibleKnotNodes_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "/* Enable invisible knot nodes (re-open any open graphs) */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Enable invisible knot nodes (re-open any open graphs)" },
	};
#endif
	void Z_Construct_UClass_UBASettings_Statics::NewProp_bEnableInvisibleKnotNodes_SetBit(void* Obj)
	{
		((UBASettings*)Obj)->bEnableInvisibleKnotNodes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_bEnableInvisibleKnotNodes = { "bEnableInvisibleKnotNodes", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBASettings), &Z_Construct_UClass_UBASettings_Statics::NewProp_bEnableInvisibleKnotNodes_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_bEnableInvisibleKnotNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_bEnableInvisibleKnotNodes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_bPlayLiveCompileSound_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "/* Play compile sound on *successful* live compile (may need to restart editor) */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Play compile sound on *successful* live compile (may need to restart editor)" },
	};
#endif
	void Z_Construct_UClass_UBASettings_Statics::NewProp_bPlayLiveCompileSound_SetBit(void* Obj)
	{
		((UBASettings*)Obj)->bPlayLiveCompileSound = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_bPlayLiveCompileSound = { "bPlayLiveCompileSound", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBASettings), &Z_Construct_UClass_UBASettings_Statics::NewProp_bPlayLiveCompileSound_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_bPlayLiveCompileSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_bPlayLiveCompileSound_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_AdditionalDragNodesChords_Inner = { "AdditionalDragNodesChords", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FInputChord, METADATA_PARAMS(nullptr, 0) }; // 3880295606
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_AdditionalDragNodesChords_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "/** Extra input chords to for dragging selected nodes with cursor (same as left-click-dragging) */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Extra input chords to for dragging selected nodes with cursor (same as left-click-dragging)" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_AdditionalDragNodesChords = { "AdditionalDragNodesChords", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBASettings, AdditionalDragNodesChords), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_AdditionalDragNodesChords_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_AdditionalDragNodesChords_MetaData)) }; // 3880295606
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_GroupMovementChords_Inner = { "GroupMovementChords", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FInputChord, METADATA_PARAMS(nullptr, 0) }; // 3880295606
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_GroupMovementChords_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "/** Input chords for group dragging (move all linked nodes) */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Input chords for group dragging (move all linked nodes)" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_GroupMovementChords = { "GroupMovementChords", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBASettings, GroupMovementChords), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_GroupMovementChords_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_GroupMovementChords_MetaData)) }; // 3880295606
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_FolderBookmarks_Inner = { "FolderBookmarks", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) }; // 2615338182
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_FolderBookmarks_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "/** Input for folder bookmarks */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Input for folder bookmarks" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_FolderBookmarks = { "FolderBookmarks", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBASettings, FolderBookmarks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_FolderBookmarks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_FolderBookmarks_MetaData)) }; // 2615338182
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_ClickTime_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "/** Duration to differentiate between a click and a drag */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Duration to differentiate between a click and a drag" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_ClickTime = { "ClickTime", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBASettings, ClickTime), METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_ClickTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_ClickTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_bHighlightBadComments_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "/** Draw a red border around bad comment nodes after formatting */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Draw a red border around bad comment nodes after formatting" },
	};
#endif
	void Z_Construct_UClass_UBASettings_Statics::NewProp_bHighlightBadComments_SetBit(void* Obj)
	{
		((UBASettings*)Obj)->bHighlightBadComments = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_bHighlightBadComments = { "bHighlightBadComments", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBASettings), &Z_Construct_UClass_UBASettings_Statics::NewProp_bHighlightBadComments_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_bHighlightBadComments_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_bHighlightBadComments_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_BlueprintAssistDebug_Inner = { "BlueprintAssistDebug", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_BlueprintAssistDebug_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "/** Ignore this (setting for custom debugging) */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Ignore this (setting for custom debugging)" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_BlueprintAssistDebug = { "BlueprintAssistDebug", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBASettings, BlueprintAssistDebug), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_BlueprintAssistDebug_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_BlueprintAssistDebug_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_bShowOverlayWhenCachingNodes_MetaData[] = {
		{ "Category", "Accessibility" },
		{ "Comment", "/**\n\x09 * When caching nodes, the viewport will jump to each node and this can cause discomfort for photosensitive users.\n\x09 * This setting displays an overlay to prevent this.\n\x09 */" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "When caching nodes, the viewport will jump to each node and this can cause discomfort for photosensitive users.\nThis setting displays an overlay to prevent this." },
	};
#endif
	void Z_Construct_UClass_UBASettings_Statics::NewProp_bShowOverlayWhenCachingNodes_SetBit(void* Obj)
	{
		((UBASettings*)Obj)->bShowOverlayWhenCachingNodes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_bShowOverlayWhenCachingNodes = { "bShowOverlayWhenCachingNodes", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBASettings), &Z_Construct_UClass_UBASettings_Statics::NewProp_bShowOverlayWhenCachingNodes_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_bShowOverlayWhenCachingNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_bShowOverlayWhenCachingNodes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBASettings_Statics::NewProp_RequiredNodesToShowOverlayProgressBar_MetaData[] = {
		{ "Category", "Accessibility" },
		{ "Comment", "/* Number of pending caching nodes required to show the progress bar in the center of the overlay */" },
		{ "EditCondition", "bShowOverlayWhenCachingNodes" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings.h" },
		{ "ToolTip", "Number of pending caching nodes required to show the progress bar in the center of the overlay" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UBASettings_Statics::NewProp_RequiredNodesToShowOverlayProgressBar = { "RequiredNodesToShowOverlayProgressBar", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBASettings, RequiredNodesToShowOverlayProgressBar), METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::NewProp_RequiredNodesToShowOverlayProgressBar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::NewProp_RequiredNodesToShowOverlayProgressBar_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBASettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_bAddToolbarWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_SelectedPinHighlightColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_bEnableGlobalCommentBubblePinned,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_bGlobalCommentBubblePinnedValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_bBetterWiringForNewNodes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_bAutoAddParentNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_bAutoRenameGettersAndSetters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_bMergeGenerateGetterAndSetterButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_ShiftCameraDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_bSlowButAccurateSizeCaching,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_bSaveBlueprintAssistCacheToFile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_AutoZoomToNodeBehavior_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_AutoZoomToNodeBehavior,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_SupportedAssetEditors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_SupportedAssetEditors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_bGloballyDisableAutoFormatting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_FormattingStyle_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_FormattingStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_ParameterStyle_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_ParameterStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_ExecutionWiringStyle_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_ExecutionWiringStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_ParameterWiringStyle_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_ParameterWiringStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_bEnableFasterFormatting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_bUseKnotNodePool,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_bLimitHelixingHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_HelixingHeightMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_SingleNodeMaxHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_bDetectNewNodesAndCacheNodeSizes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_bRefreshNodeSizeBeforeFormatting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_bCreateKnotNodes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_bExpandNodesAheadOfParameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_bExpandNodesByHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_bExpandParametersByHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_bSnapToGrid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_bAlignExecNodesTo8x8Grid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_FormatAllStyle_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_FormatAllStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_FormatAllHorizontalAlignment_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_FormatAllHorizontalAlignment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_FormatAllPadding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_bAutoPositionEventNodes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_bAlwaysFormatAll,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_BlueprintFormatterSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_BlueprintParameterPadding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_UseBlueprintFormattingForTheseGraphs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_UseBlueprintFormattingForTheseGraphs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_bTreatDelegatesAsExecutionPins,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_bCenterBranches,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_NumRequiredBranches,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_bCenterBranchesForParameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_NumRequiredBranchesForParameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_VerticalPinSpacing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_ParameterVerticalPinSpacing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_BlueprintKnotTrackSpacing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_KnotNodeDistanceThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_NonBlueprintFormatterSettings_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_NonBlueprintFormatterSettings_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_NonBlueprintFormatterSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_bApplyCommentPadding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_bAddKnotNodesToComments,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_CommentNodePadding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_bEnableVariableDefaults,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_bDefaultVariableInstanceEditable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_bDefaultVariableBlueprintReadOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_bDefaultVariableExposeOnSpawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_bDefaultVariablePrivate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_bDefaultVariableExposeToCinematics,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_DefaultVariableName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_DefaultVariableTooltip,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_DefaultVariableCategory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_bEnableFunctionDefaults,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_DefaultFunctionAccessSpecifier_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_DefaultFunctionAccessSpecifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_bDefaultFunctionPure,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_bDefaultFunctionConst,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_bDefaultFunctionExec,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_DefaultFunctionTooltip,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_DefaultFunctionKeywords,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_DefaultFunctionCategory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_DefaultGeneratedGettersCategory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_DefaultGeneratedSettersCategory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_bEnableDoubleClickGoToDefinition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_bEnableInvisibleKnotNodes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_bPlayLiveCompileSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_AdditionalDragNodesChords_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_AdditionalDragNodesChords,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_GroupMovementChords_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_GroupMovementChords,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_FolderBookmarks_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_FolderBookmarks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_ClickTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_bHighlightBadComments,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_BlueprintAssistDebug_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_BlueprintAssistDebug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_bShowOverlayWhenCachingNodes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Statics::NewProp_RequiredNodesToShowOverlayProgressBar,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBASettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBASettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBASettings_Statics::ClassParams = {
		&UBASettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBASettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBASettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBASettings()
	{
		if (!Z_Registration_Info_UClass_UBASettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBASettings.OuterSingleton, Z_Construct_UClass_UBASettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBASettings.OuterSingleton;
	}
	template<> BLUEPRINTASSIST_API UClass* StaticClass<UBASettings>()
	{
		return UBASettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBASettings);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistSettings_h_Statics::EnumInfo[] = {
		{ EBANodeFormattingStyle_StaticEnum, TEXT("EBANodeFormattingStyle"), &Z_Registration_Info_UEnum_EBANodeFormattingStyle, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2046504552U) },
		{ EBAParameterFormattingStyle_StaticEnum, TEXT("EBAParameterFormattingStyle"), &Z_Registration_Info_UEnum_EBAParameterFormattingStyle, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3855296438U) },
		{ EBAWiringStyle_StaticEnum, TEXT("EBAWiringStyle"), &Z_Registration_Info_UEnum_EBAWiringStyle, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3392189654U) },
		{ EBAAutoFormatting_StaticEnum, TEXT("EBAAutoFormatting"), &Z_Registration_Info_UEnum_EBAAutoFormatting, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2217451862U) },
		{ EBAFormatAllStyle_StaticEnum, TEXT("EBAFormatAllStyle"), &Z_Registration_Info_UEnum_EBAFormatAllStyle, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3530000995U) },
		{ EBAFormatAllHorizontalAlignment_StaticEnum, TEXT("EBAFormatAllHorizontalAlignment"), &Z_Registration_Info_UEnum_EBAFormatAllHorizontalAlignment, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3407043606U) },
		{ EBAFormatterType_StaticEnum, TEXT("EBAFormatterType"), &Z_Registration_Info_UEnum_EBAFormatterType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2964372042U) },
		{ EBAAutoZoomToNode_StaticEnum, TEXT("EBAAutoZoomToNode"), &Z_Registration_Info_UEnum_EBAAutoZoomToNode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 26963365U) },
		{ EBAFunctionAccessSpecifier_StaticEnum, TEXT("EBAFunctionAccessSpecifier"), &Z_Registration_Info_UEnum_EBAFunctionAccessSpecifier, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4199308162U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistSettings_h_Statics::ScriptStructInfo[] = {
		{ FBAFormatterSettings::StaticStruct, Z_Construct_UScriptStruct_FBAFormatterSettings_Statics::NewStructOps, TEXT("BAFormatterSettings"), &Z_Registration_Info_UScriptStruct_BAFormatterSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBAFormatterSettings), 1511644832U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBASettings, UBASettings::StaticClass, TEXT("UBASettings"), &Z_Registration_Info_UClass_UBASettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBASettings), 3273041327U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistSettings_h_191372976(TEXT("/Script/BlueprintAssist"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistSettings_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistSettings_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
