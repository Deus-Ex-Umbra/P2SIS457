// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef P2SIS457_Pez_generated_h
#error "Pez.generated.h already included, missing '#pragma once' in Pez.h"
#endif
#define P2SIS457_Pez_generated_h

#define P2SIS457_Source_P2SIS457_Pez_h_10_SPARSE_DATA
#define P2SIS457_Source_P2SIS457_Pez_h_10_RPC_WRAPPERS
#define P2SIS457_Source_P2SIS457_Pez_h_10_RPC_WRAPPERS_NO_PURE_DECLS
#define P2SIS457_Source_P2SIS457_Pez_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPez(); \
	friend struct Z_Construct_UClass_APez_Statics; \
public: \
	DECLARE_CLASS(APez, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/P2SIS457"), NO_API) \
	DECLARE_SERIALIZER(APez)


#define P2SIS457_Source_P2SIS457_Pez_h_10_INCLASS \
private: \
	static void StaticRegisterNativesAPez(); \
	friend struct Z_Construct_UClass_APez_Statics; \
public: \
	DECLARE_CLASS(APez, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/P2SIS457"), NO_API) \
	DECLARE_SERIALIZER(APez)


#define P2SIS457_Source_P2SIS457_Pez_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APez(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APez) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APez); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APez); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APez(APez&&); \
	NO_API APez(const APez&); \
public:


#define P2SIS457_Source_P2SIS457_Pez_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APez(APez&&); \
	NO_API APez(const APez&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APez); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APez); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(APez)


#define P2SIS457_Source_P2SIS457_Pez_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PezMesh() { return STRUCT_OFFSET(APez, PezMesh); } \
	FORCEINLINE static uint32 __PPO__PezMaterial() { return STRUCT_OFFSET(APez, PezMaterial); } \
	FORCEINLINE static uint32 __PPO__SceneComponent() { return STRUCT_OFFSET(APez, SceneComponent); }


#define P2SIS457_Source_P2SIS457_Pez_h_7_PROLOG
#define P2SIS457_Source_P2SIS457_Pez_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	P2SIS457_Source_P2SIS457_Pez_h_10_PRIVATE_PROPERTY_OFFSET \
	P2SIS457_Source_P2SIS457_Pez_h_10_SPARSE_DATA \
	P2SIS457_Source_P2SIS457_Pez_h_10_RPC_WRAPPERS \
	P2SIS457_Source_P2SIS457_Pez_h_10_INCLASS \
	P2SIS457_Source_P2SIS457_Pez_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define P2SIS457_Source_P2SIS457_Pez_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	P2SIS457_Source_P2SIS457_Pez_h_10_PRIVATE_PROPERTY_OFFSET \
	P2SIS457_Source_P2SIS457_Pez_h_10_SPARSE_DATA \
	P2SIS457_Source_P2SIS457_Pez_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	P2SIS457_Source_P2SIS457_Pez_h_10_INCLASS_NO_PURE_DECLS \
	P2SIS457_Source_P2SIS457_Pez_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> P2SIS457_API UClass* StaticClass<class APez>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID P2SIS457_Source_P2SIS457_Pez_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
