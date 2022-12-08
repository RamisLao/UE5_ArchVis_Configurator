// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COMPACTFIREBASEPRO_FirebaseAuthMgr_generated_h
#error "FirebaseAuthMgr.generated.h already included, missing '#pragma once' in FirebaseAuthMgr.h"
#endif
#define COMPACTFIREBASEPRO_FirebaseAuthMgr_generated_h

#define FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseAuthMgr_h_10_DELEGATE \
struct _Script_CompactFirebasePro_eventAuthRetDelegate_Parms \
{ \
	FString Email; \
	int32 RetCode; \
	FString RetMsg; \
}; \
static inline void FAuthRetDelegate_DelegateWrapper(const FScriptDelegate& AuthRetDelegate, const FString& Email, int32 RetCode, const FString& RetMsg) \
{ \
	_Script_CompactFirebasePro_eventAuthRetDelegate_Parms Parms; \
	Parms.Email=Email; \
	Parms.RetCode=RetCode; \
	Parms.RetMsg=RetMsg; \
	AuthRetDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseAuthMgr_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FResponseUnion_Statics; \
	COMPACTFIREBASEPRO_API static class UScriptStruct* StaticStruct();


template<> COMPACTFIREBASEPRO_API UScriptStruct* StaticStruct<struct FResponseUnion>();

#define FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseAuthMgr_h_43_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRequestUID_Statics; \
	COMPACTFIREBASEPRO_API static class UScriptStruct* StaticStruct();


template<> COMPACTFIREBASEPRO_API UScriptStruct* StaticStruct<struct FRequestUID>();

#define FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseAuthMgr_h_85_SPARSE_DATA
#define FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseAuthMgr_h_85_RPC_WRAPPERS
#define FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseAuthMgr_h_85_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseAuthMgr_h_85_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURequestUnion(); \
	friend struct Z_Construct_UClass_URequestUnion_Statics; \
public: \
	DECLARE_CLASS(URequestUnion, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CompactFirebasePro"), NO_API) \
	DECLARE_SERIALIZER(URequestUnion)


#define FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseAuthMgr_h_85_INCLASS \
private: \
	static void StaticRegisterNativesURequestUnion(); \
	friend struct Z_Construct_UClass_URequestUnion_Statics; \
public: \
	DECLARE_CLASS(URequestUnion, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CompactFirebasePro"), NO_API) \
	DECLARE_SERIALIZER(URequestUnion)


#define FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseAuthMgr_h_85_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URequestUnion(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URequestUnion) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URequestUnion); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URequestUnion); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URequestUnion(URequestUnion&&); \
	NO_API URequestUnion(const URequestUnion&); \
public:


#define FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseAuthMgr_h_85_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URequestUnion(URequestUnion&&); \
	NO_API URequestUnion(const URequestUnion&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URequestUnion); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URequestUnion); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URequestUnion)


#define FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseAuthMgr_h_82_PROLOG
#define FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseAuthMgr_h_85_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseAuthMgr_h_85_SPARSE_DATA \
	FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseAuthMgr_h_85_RPC_WRAPPERS \
	FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseAuthMgr_h_85_INCLASS \
	FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseAuthMgr_h_85_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseAuthMgr_h_85_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseAuthMgr_h_85_SPARSE_DATA \
	FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseAuthMgr_h_85_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseAuthMgr_h_85_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseAuthMgr_h_85_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMPACTFIREBASEPRO_API UClass* StaticClass<class URequestUnion>();

#define FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseAuthMgr_h_101_SPARSE_DATA
#define FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseAuthMgr_h_101_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLogout); \
	DECLARE_FUNCTION(execSendPasswordResetEmail); \
	DECLARE_FUNCTION(execLogin); \
	DECLARE_FUNCTION(execRegister);


#define FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseAuthMgr_h_101_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLogout); \
	DECLARE_FUNCTION(execSendPasswordResetEmail); \
	DECLARE_FUNCTION(execLogin); \
	DECLARE_FUNCTION(execRegister);


#define FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseAuthMgr_h_101_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFirebaseAuthMgr(); \
	friend struct Z_Construct_UClass_UFirebaseAuthMgr_Statics; \
public: \
	DECLARE_CLASS(UFirebaseAuthMgr, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/CompactFirebasePro"), NO_API) \
	DECLARE_SERIALIZER(UFirebaseAuthMgr) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseAuthMgr_h_101_INCLASS \
private: \
	static void StaticRegisterNativesUFirebaseAuthMgr(); \
	friend struct Z_Construct_UClass_UFirebaseAuthMgr_Statics; \
public: \
	DECLARE_CLASS(UFirebaseAuthMgr, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/CompactFirebasePro"), NO_API) \
	DECLARE_SERIALIZER(UFirebaseAuthMgr) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseAuthMgr_h_101_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFirebaseAuthMgr(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFirebaseAuthMgr) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFirebaseAuthMgr); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFirebaseAuthMgr); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFirebaseAuthMgr(UFirebaseAuthMgr&&); \
	NO_API UFirebaseAuthMgr(const UFirebaseAuthMgr&); \
public:


#define FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseAuthMgr_h_101_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFirebaseAuthMgr(UFirebaseAuthMgr&&); \
	NO_API UFirebaseAuthMgr(const UFirebaseAuthMgr&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFirebaseAuthMgr); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFirebaseAuthMgr); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFirebaseAuthMgr)


#define FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseAuthMgr_h_98_PROLOG
#define FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseAuthMgr_h_101_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseAuthMgr_h_101_SPARSE_DATA \
	FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseAuthMgr_h_101_RPC_WRAPPERS \
	FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseAuthMgr_h_101_INCLASS \
	FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseAuthMgr_h_101_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseAuthMgr_h_101_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseAuthMgr_h_101_SPARSE_DATA \
	FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseAuthMgr_h_101_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseAuthMgr_h_101_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseAuthMgr_h_101_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMPACTFIREBASEPRO_API UClass* StaticClass<class UFirebaseAuthMgr>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseAuthMgr_h


#define FOREACH_ENUM_EREQUESTTYPE(op) \
	op(ERequestType::ERT_None) \
	op(ERequestType::ERT_Registration) \
	op(ERequestType::ERT_Login) \
	op(ERequestType::ERT_ChangePassword) 

enum class ERequestType : uint8;
template<> COMPACTFIREBASEPRO_API UEnum* StaticEnum<ERequestType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
