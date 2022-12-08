// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFirestoreSnapshot;
class UFirebaseDocument;
 class UFirestoreFieldValue;
class UObject;
class UFirestoreFieldValue;
class UFirebaseCollection;
#ifdef COMPACTFIREBASEPRO_FirestoreMgr_generated_h
#error "FirestoreMgr.generated.h already included, missing '#pragma once' in FirestoreMgr.h"
#endif
#define COMPACTFIREBASEPRO_FirestoreMgr_generated_h

#define FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirestoreMgr_h_9_DELEGATE \
struct _Script_CompactFirebasePro_eventFirestoreRespDel_Parms \
{ \
	int32 RetCode; \
	FString RetMsg; \
	UFirestoreSnapshot* Snapshot; \
}; \
static inline void FFirestoreRespDel_DelegateWrapper(const FScriptDelegate& FirestoreRespDel, int32 RetCode, const FString& RetMsg, UFirestoreSnapshot* Snapshot) \
{ \
	_Script_CompactFirebasePro_eventFirestoreRespDel_Parms Parms; \
	Parms.RetCode=RetCode; \
	Parms.RetMsg=RetMsg; \
	Parms.Snapshot=Snapshot; \
	FirestoreRespDel.ProcessDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirestoreMgr_h_24_SPARSE_DATA
#define FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirestoreMgr_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetDocument); \
	DECLARE_FUNCTION(execGetPath); \
	DECLARE_FUNCTION(execGetID);


#define FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirestoreMgr_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetDocument); \
	DECLARE_FUNCTION(execGetPath); \
	DECLARE_FUNCTION(execGetID);


#define FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirestoreMgr_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFirebaseCollection(); \
	friend struct Z_Construct_UClass_UFirebaseCollection_Statics; \
public: \
	DECLARE_CLASS(UFirebaseCollection, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CompactFirebasePro"), NO_API) \
	DECLARE_SERIALIZER(UFirebaseCollection)


#define FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirestoreMgr_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUFirebaseCollection(); \
	friend struct Z_Construct_UClass_UFirebaseCollection_Statics; \
public: \
	DECLARE_CLASS(UFirebaseCollection, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CompactFirebasePro"), NO_API) \
	DECLARE_SERIALIZER(UFirebaseCollection)


#define FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirestoreMgr_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFirebaseCollection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFirebaseCollection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFirebaseCollection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFirebaseCollection); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFirebaseCollection(UFirebaseCollection&&); \
	NO_API UFirebaseCollection(const UFirebaseCollection&); \
public:


#define FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirestoreMgr_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFirebaseCollection(UFirebaseCollection&&); \
	NO_API UFirebaseCollection(const UFirebaseCollection&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFirebaseCollection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFirebaseCollection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFirebaseCollection)


#define FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirestoreMgr_h_21_PROLOG
#define FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirestoreMgr_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirestoreMgr_h_24_SPARSE_DATA \
	FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirestoreMgr_h_24_RPC_WRAPPERS \
	FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirestoreMgr_h_24_INCLASS \
	FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirestoreMgr_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirestoreMgr_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirestoreMgr_h_24_SPARSE_DATA \
	FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirestoreMgr_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirestoreMgr_h_24_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirestoreMgr_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMPACTFIREBASEPRO_API UClass* StaticClass<class UFirebaseCollection>();

#define FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirestoreMgr_h_49_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFirestoreResponse_Statics; \
	COMPACTFIREBASEPRO_API static class UScriptStruct* StaticStruct();


template<> COMPACTFIREBASEPRO_API UScriptStruct* StaticStruct<struct FFirestoreResponse>();

#define FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirestoreMgr_h_75_SPARSE_DATA
#define FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirestoreMgr_h_75_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDelete); \
	DECLARE_FUNCTION(execGetSnapshot); \
	DECLARE_FUNCTION(execUpdateValue); \
	DECLARE_FUNCTION(execSetValue); \
	DECLARE_FUNCTION(execGetPath); \
	DECLARE_FUNCTION(execGetID);


#define FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirestoreMgr_h_75_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDelete); \
	DECLARE_FUNCTION(execGetSnapshot); \
	DECLARE_FUNCTION(execUpdateValue); \
	DECLARE_FUNCTION(execSetValue); \
	DECLARE_FUNCTION(execGetPath); \
	DECLARE_FUNCTION(execGetID);


#define FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirestoreMgr_h_75_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFirebaseDocument(); \
	friend struct Z_Construct_UClass_UFirebaseDocument_Statics; \
public: \
	DECLARE_CLASS(UFirebaseDocument, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CompactFirebasePro"), NO_API) \
	DECLARE_SERIALIZER(UFirebaseDocument)


#define FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirestoreMgr_h_75_INCLASS \
private: \
	static void StaticRegisterNativesUFirebaseDocument(); \
	friend struct Z_Construct_UClass_UFirebaseDocument_Statics; \
public: \
	DECLARE_CLASS(UFirebaseDocument, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CompactFirebasePro"), NO_API) \
	DECLARE_SERIALIZER(UFirebaseDocument)


#define FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirestoreMgr_h_75_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFirebaseDocument(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFirebaseDocument) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFirebaseDocument); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFirebaseDocument); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFirebaseDocument(UFirebaseDocument&&); \
	NO_API UFirebaseDocument(const UFirebaseDocument&); \
public:


#define FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirestoreMgr_h_75_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFirebaseDocument(UFirebaseDocument&&); \
	NO_API UFirebaseDocument(const UFirebaseDocument&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFirebaseDocument); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFirebaseDocument); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFirebaseDocument)


#define FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirestoreMgr_h_72_PROLOG
#define FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirestoreMgr_h_75_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirestoreMgr_h_75_SPARSE_DATA \
	FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirestoreMgr_h_75_RPC_WRAPPERS \
	FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirestoreMgr_h_75_INCLASS \
	FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirestoreMgr_h_75_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirestoreMgr_h_75_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirestoreMgr_h_75_SPARSE_DATA \
	FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirestoreMgr_h_75_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirestoreMgr_h_75_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirestoreMgr_h_75_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMPACTFIREBASEPRO_API UClass* StaticClass<class UFirebaseDocument>();

#define FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirestoreMgr_h_123_SPARSE_DATA
#define FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirestoreMgr_h_123_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFirestoreMap); \
	DECLARE_FUNCTION(execFirestoreArrayUnion); \
	DECLARE_FUNCTION(execFirestoreArrayRemove); \
	DECLARE_FUNCTION(execFirestoreArray); \
	DECLARE_FUNCTION(execFirestoreReference); \
	DECLARE_FUNCTION(execFirestoreString); \
	DECLARE_FUNCTION(execFirestoreBoolean); \
	DECLARE_FUNCTION(execFirestoreFloat); \
	DECLARE_FUNCTION(execFirestoreInteger); \
	DECLARE_FUNCTION(execGetDocument); \
	DECLARE_FUNCTION(execGetCollection);


#define FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirestoreMgr_h_123_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFirestoreMap); \
	DECLARE_FUNCTION(execFirestoreArrayUnion); \
	DECLARE_FUNCTION(execFirestoreArrayRemove); \
	DECLARE_FUNCTION(execFirestoreArray); \
	DECLARE_FUNCTION(execFirestoreReference); \
	DECLARE_FUNCTION(execFirestoreString); \
	DECLARE_FUNCTION(execFirestoreBoolean); \
	DECLARE_FUNCTION(execFirestoreFloat); \
	DECLARE_FUNCTION(execFirestoreInteger); \
	DECLARE_FUNCTION(execGetDocument); \
	DECLARE_FUNCTION(execGetCollection);


#define FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirestoreMgr_h_123_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFirestoreMgr(); \
	friend struct Z_Construct_UClass_UFirestoreMgr_Statics; \
public: \
	DECLARE_CLASS(UFirestoreMgr, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CompactFirebasePro"), NO_API) \
	DECLARE_SERIALIZER(UFirestoreMgr)


#define FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirestoreMgr_h_123_INCLASS \
private: \
	static void StaticRegisterNativesUFirestoreMgr(); \
	friend struct Z_Construct_UClass_UFirestoreMgr_Statics; \
public: \
	DECLARE_CLASS(UFirestoreMgr, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CompactFirebasePro"), NO_API) \
	DECLARE_SERIALIZER(UFirestoreMgr)


#define FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirestoreMgr_h_123_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFirestoreMgr(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFirestoreMgr) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFirestoreMgr); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFirestoreMgr); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFirestoreMgr(UFirestoreMgr&&); \
	NO_API UFirestoreMgr(const UFirestoreMgr&); \
public:


#define FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirestoreMgr_h_123_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFirestoreMgr(UFirestoreMgr&&); \
	NO_API UFirestoreMgr(const UFirestoreMgr&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFirestoreMgr); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFirestoreMgr); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFirestoreMgr)


#define FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirestoreMgr_h_120_PROLOG
#define FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirestoreMgr_h_123_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirestoreMgr_h_123_SPARSE_DATA \
	FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirestoreMgr_h_123_RPC_WRAPPERS \
	FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirestoreMgr_h_123_INCLASS \
	FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirestoreMgr_h_123_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirestoreMgr_h_123_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirestoreMgr_h_123_SPARSE_DATA \
	FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirestoreMgr_h_123_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirestoreMgr_h_123_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirestoreMgr_h_123_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMPACTFIREBASEPRO_API UClass* StaticClass<class UFirestoreMgr>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_CompactFirebasePro_Source_CompactFirebasePro_Private_Firebase_FirestoreMgr_h


#define FOREACH_ENUM_EFIRESTOREOPER(op) \
	op(EFirestoreOper::EFO_None) \
	op(EFirestoreOper::EFO_Set) \
	op(EFirestoreOper::EFO_Update) \
	op(EFirestoreOper::EFO_Get) \
	op(EFirestoreOper::EFO_Delete) 

enum class EFirestoreOper : uint8;
template<> COMPACTFIREBASEPRO_API UEnum* StaticEnum<EFirestoreOper>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
