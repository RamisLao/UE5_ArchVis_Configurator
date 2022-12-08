// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFirebaseStorageMgr;
class UFirestoreMgr;
class UFirebaseAuthMgr;
class UObject;
class AFirebaseProxy;
#ifdef COMPACTFIREBASEPRO_FirebaseProxy_generated_h
#error "FirebaseProxy.generated.h already included, missing '#pragma once' in FirebaseProxy.h"
#endif
#define COMPACTFIREBASEPRO_FirebaseProxy_generated_h

#define FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseProxy_h_15_SPARSE_DATA
#define FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseProxy_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetStorageMgr); \
	DECLARE_FUNCTION(execGetFirestoreMgr); \
	DECLARE_FUNCTION(execGetAuthMgr); \
	DECLARE_FUNCTION(execGetFirebaseProxy); \
	DECLARE_FUNCTION(execGetStorageManager); \
	DECLARE_FUNCTION(execGetFirestoreManager); \
	DECLARE_FUNCTION(execGetFirebaseAuthManager);


#define FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseProxy_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetStorageMgr); \
	DECLARE_FUNCTION(execGetFirestoreMgr); \
	DECLARE_FUNCTION(execGetAuthMgr); \
	DECLARE_FUNCTION(execGetFirebaseProxy); \
	DECLARE_FUNCTION(execGetStorageManager); \
	DECLARE_FUNCTION(execGetFirestoreManager); \
	DECLARE_FUNCTION(execGetFirebaseAuthManager);


#define FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseProxy_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFirebaseProxy(); \
	friend struct Z_Construct_UClass_AFirebaseProxy_Statics; \
public: \
	DECLARE_CLASS(AFirebaseProxy, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CompactFirebasePro"), NO_API) \
	DECLARE_SERIALIZER(AFirebaseProxy)


#define FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseProxy_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAFirebaseProxy(); \
	friend struct Z_Construct_UClass_AFirebaseProxy_Statics; \
public: \
	DECLARE_CLASS(AFirebaseProxy, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CompactFirebasePro"), NO_API) \
	DECLARE_SERIALIZER(AFirebaseProxy)


#define FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseProxy_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFirebaseProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFirebaseProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFirebaseProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFirebaseProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFirebaseProxy(AFirebaseProxy&&); \
	NO_API AFirebaseProxy(const AFirebaseProxy&); \
public:


#define FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseProxy_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFirebaseProxy(AFirebaseProxy&&); \
	NO_API AFirebaseProxy(const AFirebaseProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFirebaseProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFirebaseProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFirebaseProxy)


#define FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseProxy_h_12_PROLOG
#define FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseProxy_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseProxy_h_15_SPARSE_DATA \
	FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseProxy_h_15_RPC_WRAPPERS \
	FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseProxy_h_15_INCLASS \
	FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseProxy_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseProxy_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseProxy_h_15_SPARSE_DATA \
	FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseProxy_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseProxy_h_15_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseProxy_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMPACTFIREBASEPRO_API UClass* StaticClass<class AFirebaseProxy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseProxy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
