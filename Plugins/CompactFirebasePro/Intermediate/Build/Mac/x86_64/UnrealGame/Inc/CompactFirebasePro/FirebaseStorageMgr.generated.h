// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UStorageController;
#ifdef COMPACTFIREBASEPRO_FirebaseStorageMgr_generated_h
#error "FirebaseStorageMgr.generated.h already included, missing '#pragma once' in FirebaseStorageMgr.h"
#endif
#define COMPACTFIREBASEPRO_FirebaseStorageMgr_generated_h

#define FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseStorageMgr_h_12_DELEGATE \
struct _Script_CompactFirebasePro_eventFirebaseStorageDelegate_Parms \
{ \
	int32 RetCode; \
	FString RetMsg; \
}; \
static inline void FFirebaseStorageDelegate_DelegateWrapper(const FScriptDelegate& FirebaseStorageDelegate, int32 RetCode, const FString& RetMsg) \
{ \
	_Script_CompactFirebasePro_eventFirebaseStorageDelegate_Parms Parms; \
	Parms.RetCode=RetCode; \
	Parms.RetMsg=RetMsg; \
	FirebaseStorageDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseStorageMgr_h_27_SPARSE_DATA
#define FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseStorageMgr_h_27_RPC_WRAPPERS
#define FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseStorageMgr_h_27_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseStorageMgr_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStorageRequestUnion(); \
	friend struct Z_Construct_UClass_UStorageRequestUnion_Statics; \
public: \
	DECLARE_CLASS(UStorageRequestUnion, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CompactFirebasePro"), NO_API) \
	DECLARE_SERIALIZER(UStorageRequestUnion)


#define FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseStorageMgr_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUStorageRequestUnion(); \
	friend struct Z_Construct_UClass_UStorageRequestUnion_Statics; \
public: \
	DECLARE_CLASS(UStorageRequestUnion, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CompactFirebasePro"), NO_API) \
	DECLARE_SERIALIZER(UStorageRequestUnion)


#define FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseStorageMgr_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStorageRequestUnion(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStorageRequestUnion) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStorageRequestUnion); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStorageRequestUnion); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStorageRequestUnion(UStorageRequestUnion&&); \
	NO_API UStorageRequestUnion(const UStorageRequestUnion&); \
public:


#define FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseStorageMgr_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStorageRequestUnion(UStorageRequestUnion&&); \
	NO_API UStorageRequestUnion(const UStorageRequestUnion&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStorageRequestUnion); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStorageRequestUnion); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStorageRequestUnion)


#define FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseStorageMgr_h_24_PROLOG
#define FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseStorageMgr_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseStorageMgr_h_27_SPARSE_DATA \
	FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseStorageMgr_h_27_RPC_WRAPPERS \
	FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseStorageMgr_h_27_INCLASS \
	FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseStorageMgr_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseStorageMgr_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseStorageMgr_h_27_SPARSE_DATA \
	FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseStorageMgr_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseStorageMgr_h_27_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseStorageMgr_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMPACTFIREBASEPRO_API UClass* StaticClass<class UStorageRequestUnion>();

#define FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseStorageMgr_h_60_SPARSE_DATA
#define FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseStorageMgr_h_60_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsTransferring); \
	DECLARE_FUNCTION(execIsPaused); \
	DECLARE_FUNCTION(execIsValidTransfer); \
	DECLARE_FUNCTION(execGetProgress); \
	DECLARE_FUNCTION(execGetTotalBytes); \
	DECLARE_FUNCTION(execGetTransferedBytes); \
	DECLARE_FUNCTION(execCancel); \
	DECLARE_FUNCTION(execResume); \
	DECLARE_FUNCTION(execPause);


#define FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseStorageMgr_h_60_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsTransferring); \
	DECLARE_FUNCTION(execIsPaused); \
	DECLARE_FUNCTION(execIsValidTransfer); \
	DECLARE_FUNCTION(execGetProgress); \
	DECLARE_FUNCTION(execGetTotalBytes); \
	DECLARE_FUNCTION(execGetTransferedBytes); \
	DECLARE_FUNCTION(execCancel); \
	DECLARE_FUNCTION(execResume); \
	DECLARE_FUNCTION(execPause);


#define FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseStorageMgr_h_60_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStorageController(); \
	friend struct Z_Construct_UClass_UStorageController_Statics; \
public: \
	DECLARE_CLASS(UStorageController, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CompactFirebasePro"), NO_API) \
	DECLARE_SERIALIZER(UStorageController)


#define FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseStorageMgr_h_60_INCLASS \
private: \
	static void StaticRegisterNativesUStorageController(); \
	friend struct Z_Construct_UClass_UStorageController_Statics; \
public: \
	DECLARE_CLASS(UStorageController, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CompactFirebasePro"), NO_API) \
	DECLARE_SERIALIZER(UStorageController)


#define FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseStorageMgr_h_60_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStorageController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStorageController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStorageController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStorageController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStorageController(UStorageController&&); \
	NO_API UStorageController(const UStorageController&); \
public:


#define FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseStorageMgr_h_60_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStorageController(UStorageController&&); \
	NO_API UStorageController(const UStorageController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStorageController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStorageController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStorageController)


#define FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseStorageMgr_h_57_PROLOG
#define FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseStorageMgr_h_60_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseStorageMgr_h_60_SPARSE_DATA \
	FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseStorageMgr_h_60_RPC_WRAPPERS \
	FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseStorageMgr_h_60_INCLASS \
	FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseStorageMgr_h_60_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseStorageMgr_h_60_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseStorageMgr_h_60_SPARSE_DATA \
	FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseStorageMgr_h_60_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseStorageMgr_h_60_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseStorageMgr_h_60_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMPACTFIREBASEPRO_API UClass* StaticClass<class UStorageController>();

#define FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseStorageMgr_h_98_SPARSE_DATA
#define FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseStorageMgr_h_98_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetUploadController); \
	DECLARE_FUNCTION(execGetDownloadController); \
	DECLARE_FUNCTION(execDelete); \
	DECLARE_FUNCTION(execDownload); \
	DECLARE_FUNCTION(execUpload);


#define FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseStorageMgr_h_98_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetUploadController); \
	DECLARE_FUNCTION(execGetDownloadController); \
	DECLARE_FUNCTION(execDelete); \
	DECLARE_FUNCTION(execDownload); \
	DECLARE_FUNCTION(execUpload);


#define FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseStorageMgr_h_98_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFirebaseStorageMgr(); \
	friend struct Z_Construct_UClass_UFirebaseStorageMgr_Statics; \
public: \
	DECLARE_CLASS(UFirebaseStorageMgr, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/CompactFirebasePro"), NO_API) \
	DECLARE_SERIALIZER(UFirebaseStorageMgr) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseStorageMgr_h_98_INCLASS \
private: \
	static void StaticRegisterNativesUFirebaseStorageMgr(); \
	friend struct Z_Construct_UClass_UFirebaseStorageMgr_Statics; \
public: \
	DECLARE_CLASS(UFirebaseStorageMgr, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/CompactFirebasePro"), NO_API) \
	DECLARE_SERIALIZER(UFirebaseStorageMgr) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseStorageMgr_h_98_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFirebaseStorageMgr(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFirebaseStorageMgr) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFirebaseStorageMgr); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFirebaseStorageMgr); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFirebaseStorageMgr(UFirebaseStorageMgr&&); \
	NO_API UFirebaseStorageMgr(const UFirebaseStorageMgr&); \
public:


#define FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseStorageMgr_h_98_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFirebaseStorageMgr(UFirebaseStorageMgr&&); \
	NO_API UFirebaseStorageMgr(const UFirebaseStorageMgr&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFirebaseStorageMgr); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFirebaseStorageMgr); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFirebaseStorageMgr)


#define FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseStorageMgr_h_95_PROLOG
#define FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseStorageMgr_h_98_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseStorageMgr_h_98_SPARSE_DATA \
	FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseStorageMgr_h_98_RPC_WRAPPERS \
	FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseStorageMgr_h_98_INCLASS \
	FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseStorageMgr_h_98_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseStorageMgr_h_98_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseStorageMgr_h_98_SPARSE_DATA \
	FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseStorageMgr_h_98_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseStorageMgr_h_98_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseStorageMgr_h_98_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMPACTFIREBASEPRO_API UClass* StaticClass<class UFirebaseStorageMgr>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirebaseStorageMgr_h


#define FOREACH_ENUM_EFIRESTORESTROAGEOPER(op) \
	op(EFirestoreStroageOper::EFSO_None) \
	op(EFirestoreStroageOper::EFSO_Upload) \
	op(EFirestoreStroageOper::EFSO_Download) \
	op(EFirestoreStroageOper::EFSO_Delete) 

enum class EFirestoreStroageOper : uint8;
template<> COMPACTFIREBASEPRO_API UEnum* StaticEnum<EFirestoreStroageOper>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
