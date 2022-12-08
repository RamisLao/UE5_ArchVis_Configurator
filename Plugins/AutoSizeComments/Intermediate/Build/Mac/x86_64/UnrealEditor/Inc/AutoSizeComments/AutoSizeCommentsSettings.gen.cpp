// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoSizeComments/Public/AutoSizeCommentsSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutoSizeCommentsSettings() {}
// Cross Module References
	AUTOSIZECOMMENTS_API UEnum* Z_Construct_UEnum_AutoSizeComments_EASCResizingMode();
	UPackage* Z_Construct_UPackage__Script_AutoSizeComments();
	AUTOSIZECOMMENTS_API UEnum* Z_Construct_UEnum_AutoSizeComments_ECommentCollisionMethod();
	AUTOSIZECOMMENTS_API UEnum* Z_Construct_UEnum_AutoSizeComments_EASCAutoInsertComment();
	AUTOSIZECOMMENTS_API UScriptStruct* Z_Construct_UScriptStruct_FPresetCommentStyle();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	AUTOSIZECOMMENTS_API UClass* Z_Construct_UClass_UAutoSizeCommentsSettings_NoRegister();
	AUTOSIZECOMMENTS_API UClass* Z_Construct_UClass_UAutoSizeCommentsSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
	SLATE_API UEnum* Z_Construct_UEnum_Slate_ETextJustify();
	SLATE_API UScriptStruct* Z_Construct_UScriptStruct_FInputChord();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EASCResizingMode;
	static UEnum* EASCResizingMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EASCResizingMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EASCResizingMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AutoSizeComments_EASCResizingMode, Z_Construct_UPackage__Script_AutoSizeComments(), TEXT("EASCResizingMode"));
		}
		return Z_Registration_Info_UEnum_EASCResizingMode.OuterSingleton;
	}
	template<> AUTOSIZECOMMENTS_API UEnum* StaticEnum<EASCResizingMode>()
	{
		return EASCResizingMode_StaticEnum();
	}
	struct Z_Construct_UEnum_AutoSizeComments_EASCResizingMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AutoSizeComments_EASCResizingMode_Statics::Enumerators[] = {
		{ "EASCResizingMode::Always", (int64)EASCResizingMode::Always },
		{ "EASCResizingMode::Reactive", (int64)EASCResizingMode::Reactive },
		{ "EASCResizingMode::Disabled", (int64)EASCResizingMode::Disabled },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AutoSizeComments_EASCResizingMode_Statics::Enum_MetaDataParams[] = {
		{ "Always.Comment", "/** Resize to containing nodes on tick */" },
		{ "Always.DisplayName", "Always" },
		{ "Always.Name", "EASCResizingMode::Always" },
		{ "Always.ToolTip", "Resize to containing nodes on tick" },
		{ "Disabled.Comment", "/** Never resize */" },
		{ "Disabled.DisplayName", "Disabled" },
		{ "Disabled.Name", "EASCResizingMode::Disabled" },
		{ "Disabled.ToolTip", "Never resize" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "Reactive.Comment", "/** Resize when we detect a containing node moves or changes size */" },
		{ "Reactive.DisplayName", "Reactive (Experimental)" },
		{ "Reactive.Name", "EASCResizingMode::Reactive" },
		{ "Reactive.ToolTip", "Resize when we detect a containing node moves or changes size" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AutoSizeComments_EASCResizingMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AutoSizeComments,
		nullptr,
		"EASCResizingMode",
		"EASCResizingMode",
		Z_Construct_UEnum_AutoSizeComments_EASCResizingMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AutoSizeComments_EASCResizingMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AutoSizeComments_EASCResizingMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AutoSizeComments_EASCResizingMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AutoSizeComments_EASCResizingMode()
	{
		if (!Z_Registration_Info_UEnum_EASCResizingMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EASCResizingMode.InnerSingleton, Z_Construct_UEnum_AutoSizeComments_EASCResizingMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EASCResizingMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECommentCollisionMethod;
	static UEnum* ECommentCollisionMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECommentCollisionMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECommentCollisionMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AutoSizeComments_ECommentCollisionMethod, Z_Construct_UPackage__Script_AutoSizeComments(), TEXT("ECommentCollisionMethod"));
		}
		return Z_Registration_Info_UEnum_ECommentCollisionMethod.OuterSingleton;
	}
	template<> AUTOSIZECOMMENTS_API UEnum* StaticEnum<ECommentCollisionMethod>()
	{
		return ECommentCollisionMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_AutoSizeComments_ECommentCollisionMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AutoSizeComments_ECommentCollisionMethod_Statics::Enumerators[] = {
		{ "ECommentCollisionMethod::Point", (int64)ECommentCollisionMethod::Point },
		{ "ECommentCollisionMethod::Intersect", (int64)ECommentCollisionMethod::Intersect },
		{ "ECommentCollisionMethod::Contained", (int64)ECommentCollisionMethod::Contained },
		{ "ECommentCollisionMethod::Disabled", (int64)ECommentCollisionMethod::Disabled },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AutoSizeComments_ECommentCollisionMethod_Statics::Enum_MetaDataParams[] = {
		{ "Contained.Comment", "/** Add the node if it is fully contained in the comment */" },
		{ "Contained.DisplayName", "Contained" },
		{ "Contained.Name", "ECommentCollisionMethod::Contained" },
		{ "Contained.ToolTip", "Add the node if it is fully contained in the comment" },
		{ "Disabled.DisplayName", "Disabled" },
		{ "Disabled.Name", "ECommentCollisionMethod::Disabled" },
		{ "Intersect.Comment", "/** Add the node if it is intersecting the comment */" },
		{ "Intersect.DisplayName", "Overlap" },
		{ "Intersect.Name", "ECommentCollisionMethod::Intersect" },
		{ "Intersect.ToolTip", "Add the node if it is intersecting the comment" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "Point.Comment", "/** Add the node if the top-left corner is inside the comment */" },
		{ "Point.DisplayName", "Point" },
		{ "Point.Name", "ECommentCollisionMethod::Point" },
		{ "Point.ToolTip", "Add the node if the top-left corner is inside the comment" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AutoSizeComments_ECommentCollisionMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AutoSizeComments,
		nullptr,
		"ECommentCollisionMethod",
		"ECommentCollisionMethod",
		Z_Construct_UEnum_AutoSizeComments_ECommentCollisionMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AutoSizeComments_ECommentCollisionMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AutoSizeComments_ECommentCollisionMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AutoSizeComments_ECommentCollisionMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AutoSizeComments_ECommentCollisionMethod()
	{
		if (!Z_Registration_Info_UEnum_ECommentCollisionMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECommentCollisionMethod.InnerSingleton, Z_Construct_UEnum_AutoSizeComments_ECommentCollisionMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECommentCollisionMethod.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EASCAutoInsertComment;
	static UEnum* EASCAutoInsertComment_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EASCAutoInsertComment.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EASCAutoInsertComment.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AutoSizeComments_EASCAutoInsertComment, Z_Construct_UPackage__Script_AutoSizeComments(), TEXT("EASCAutoInsertComment"));
		}
		return Z_Registration_Info_UEnum_EASCAutoInsertComment.OuterSingleton;
	}
	template<> AUTOSIZECOMMENTS_API UEnum* StaticEnum<EASCAutoInsertComment>()
	{
		return EASCAutoInsertComment_StaticEnum();
	}
	struct Z_Construct_UEnum_AutoSizeComments_EASCAutoInsertComment_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AutoSizeComments_EASCAutoInsertComment_Statics::Enumerators[] = {
		{ "EASCAutoInsertComment::Never", (int64)EASCAutoInsertComment::Never },
		{ "EASCAutoInsertComment::Always", (int64)EASCAutoInsertComment::Always },
		{ "EASCAutoInsertComment::Surrounded", (int64)EASCAutoInsertComment::Surrounded },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AutoSizeComments_EASCAutoInsertComment_Statics::Enum_MetaDataParams[] = {
		{ "Always.DisplayName", "Always" },
		{ "Always.Name", "EASCAutoInsertComment::Always" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "Never.DisplayName", "Never" },
		{ "Never.Name", "EASCAutoInsertComment::Never" },
		{ "Surrounded.DisplayName", "Surrounded" },
		{ "Surrounded.Name", "EASCAutoInsertComment::Surrounded" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AutoSizeComments_EASCAutoInsertComment_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AutoSizeComments,
		nullptr,
		"EASCAutoInsertComment",
		"EASCAutoInsertComment",
		Z_Construct_UEnum_AutoSizeComments_EASCAutoInsertComment_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AutoSizeComments_EASCAutoInsertComment_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AutoSizeComments_EASCAutoInsertComment_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AutoSizeComments_EASCAutoInsertComment_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AutoSizeComments_EASCAutoInsertComment()
	{
		if (!Z_Registration_Info_UEnum_EASCAutoInsertComment.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EASCAutoInsertComment.InnerSingleton, Z_Construct_UEnum_AutoSizeComments_EASCAutoInsertComment_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EASCAutoInsertComment.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PresetCommentStyle;
class UScriptStruct* FPresetCommentStyle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PresetCommentStyle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PresetCommentStyle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPresetCommentStyle, Z_Construct_UPackage__Script_AutoSizeComments(), TEXT("PresetCommentStyle"));
	}
	return Z_Registration_Info_UScriptStruct_PresetCommentStyle.OuterSingleton;
}
template<> AUTOSIZECOMMENTS_API UScriptStruct* StaticStruct<FPresetCommentStyle>()
{
	return FPresetCommentStyle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPresetCommentStyle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FontSize_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_FontSize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPresetCommentStyle_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPresetCommentStyle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPresetCommentStyle>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPresetCommentStyle_Statics::NewProp_Color_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPresetCommentStyle_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPresetCommentStyle, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FPresetCommentStyle_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPresetCommentStyle_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPresetCommentStyle_Statics::NewProp_FontSize_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FPresetCommentStyle_Statics::NewProp_FontSize = { "FontSize", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPresetCommentStyle, FontSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FPresetCommentStyle_Statics::NewProp_FontSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPresetCommentStyle_Statics::NewProp_FontSize_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPresetCommentStyle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPresetCommentStyle_Statics::NewProp_Color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPresetCommentStyle_Statics::NewProp_FontSize,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPresetCommentStyle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AutoSizeComments,
		nullptr,
		&NewStructOps,
		"PresetCommentStyle",
		sizeof(FPresetCommentStyle),
		alignof(FPresetCommentStyle),
		Z_Construct_UScriptStruct_FPresetCommentStyle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPresetCommentStyle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPresetCommentStyle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPresetCommentStyle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPresetCommentStyle()
	{
		if (!Z_Registration_Info_UScriptStruct_PresetCommentStyle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PresetCommentStyle.InnerSingleton, Z_Construct_UScriptStruct_FPresetCommentStyle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PresetCommentStyle.InnerSingleton;
	}
	void UAutoSizeCommentsSettings::StaticRegisterNativesUAutoSizeCommentsSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAutoSizeCommentsSettings);
	UClass* Z_Construct_UClass_UAutoSizeCommentsSettings_NoRegister()
	{
		return UAutoSizeCommentsSettings::StaticClass();
	}
	struct Z_Construct_UClass_UAutoSizeCommentsSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultFontSize_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_DefaultFontSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseDefaultFontSize_MetaData[];
#endif
		static void NewProp_bUseDefaultFontSize_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseDefaultFontSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultCommentColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultCommentColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseRandomColor_MetaData[];
#endif
		static void NewProp_bUseRandomColor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseRandomColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RandomColorOpacity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RandomColorOpacity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseRandomColorFromList_MetaData[];
#endif
		static void NewProp_bUseRandomColorFromList_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseRandomColorFromList;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PredefinedRandomColorList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PredefinedRandomColorList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PredefinedRandomColorList;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinimumControlOpacity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinimumControlOpacity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAggressivelyUseDefaultColor_MetaData[];
#endif
		static void NewProp_bAggressivelyUseDefaultColor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAggressivelyUseDefaultColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeaderStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HeaderStyle;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PresetStyles_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PresetStyles_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PresetStyles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHideCommentBubble_MetaData[];
#endif
		static void NewProp_bHideCommentBubble_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideCommentBubble;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableCommentBubbleDefaults_MetaData[];
#endif
		static void NewProp_bEnableCommentBubbleDefaults_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableCommentBubbleDefaults;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDefaultColorCommentBubble_MetaData[];
#endif
		static void NewProp_bDefaultColorCommentBubble_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDefaultColorCommentBubble;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDefaultShowBubbleWhenZoomed_MetaData[];
#endif
		static void NewProp_bDefaultShowBubbleWhenZoomed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDefaultShowBubbleWhenZoomed;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ResizingMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResizingMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ResizingMode;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AutoInsertComment_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoInsertComment_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AutoInsertComment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSelectNodeWhenClickingOnPin_MetaData[];
#endif
		static void NewProp_bSelectNodeWhenClickingOnPin_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSelectNodeWhenClickingOnPin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CommentNodePadding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CommentNodePadding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CommentTextPadding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CommentTextPadding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinimumVerticalPadding_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinimumVerticalPadding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CommentTextAlignment_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_CommentTextAlignment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMoveEmptyCommentBoxes_MetaData[];
#endif
		static void NewProp_bMoveEmptyCommentBoxes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMoveEmptyCommentBoxes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EmptyCommentBoxSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EmptyCommentBoxSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSaveCommentNodeDataToFile_MetaData[];
#endif
		static void NewProp_bSaveCommentNodeDataToFile_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSaveCommentNodeDataToFile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSaveCommentDataOnSavingGraph_MetaData[];
#endif
		static void NewProp_bSaveCommentDataOnSavingGraph_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSaveCommentDataOnSavingGraph;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSaveCommentDataOnExit_MetaData[];
#endif
		static void NewProp_bSaveCommentDataOnExit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSaveCommentDataOnExit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDetectNodesContainedForNewComments_MetaData[];
#endif
		static void NewProp_bDetectNodesContainedForNewComments_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDetectNodesContainedForNewComments;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResizeChord_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ResizeChord;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ResizeCollisionMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResizeCollisionMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ResizeCollisionMethod;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AltCollisionMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AltCollisionMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AltCollisionMethod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSnapToGridWhileResizing_MetaData[];
#endif
		static void NewProp_bSnapToGridWhileResizing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSnapToGridWhileResizing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreKnotNodes_MetaData[];
#endif
		static void NewProp_bIgnoreKnotNodes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreKnotNodes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreKnotNodesWhenPressingAlt_MetaData[];
#endif
		static void NewProp_bIgnoreKnotNodesWhenPressingAlt_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreKnotNodesWhenPressingAlt;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreKnotNodesWhenResizing_MetaData[];
#endif
		static void NewProp_bIgnoreKnotNodesWhenResizing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreKnotNodesWhenResizing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreSelectedNodesOnCreation_MetaData[];
#endif
		static void NewProp_bIgnoreSelectedNodesOnCreation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreSelectedNodesOnCreation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRefreshContainingNodesOnMove_MetaData[];
#endif
		static void NewProp_bRefreshContainingNodesOnMove_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRefreshContainingNodesOnMove;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisableTooltip_MetaData[];
#endif
		static void NewProp_bDisableTooltip_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableTooltip;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHighlightContainingNodesOnSelection_MetaData[];
#endif
		static void NewProp_bHighlightContainingNodesOnSelection_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHighlightContainingNodesOnSelection;
		static const UECodeGen_Private::FStrPropertyParams NewProp_IgnoredGraphs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IgnoredGraphs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_IgnoredGraphs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSuppressSuggestedSettings_MetaData[];
#endif
		static void NewProp_bSuppressSuggestedSettings_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuppressSuggestedSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSuppressSourceControlNotification_MetaData[];
#endif
		static void NewProp_bSuppressSourceControlNotification_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuppressSourceControlNotification;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHideResizeButton_MetaData[];
#endif
		static void NewProp_bHideResizeButton_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideResizeButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHideHeaderButton_MetaData[];
#endif
		static void NewProp_bHideHeaderButton_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideHeaderButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHidePresets_MetaData[];
#endif
		static void NewProp_bHidePresets_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHidePresets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHideRandomizeButton_MetaData[];
#endif
		static void NewProp_bHideRandomizeButton_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideRandomizeButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHideCommentBoxControls_MetaData[];
#endif
		static void NewProp_bHideCommentBoxControls_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideCommentBoxControls;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHideCornerPoints_MetaData[];
#endif
		static void NewProp_bHideCornerPoints_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideCornerPoints;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableFixForSortDepthIssue_MetaData[];
#endif
		static void NewProp_bEnableFixForSortDepthIssue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableFixForSortDepthIssue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDebugGraph_ASC_MetaData[];
#endif
		static void NewProp_bDebugGraph_ASC_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebugGraph_ASC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisablePackageCleanup_MetaData[];
#endif
		static void NewProp_bDisablePackageCleanup_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisablePackageCleanup;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AutoSizeComments,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AutoSizeCommentsSettings.h" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_DefaultFontSize_MetaData[] = {
		{ "Category", "FontSize" },
		{ "Comment", "/** The default font size for comment boxes */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "The default font size for comment boxes" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_DefaultFontSize = { "DefaultFontSize", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAutoSizeCommentsSettings, DefaultFontSize), METADATA_PARAMS(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_DefaultFontSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_DefaultFontSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bUseDefaultFontSize_MetaData[] = {
		{ "Category", "FontSize" },
		{ "Comment", "/** If enabled, all nodes will be changed to the default font size (unless they are a preset or floating node) */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "If enabled, all nodes will be changed to the default font size (unless they are a preset or floating node)" },
	};
#endif
	void Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bUseDefaultFontSize_SetBit(void* Obj)
	{
		((UAutoSizeCommentsSettings*)Obj)->bUseDefaultFontSize = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bUseDefaultFontSize = { "bUseDefaultFontSize", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAutoSizeCommentsSettings), &Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bUseDefaultFontSize_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bUseDefaultFontSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bUseDefaultFontSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_DefaultCommentColor_MetaData[] = {
		{ "Category", "Color" },
		{ "Comment", "/** If Use Random Color is not enabled, comment boxes will spawn with this default color */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "If Use Random Color is not enabled, comment boxes will spawn with this default color" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_DefaultCommentColor = { "DefaultCommentColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAutoSizeCommentsSettings, DefaultCommentColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_DefaultCommentColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_DefaultCommentColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bUseRandomColor_MetaData[] = {
		{ "Category", "Color" },
		{ "Comment", "/** If enabled, comment boxes will spawn with a random color. If disabled, use default color */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "If enabled, comment boxes will spawn with a random color. If disabled, use default color" },
	};
#endif
	void Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bUseRandomColor_SetBit(void* Obj)
	{
		((UAutoSizeCommentsSettings*)Obj)->bUseRandomColor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bUseRandomColor = { "bUseRandomColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAutoSizeCommentsSettings), &Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bUseRandomColor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bUseRandomColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bUseRandomColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_RandomColorOpacity_MetaData[] = {
		{ "Category", "Color" },
		{ "Comment", "/** Opacity used for the random color */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "Opacity used for the random color" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_RandomColorOpacity = { "RandomColorOpacity", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAutoSizeCommentsSettings, RandomColorOpacity), METADATA_PARAMS(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_RandomColorOpacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_RandomColorOpacity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bUseRandomColorFromList_MetaData[] = {
		{ "Category", "Color" },
		{ "Comment", "/** If enabled, select a random color from predefined list */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "If enabled, select a random color from predefined list" },
	};
#endif
	void Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bUseRandomColorFromList_SetBit(void* Obj)
	{
		((UAutoSizeCommentsSettings*)Obj)->bUseRandomColorFromList = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bUseRandomColorFromList = { "bUseRandomColorFromList", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAutoSizeCommentsSettings), &Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bUseRandomColorFromList_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bUseRandomColorFromList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bUseRandomColorFromList_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_PredefinedRandomColorList_Inner = { "PredefinedRandomColorList", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_PredefinedRandomColorList_MetaData[] = {
		{ "Category", "Color" },
		{ "Comment", "/** If UseRandomColorFromList is enabled, new comments will select a color from one of these */" },
		{ "EditCondition", "bUseRandomColorFromList" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "If UseRandomColorFromList is enabled, new comments will select a color from one of these" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_PredefinedRandomColorList = { "PredefinedRandomColorList", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAutoSizeCommentsSettings, PredefinedRandomColorList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_PredefinedRandomColorList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_PredefinedRandomColorList_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_MinimumControlOpacity_MetaData[] = {
		{ "Category", "Color" },
		{ "Comment", "/** Minimum opacity for comment box controls when not hovered */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "Minimum opacity for comment box controls when not hovered" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_MinimumControlOpacity = { "MinimumControlOpacity", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAutoSizeCommentsSettings, MinimumControlOpacity), METADATA_PARAMS(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_MinimumControlOpacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_MinimumControlOpacity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bAggressivelyUseDefaultColor_MetaData[] = {
		{ "Category", "Color" },
		{ "Comment", "/** Set all nodes in the graph to the default color */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "Set all nodes in the graph to the default color" },
	};
#endif
	void Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bAggressivelyUseDefaultColor_SetBit(void* Obj)
	{
		((UAutoSizeCommentsSettings*)Obj)->bAggressivelyUseDefaultColor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bAggressivelyUseDefaultColor = { "bAggressivelyUseDefaultColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAutoSizeCommentsSettings), &Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bAggressivelyUseDefaultColor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bAggressivelyUseDefaultColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bAggressivelyUseDefaultColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_HeaderStyle_MetaData[] = {
		{ "Category", "Styles" },
		{ "Comment", "/** Style for header comment boxes */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "Style for header comment boxes" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_HeaderStyle = { "HeaderStyle", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAutoSizeCommentsSettings, HeaderStyle), Z_Construct_UScriptStruct_FPresetCommentStyle, METADATA_PARAMS(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_HeaderStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_HeaderStyle_MetaData)) }; // 3039853973
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_PresetStyles_Inner = { "PresetStyles", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPresetCommentStyle, METADATA_PARAMS(nullptr, 0) }; // 3039853973
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_PresetStyles_MetaData[] = {
		{ "Category", "Styles" },
		{ "Comment", "/** Preset styles (each style will have its own button on the comment box) */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "Preset styles (each style will have its own button on the comment box)" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_PresetStyles = { "PresetStyles", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAutoSizeCommentsSettings, PresetStyles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_PresetStyles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_PresetStyles_MetaData)) }; // 3039853973
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bHideCommentBubble_MetaData[] = {
		{ "Category", "CommentBubble" },
		{ "Comment", "/** Always hide the comment bubble */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "Always hide the comment bubble" },
	};
#endif
	void Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bHideCommentBubble_SetBit(void* Obj)
	{
		((UAutoSizeCommentsSettings*)Obj)->bHideCommentBubble = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bHideCommentBubble = { "bHideCommentBubble", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAutoSizeCommentsSettings), &Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bHideCommentBubble_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bHideCommentBubble_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bHideCommentBubble_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bEnableCommentBubbleDefaults_MetaData[] = {
		{ "Category", "CommentBubble" },
		{ "Comment", "/** Set default values for comment bubble */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "Set default values for comment bubble" },
	};
#endif
	void Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bEnableCommentBubbleDefaults_SetBit(void* Obj)
	{
		((UAutoSizeCommentsSettings*)Obj)->bEnableCommentBubbleDefaults = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bEnableCommentBubbleDefaults = { "bEnableCommentBubbleDefaults", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAutoSizeCommentsSettings), &Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bEnableCommentBubbleDefaults_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bEnableCommentBubbleDefaults_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bEnableCommentBubbleDefaults_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bDefaultColorCommentBubble_MetaData[] = {
		{ "Category", "CommentBubble" },
		{ "Comment", "/** Default value for \"Color Bubble\" */" },
		{ "EditCondition", "bEnableCommentBubbleDefaults" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "Default value for \"Color Bubble\"" },
	};
#endif
	void Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bDefaultColorCommentBubble_SetBit(void* Obj)
	{
		((UAutoSizeCommentsSettings*)Obj)->bDefaultColorCommentBubble = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bDefaultColorCommentBubble = { "bDefaultColorCommentBubble", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAutoSizeCommentsSettings), &Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bDefaultColorCommentBubble_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bDefaultColorCommentBubble_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bDefaultColorCommentBubble_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bDefaultShowBubbleWhenZoomed_MetaData[] = {
		{ "Category", "CommentBubble" },
		{ "Comment", "/** Default value for \"Show Bubble When Zoomed\" */" },
		{ "EditCondition", "bEnableCommentBubbleDefaults" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "Default value for \"Show Bubble When Zoomed\"" },
	};
#endif
	void Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bDefaultShowBubbleWhenZoomed_SetBit(void* Obj)
	{
		((UAutoSizeCommentsSettings*)Obj)->bDefaultShowBubbleWhenZoomed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bDefaultShowBubbleWhenZoomed = { "bDefaultShowBubbleWhenZoomed", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAutoSizeCommentsSettings), &Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bDefaultShowBubbleWhenZoomed_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bDefaultShowBubbleWhenZoomed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bDefaultShowBubbleWhenZoomed_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_ResizingMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_ResizingMode_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "/** The auto resizing behavior for comments (always: on tick | reactive: upon detecting node movement) */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "The auto resizing behavior for comments (always: on tick | reactive: upon detecting node movement)" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_ResizingMode = { "ResizingMode", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAutoSizeCommentsSettings, ResizingMode), Z_Construct_UEnum_AutoSizeComments_EASCResizingMode, METADATA_PARAMS(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_ResizingMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_ResizingMode_MetaData)) }; // 4016103422
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_AutoInsertComment_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_AutoInsertComment_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "/** Determines when to insert newly created nodes into existing comments */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "Determines when to insert newly created nodes into existing comments" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_AutoInsertComment = { "AutoInsertComment", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAutoSizeCommentsSettings, AutoInsertComment), Z_Construct_UEnum_AutoSizeComments_EASCAutoInsertComment, METADATA_PARAMS(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_AutoInsertComment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_AutoInsertComment_MetaData)) }; // 4040046539
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bSelectNodeWhenClickingOnPin_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "/** When you click a node's pin, also select the node (required for AutoInsertComment to function correctly) */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "When you click a node's pin, also select the node (required for AutoInsertComment to function correctly)" },
	};
#endif
	void Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bSelectNodeWhenClickingOnPin_SetBit(void* Obj)
	{
		((UAutoSizeCommentsSettings*)Obj)->bSelectNodeWhenClickingOnPin = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bSelectNodeWhenClickingOnPin = { "bSelectNodeWhenClickingOnPin", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAutoSizeCommentsSettings), &Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bSelectNodeWhenClickingOnPin_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bSelectNodeWhenClickingOnPin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bSelectNodeWhenClickingOnPin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_CommentNodePadding_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "/** Amount of padding for around the contents of a comment node */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "Amount of padding for around the contents of a comment node" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_CommentNodePadding = { "CommentNodePadding", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAutoSizeCommentsSettings, CommentNodePadding), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_CommentNodePadding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_CommentNodePadding_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_CommentTextPadding_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "/** Amount of padding around the comment title text */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "Amount of padding around the comment title text" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_CommentTextPadding = { "CommentTextPadding", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAutoSizeCommentsSettings, CommentTextPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_CommentTextPadding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_CommentTextPadding_MetaData)) }; // 451581171
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_MinimumVerticalPadding_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "/** Minimum vertical padding above and below the node */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "Minimum vertical padding above and below the node" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_MinimumVerticalPadding = { "MinimumVerticalPadding", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAutoSizeCommentsSettings, MinimumVerticalPadding), METADATA_PARAMS(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_MinimumVerticalPadding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_MinimumVerticalPadding_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_CommentTextAlignment_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "/** Comment text alignment */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "Comment text alignment" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_CommentTextAlignment = { "CommentTextAlignment", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAutoSizeCommentsSettings, CommentTextAlignment), Z_Construct_UEnum_Slate_ETextJustify, METADATA_PARAMS(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_CommentTextAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_CommentTextAlignment_MetaData)) }; // 2107748386
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bMoveEmptyCommentBoxes_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "/** If enabled, empty comment boxes will move out of the way of other comment boxes */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "If enabled, empty comment boxes will move out of the way of other comment boxes" },
	};
#endif
	void Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bMoveEmptyCommentBoxes_SetBit(void* Obj)
	{
		((UAutoSizeCommentsSettings*)Obj)->bMoveEmptyCommentBoxes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bMoveEmptyCommentBoxes = { "bMoveEmptyCommentBoxes", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAutoSizeCommentsSettings), &Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bMoveEmptyCommentBoxes_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bMoveEmptyCommentBoxes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bMoveEmptyCommentBoxes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_EmptyCommentBoxSpeed_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "/** The speed at which empty comment boxes move */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "The speed at which empty comment boxes move" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_EmptyCommentBoxSpeed = { "EmptyCommentBoxSpeed", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAutoSizeCommentsSettings, EmptyCommentBoxSpeed), METADATA_PARAMS(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_EmptyCommentBoxSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_EmptyCommentBoxSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bSaveCommentNodeDataToFile_MetaData[] = {
		{ "Category", "CommentCache" },
		{ "Comment", "/** If enabled, nodes inside comments will be saved to a cache file */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "If enabled, nodes inside comments will be saved to a cache file" },
	};
#endif
	void Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bSaveCommentNodeDataToFile_SetBit(void* Obj)
	{
		((UAutoSizeCommentsSettings*)Obj)->bSaveCommentNodeDataToFile = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bSaveCommentNodeDataToFile = { "bSaveCommentNodeDataToFile", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAutoSizeCommentsSettings), &Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bSaveCommentNodeDataToFile_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bSaveCommentNodeDataToFile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bSaveCommentNodeDataToFile_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bSaveCommentDataOnSavingGraph_MetaData[] = {
		{ "Category", "CommentCache" },
		{ "Comment", "/** If enabled, nodes will be saved to file when the graph is saved */" },
		{ "EditCondition", "bSaveCommentNodeDataToFile" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "If enabled, nodes will be saved to file when the graph is saved" },
	};
#endif
	void Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bSaveCommentDataOnSavingGraph_SetBit(void* Obj)
	{
		((UAutoSizeCommentsSettings*)Obj)->bSaveCommentDataOnSavingGraph = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bSaveCommentDataOnSavingGraph = { "bSaveCommentDataOnSavingGraph", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAutoSizeCommentsSettings), &Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bSaveCommentDataOnSavingGraph_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bSaveCommentDataOnSavingGraph_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bSaveCommentDataOnSavingGraph_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bSaveCommentDataOnExit_MetaData[] = {
		{ "Category", "CommentCache" },
		{ "Comment", "/** If enabled, nodes will be saved to file when the program is exited */" },
		{ "EditCondition", "bSaveCommentNodeDataToFile" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "If enabled, nodes will be saved to file when the program is exited" },
	};
#endif
	void Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bSaveCommentDataOnExit_SetBit(void* Obj)
	{
		((UAutoSizeCommentsSettings*)Obj)->bSaveCommentDataOnExit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bSaveCommentDataOnExit = { "bSaveCommentDataOnExit", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAutoSizeCommentsSettings), &Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bSaveCommentDataOnExit_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bSaveCommentDataOnExit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bSaveCommentDataOnExit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bDetectNodesContainedForNewComments_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "/** Commments will detect and add nodes are underneath on creation */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "Commments will detect and add nodes are underneath on creation" },
	};
#endif
	void Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bDetectNodesContainedForNewComments_SetBit(void* Obj)
	{
		((UAutoSizeCommentsSettings*)Obj)->bDetectNodesContainedForNewComments = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bDetectNodesContainedForNewComments = { "bDetectNodesContainedForNewComments", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAutoSizeCommentsSettings), &Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bDetectNodesContainedForNewComments_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bDetectNodesContainedForNewComments_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bDetectNodesContainedForNewComments_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_ResizeChord_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "/** Mouse input chord to resize a node */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "Mouse input chord to resize a node" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_ResizeChord = { "ResizeChord", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAutoSizeCommentsSettings, ResizeChord), Z_Construct_UScriptStruct_FInputChord, METADATA_PARAMS(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_ResizeChord_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_ResizeChord_MetaData)) }; // 3880295606
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_ResizeCollisionMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_ResizeCollisionMethod_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "/** Collision method to use when resizing comment nodes */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "Collision method to use when resizing comment nodes" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_ResizeCollisionMethod = { "ResizeCollisionMethod", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAutoSizeCommentsSettings, ResizeCollisionMethod), Z_Construct_UEnum_AutoSizeComments_ECommentCollisionMethod, METADATA_PARAMS(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_ResizeCollisionMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_ResizeCollisionMethod_MetaData)) }; // 834965393
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_AltCollisionMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_AltCollisionMethod_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "/** Collision method to use when releasing alt */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "Collision method to use when releasing alt" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_AltCollisionMethod = { "AltCollisionMethod", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAutoSizeCommentsSettings, AltCollisionMethod), Z_Construct_UEnum_AutoSizeComments_ECommentCollisionMethod, METADATA_PARAMS(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_AltCollisionMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_AltCollisionMethod_MetaData)) }; // 834965393
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bSnapToGridWhileResizing_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "/** Snap to the grid when resizing the node */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "Snap to the grid when resizing the node" },
	};
#endif
	void Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bSnapToGridWhileResizing_SetBit(void* Obj)
	{
		((UAutoSizeCommentsSettings*)Obj)->bSnapToGridWhileResizing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bSnapToGridWhileResizing = { "bSnapToGridWhileResizing", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAutoSizeCommentsSettings), &Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bSnapToGridWhileResizing_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bSnapToGridWhileResizing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bSnapToGridWhileResizing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bIgnoreKnotNodes_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "/** Don't add knot nodes to comment boxes */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "Don't add knot nodes to comment boxes" },
	};
#endif
	void Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bIgnoreKnotNodes_SetBit(void* Obj)
	{
		((UAutoSizeCommentsSettings*)Obj)->bIgnoreKnotNodes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bIgnoreKnotNodes = { "bIgnoreKnotNodes", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAutoSizeCommentsSettings), &Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bIgnoreKnotNodes_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bIgnoreKnotNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bIgnoreKnotNodes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bIgnoreKnotNodesWhenPressingAlt_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "/** Don't add knot nodes to comment boxes */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "Don't add knot nodes to comment boxes" },
	};
#endif
	void Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bIgnoreKnotNodesWhenPressingAlt_SetBit(void* Obj)
	{
		((UAutoSizeCommentsSettings*)Obj)->bIgnoreKnotNodesWhenPressingAlt = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bIgnoreKnotNodesWhenPressingAlt = { "bIgnoreKnotNodesWhenPressingAlt", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAutoSizeCommentsSettings), &Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bIgnoreKnotNodesWhenPressingAlt_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bIgnoreKnotNodesWhenPressingAlt_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bIgnoreKnotNodesWhenPressingAlt_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bIgnoreKnotNodesWhenResizing_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "/** Don't add knot nodes to comment boxes */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "Don't add knot nodes to comment boxes" },
	};
#endif
	void Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bIgnoreKnotNodesWhenResizing_SetBit(void* Obj)
	{
		((UAutoSizeCommentsSettings*)Obj)->bIgnoreKnotNodesWhenResizing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bIgnoreKnotNodesWhenResizing = { "bIgnoreKnotNodesWhenResizing", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAutoSizeCommentsSettings), &Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bIgnoreKnotNodesWhenResizing_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bIgnoreKnotNodesWhenResizing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bIgnoreKnotNodesWhenResizing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bIgnoreSelectedNodesOnCreation_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "/** Don't snap to selected nodes on creation */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "Don't snap to selected nodes on creation" },
	};
#endif
	void Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bIgnoreSelectedNodesOnCreation_SetBit(void* Obj)
	{
		((UAutoSizeCommentsSettings*)Obj)->bIgnoreSelectedNodesOnCreation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bIgnoreSelectedNodesOnCreation = { "bIgnoreSelectedNodesOnCreation", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAutoSizeCommentsSettings), &Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bIgnoreSelectedNodesOnCreation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bIgnoreSelectedNodesOnCreation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bIgnoreSelectedNodesOnCreation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bRefreshContainingNodesOnMove_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "/** Refresh the nodes inside the comment when you start moving the comment */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "Refresh the nodes inside the comment when you start moving the comment" },
	};
#endif
	void Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bRefreshContainingNodesOnMove_SetBit(void* Obj)
	{
		((UAutoSizeCommentsSettings*)Obj)->bRefreshContainingNodesOnMove = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bRefreshContainingNodesOnMove = { "bRefreshContainingNodesOnMove", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAutoSizeCommentsSettings), &Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bRefreshContainingNodesOnMove_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bRefreshContainingNodesOnMove_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bRefreshContainingNodesOnMove_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bDisableTooltip_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "/** Disable the tooltip when hovering the titlebar */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "Disable the tooltip when hovering the titlebar" },
	};
#endif
	void Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bDisableTooltip_SetBit(void* Obj)
	{
		((UAutoSizeCommentsSettings*)Obj)->bDisableTooltip = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bDisableTooltip = { "bDisableTooltip", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAutoSizeCommentsSettings), &Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bDisableTooltip_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bDisableTooltip_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bDisableTooltip_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bHighlightContainingNodesOnSelection_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "/** Highlight the contained node for a comment when you select it */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "Highlight the contained node for a comment when you select it" },
	};
#endif
	void Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bHighlightContainingNodesOnSelection_SetBit(void* Obj)
	{
		((UAutoSizeCommentsSettings*)Obj)->bHighlightContainingNodesOnSelection = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bHighlightContainingNodesOnSelection = { "bHighlightContainingNodesOnSelection", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAutoSizeCommentsSettings), &Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bHighlightContainingNodesOnSelection_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bHighlightContainingNodesOnSelection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bHighlightContainingNodesOnSelection_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_IgnoredGraphs_Inner = { "IgnoredGraphs", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_IgnoredGraphs_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "/** Do not use ASC node for these graphs, turn on DebugClass_ASC and open graph to find graph class name */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "Do not use ASC node for these graphs, turn on DebugClass_ASC and open graph to find graph class name" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_IgnoredGraphs = { "IgnoredGraphs", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAutoSizeCommentsSettings, IgnoredGraphs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_IgnoredGraphs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_IgnoredGraphs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bSuppressSuggestedSettings_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "/** Hide prompt for suggested settings with Blueprint Assist plugin */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "Hide prompt for suggested settings with Blueprint Assist plugin" },
	};
#endif
	void Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bSuppressSuggestedSettings_SetBit(void* Obj)
	{
		((UAutoSizeCommentsSettings*)Obj)->bSuppressSuggestedSettings = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bSuppressSuggestedSettings = { "bSuppressSuggestedSettings", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAutoSizeCommentsSettings), &Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bSuppressSuggestedSettings_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bSuppressSuggestedSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bSuppressSuggestedSettings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bSuppressSourceControlNotification_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "/** Hide prompt for suggested settings when source control is enabled*/" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "Hide prompt for suggested settings when source control is enabled" },
	};
#endif
	void Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bSuppressSourceControlNotification_SetBit(void* Obj)
	{
		((UAutoSizeCommentsSettings*)Obj)->bSuppressSourceControlNotification = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bSuppressSourceControlNotification = { "bSuppressSourceControlNotification", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAutoSizeCommentsSettings), &Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bSuppressSourceControlNotification_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bSuppressSourceControlNotification_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bSuppressSourceControlNotification_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bHideResizeButton_MetaData[] = {
		{ "Category", "Controls" },
		{ "Comment", "/** Hide the resize button */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "Hide the resize button" },
	};
#endif
	void Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bHideResizeButton_SetBit(void* Obj)
	{
		((UAutoSizeCommentsSettings*)Obj)->bHideResizeButton = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bHideResizeButton = { "bHideResizeButton", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAutoSizeCommentsSettings), &Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bHideResizeButton_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bHideResizeButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bHideResizeButton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bHideHeaderButton_MetaData[] = {
		{ "Category", "Controls" },
		{ "Comment", "/** Hide the header button */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "Hide the header button" },
	};
#endif
	void Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bHideHeaderButton_SetBit(void* Obj)
	{
		((UAutoSizeCommentsSettings*)Obj)->bHideHeaderButton = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bHideHeaderButton = { "bHideHeaderButton", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAutoSizeCommentsSettings), &Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bHideHeaderButton_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bHideHeaderButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bHideHeaderButton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bHidePresets_MetaData[] = {
		{ "Category", "Controls" },
		{ "Comment", "/** Hide the preset buttons */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "Hide the preset buttons" },
	};
#endif
	void Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bHidePresets_SetBit(void* Obj)
	{
		((UAutoSizeCommentsSettings*)Obj)->bHidePresets = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bHidePresets = { "bHidePresets", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAutoSizeCommentsSettings), &Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bHidePresets_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bHidePresets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bHidePresets_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bHideRandomizeButton_MetaData[] = {
		{ "Category", "Controls" },
		{ "Comment", "/** Hide the randomize color button */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "Hide the randomize color button" },
	};
#endif
	void Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bHideRandomizeButton_SetBit(void* Obj)
	{
		((UAutoSizeCommentsSettings*)Obj)->bHideRandomizeButton = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bHideRandomizeButton = { "bHideRandomizeButton", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAutoSizeCommentsSettings), &Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bHideRandomizeButton_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bHideRandomizeButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bHideRandomizeButton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bHideCommentBoxControls_MetaData[] = {
		{ "Category", "Controls" },
		{ "Comment", "/** Hide controls at the bottom of the comment box */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "Hide controls at the bottom of the comment box" },
	};
#endif
	void Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bHideCommentBoxControls_SetBit(void* Obj)
	{
		((UAutoSizeCommentsSettings*)Obj)->bHideCommentBoxControls = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bHideCommentBoxControls = { "bHideCommentBoxControls", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAutoSizeCommentsSettings), &Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bHideCommentBoxControls_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bHideCommentBoxControls_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bHideCommentBoxControls_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bHideCornerPoints_MetaData[] = {
		{ "Category", "Controls" },
		{ "Comment", "/** Hide the corner points (resize still enabled) */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "Hide the corner points (resize still enabled)" },
	};
#endif
	void Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bHideCornerPoints_SetBit(void* Obj)
	{
		((UAutoSizeCommentsSettings*)Obj)->bHideCornerPoints = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bHideCornerPoints = { "bHideCornerPoints", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAutoSizeCommentsSettings), &Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bHideCornerPoints_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bHideCornerPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bHideCornerPoints_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bEnableFixForSortDepthIssue_MetaData[] = {
		{ "Category", "Experimental" },
		{ "Comment", "/** Experimental fix for sort depth issue in UE5 (unable to move nested nodes until you compile the blueprint) */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "Experimental fix for sort depth issue in UE5 (unable to move nested nodes until you compile the blueprint)" },
	};
#endif
	void Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bEnableFixForSortDepthIssue_SetBit(void* Obj)
	{
		((UAutoSizeCommentsSettings*)Obj)->bEnableFixForSortDepthIssue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bEnableFixForSortDepthIssue = { "bEnableFixForSortDepthIssue", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAutoSizeCommentsSettings), &Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bEnableFixForSortDepthIssue_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bEnableFixForSortDepthIssue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bEnableFixForSortDepthIssue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bDebugGraph_ASC_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/** Print info about the graph when opening a graph */" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
		{ "ToolTip", "Print info about the graph when opening a graph" },
	};
#endif
	void Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bDebugGraph_ASC_SetBit(void* Obj)
	{
		((UAutoSizeCommentsSettings*)Obj)->bDebugGraph_ASC = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bDebugGraph_ASC = { "bDebugGraph_ASC", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAutoSizeCommentsSettings), &Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bDebugGraph_ASC_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bDebugGraph_ASC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bDebugGraph_ASC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bDisablePackageCleanup_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/AutoSizeCommentsSettings.h" },
	};
#endif
	void Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bDisablePackageCleanup_SetBit(void* Obj)
	{
		((UAutoSizeCommentsSettings*)Obj)->bDisablePackageCleanup = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bDisablePackageCleanup = { "bDisablePackageCleanup", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAutoSizeCommentsSettings), &Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bDisablePackageCleanup_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bDisablePackageCleanup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bDisablePackageCleanup_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_DefaultFontSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bUseDefaultFontSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_DefaultCommentColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bUseRandomColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_RandomColorOpacity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bUseRandomColorFromList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_PredefinedRandomColorList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_PredefinedRandomColorList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_MinimumControlOpacity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bAggressivelyUseDefaultColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_HeaderStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_PresetStyles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_PresetStyles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bHideCommentBubble,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bEnableCommentBubbleDefaults,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bDefaultColorCommentBubble,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bDefaultShowBubbleWhenZoomed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_ResizingMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_ResizingMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_AutoInsertComment_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_AutoInsertComment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bSelectNodeWhenClickingOnPin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_CommentNodePadding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_CommentTextPadding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_MinimumVerticalPadding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_CommentTextAlignment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bMoveEmptyCommentBoxes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_EmptyCommentBoxSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bSaveCommentNodeDataToFile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bSaveCommentDataOnSavingGraph,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bSaveCommentDataOnExit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bDetectNodesContainedForNewComments,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_ResizeChord,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_ResizeCollisionMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_ResizeCollisionMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_AltCollisionMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_AltCollisionMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bSnapToGridWhileResizing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bIgnoreKnotNodes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bIgnoreKnotNodesWhenPressingAlt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bIgnoreKnotNodesWhenResizing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bIgnoreSelectedNodesOnCreation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bRefreshContainingNodesOnMove,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bDisableTooltip,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bHighlightContainingNodesOnSelection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_IgnoredGraphs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_IgnoredGraphs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bSuppressSuggestedSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bSuppressSourceControlNotification,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bHideResizeButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bHideHeaderButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bHidePresets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bHideRandomizeButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bHideCommentBoxControls,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bHideCornerPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bEnableFixForSortDepthIssue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bDebugGraph_ASC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::NewProp_bDisablePackageCleanup,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAutoSizeCommentsSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::ClassParams = {
		&UAutoSizeCommentsSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAutoSizeCommentsSettings()
	{
		if (!Z_Registration_Info_UClass_UAutoSizeCommentsSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAutoSizeCommentsSettings.OuterSingleton, Z_Construct_UClass_UAutoSizeCommentsSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAutoSizeCommentsSettings.OuterSingleton;
	}
	template<> AUTOSIZECOMMENTS_API UClass* StaticClass<UAutoSizeCommentsSettings>()
	{
		return UAutoSizeCommentsSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAutoSizeCommentsSettings);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_AutoSizeComments_Source_AutoSizeComments_Public_AutoSizeCommentsSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_AutoSizeComments_Source_AutoSizeComments_Public_AutoSizeCommentsSettings_h_Statics::EnumInfo[] = {
		{ EASCResizingMode_StaticEnum, TEXT("EASCResizingMode"), &Z_Registration_Info_UEnum_EASCResizingMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4016103422U) },
		{ ECommentCollisionMethod_StaticEnum, TEXT("ECommentCollisionMethod"), &Z_Registration_Info_UEnum_ECommentCollisionMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 834965393U) },
		{ EASCAutoInsertComment_StaticEnum, TEXT("EASCAutoInsertComment"), &Z_Registration_Info_UEnum_EASCAutoInsertComment, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4040046539U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_AutoSizeComments_Source_AutoSizeComments_Public_AutoSizeCommentsSettings_h_Statics::ScriptStructInfo[] = {
		{ FPresetCommentStyle::StaticStruct, Z_Construct_UScriptStruct_FPresetCommentStyle_Statics::NewStructOps, TEXT("PresetCommentStyle"), &Z_Registration_Info_UScriptStruct_PresetCommentStyle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPresetCommentStyle), 3039853973U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_AutoSizeComments_Source_AutoSizeComments_Public_AutoSizeCommentsSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAutoSizeCommentsSettings, UAutoSizeCommentsSettings::StaticClass, TEXT("UAutoSizeCommentsSettings"), &Z_Registration_Info_UClass_UAutoSizeCommentsSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAutoSizeCommentsSettings), 3999273900U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_AutoSizeComments_Source_AutoSizeComments_Public_AutoSizeCommentsSettings_h_1140672900(TEXT("/Script/AutoSizeComments"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_AutoSizeComments_Source_AutoSizeComments_Public_AutoSizeCommentsSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_AutoSizeComments_Source_AutoSizeComments_Public_AutoSizeCommentsSettings_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_AutoSizeComments_Source_AutoSizeComments_Public_AutoSizeCommentsSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_AutoSizeComments_Source_AutoSizeComments_Public_AutoSizeCommentsSettings_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_AutoSizeComments_Source_AutoSizeComments_Public_AutoSizeCommentsSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_AutoSizeComments_Source_AutoSizeComments_Public_AutoSizeCommentsSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
