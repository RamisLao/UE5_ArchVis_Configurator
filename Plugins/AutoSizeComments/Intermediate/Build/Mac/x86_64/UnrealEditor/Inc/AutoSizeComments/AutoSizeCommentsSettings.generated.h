// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AUTOSIZECOMMENTS_AutoSizeCommentsSettings_generated_h
#error "AutoSizeCommentsSettings.generated.h already included, missing '#pragma once' in AutoSizeCommentsSettings.h"
#endif
#define AUTOSIZECOMMENTS_AutoSizeCommentsSettings_generated_h

#define FID_HostProject_Plugins_AutoSizeComments_Source_AutoSizeComments_Public_AutoSizeCommentsSettings_h_51_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPresetCommentStyle_Statics; \
	AUTOSIZECOMMENTS_API static class UScriptStruct* StaticStruct();


template<> AUTOSIZECOMMENTS_API UScriptStruct* StaticStruct<struct FPresetCommentStyle>();

#define FID_HostProject_Plugins_AutoSizeComments_Source_AutoSizeComments_Public_AutoSizeCommentsSettings_h_63_SPARSE_DATA
#define FID_HostProject_Plugins_AutoSizeComments_Source_AutoSizeComments_Public_AutoSizeCommentsSettings_h_63_RPC_WRAPPERS
#define FID_HostProject_Plugins_AutoSizeComments_Source_AutoSizeComments_Public_AutoSizeCommentsSettings_h_63_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_HostProject_Plugins_AutoSizeComments_Source_AutoSizeComments_Public_AutoSizeCommentsSettings_h_63_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAutoSizeCommentsSettings(); \
	friend struct Z_Construct_UClass_UAutoSizeCommentsSettings_Statics; \
public: \
	DECLARE_CLASS(UAutoSizeCommentsSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AutoSizeComments"), NO_API) \
	DECLARE_SERIALIZER(UAutoSizeCommentsSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_HostProject_Plugins_AutoSizeComments_Source_AutoSizeComments_Public_AutoSizeCommentsSettings_h_63_INCLASS \
private: \
	static void StaticRegisterNativesUAutoSizeCommentsSettings(); \
	friend struct Z_Construct_UClass_UAutoSizeCommentsSettings_Statics; \
public: \
	DECLARE_CLASS(UAutoSizeCommentsSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AutoSizeComments"), NO_API) \
	DECLARE_SERIALIZER(UAutoSizeCommentsSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_HostProject_Plugins_AutoSizeComments_Source_AutoSizeComments_Public_AutoSizeCommentsSettings_h_63_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAutoSizeCommentsSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAutoSizeCommentsSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAutoSizeCommentsSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAutoSizeCommentsSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAutoSizeCommentsSettings(UAutoSizeCommentsSettings&&); \
	NO_API UAutoSizeCommentsSettings(const UAutoSizeCommentsSettings&); \
public:


#define FID_HostProject_Plugins_AutoSizeComments_Source_AutoSizeComments_Public_AutoSizeCommentsSettings_h_63_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAutoSizeCommentsSettings(UAutoSizeCommentsSettings&&); \
	NO_API UAutoSizeCommentsSettings(const UAutoSizeCommentsSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAutoSizeCommentsSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAutoSizeCommentsSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAutoSizeCommentsSettings)


#define FID_HostProject_Plugins_AutoSizeComments_Source_AutoSizeComments_Public_AutoSizeCommentsSettings_h_60_PROLOG
#define FID_HostProject_Plugins_AutoSizeComments_Source_AutoSizeComments_Public_AutoSizeCommentsSettings_h_63_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_AutoSizeComments_Source_AutoSizeComments_Public_AutoSizeCommentsSettings_h_63_SPARSE_DATA \
	FID_HostProject_Plugins_AutoSizeComments_Source_AutoSizeComments_Public_AutoSizeCommentsSettings_h_63_RPC_WRAPPERS \
	FID_HostProject_Plugins_AutoSizeComments_Source_AutoSizeComments_Public_AutoSizeCommentsSettings_h_63_INCLASS \
	FID_HostProject_Plugins_AutoSizeComments_Source_AutoSizeComments_Public_AutoSizeCommentsSettings_h_63_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_AutoSizeComments_Source_AutoSizeComments_Public_AutoSizeCommentsSettings_h_63_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_AutoSizeComments_Source_AutoSizeComments_Public_AutoSizeCommentsSettings_h_63_SPARSE_DATA \
	FID_HostProject_Plugins_AutoSizeComments_Source_AutoSizeComments_Public_AutoSizeCommentsSettings_h_63_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_AutoSizeComments_Source_AutoSizeComments_Public_AutoSizeCommentsSettings_h_63_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_AutoSizeComments_Source_AutoSizeComments_Public_AutoSizeCommentsSettings_h_63_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUTOSIZECOMMENTS_API UClass* StaticClass<class UAutoSizeCommentsSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_AutoSizeComments_Source_AutoSizeComments_Public_AutoSizeCommentsSettings_h


#define FOREACH_ENUM_EASCRESIZINGMODE(op) \
	op(EASCResizingMode::Always) \
	op(EASCResizingMode::Reactive) \
	op(EASCResizingMode::Disabled) 

enum class EASCResizingMode : uint8;
template<> AUTOSIZECOMMENTS_API UEnum* StaticEnum<EASCResizingMode>();

#define FOREACH_ENUM_ECOMMENTCOLLISIONMETHOD(op) \
	op(ECommentCollisionMethod::Point) \
	op(ECommentCollisionMethod::Intersect) \
	op(ECommentCollisionMethod::Contained) \
	op(ECommentCollisionMethod::Disabled) 

enum class ECommentCollisionMethod : uint8;
template<> AUTOSIZECOMMENTS_API UEnum* StaticEnum<ECommentCollisionMethod>();

#define FOREACH_ENUM_EASCAUTOINSERTCOMMENT(op) \
	op(EASCAutoInsertComment::Never) \
	op(EASCAutoInsertComment::Always) \
	op(EASCAutoInsertComment::Surrounded) 

enum class EASCAutoInsertComment : uint8;
template<> AUTOSIZECOMMENTS_API UEnum* StaticEnum<EASCAutoInsertComment>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
