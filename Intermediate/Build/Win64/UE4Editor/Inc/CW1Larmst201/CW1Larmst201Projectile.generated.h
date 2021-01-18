// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef CW1LARMST201_CW1Larmst201Projectile_generated_h
#error "CW1Larmst201Projectile.generated.h already included, missing '#pragma once' in CW1Larmst201Projectile.h"
#endif
#define CW1LARMST201_CW1Larmst201Projectile_generated_h

#define CW1Larmst201_Source_CW1Larmst201_CW1Larmst201Projectile_h_15_SPARSE_DATA
#define CW1Larmst201_Source_CW1Larmst201_CW1Larmst201Projectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define CW1Larmst201_Source_CW1Larmst201_CW1Larmst201Projectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define CW1Larmst201_Source_CW1Larmst201_CW1Larmst201Projectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACW1Larmst201Projectile(); \
	friend struct Z_Construct_UClass_ACW1Larmst201Projectile_Statics; \
public: \
	DECLARE_CLASS(ACW1Larmst201Projectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CW1Larmst201"), NO_API) \
	DECLARE_SERIALIZER(ACW1Larmst201Projectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define CW1Larmst201_Source_CW1Larmst201_CW1Larmst201Projectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesACW1Larmst201Projectile(); \
	friend struct Z_Construct_UClass_ACW1Larmst201Projectile_Statics; \
public: \
	DECLARE_CLASS(ACW1Larmst201Projectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CW1Larmst201"), NO_API) \
	DECLARE_SERIALIZER(ACW1Larmst201Projectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define CW1Larmst201_Source_CW1Larmst201_CW1Larmst201Projectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACW1Larmst201Projectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACW1Larmst201Projectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACW1Larmst201Projectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACW1Larmst201Projectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACW1Larmst201Projectile(ACW1Larmst201Projectile&&); \
	NO_API ACW1Larmst201Projectile(const ACW1Larmst201Projectile&); \
public:


#define CW1Larmst201_Source_CW1Larmst201_CW1Larmst201Projectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACW1Larmst201Projectile(ACW1Larmst201Projectile&&); \
	NO_API ACW1Larmst201Projectile(const ACW1Larmst201Projectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACW1Larmst201Projectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACW1Larmst201Projectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACW1Larmst201Projectile)


#define CW1Larmst201_Source_CW1Larmst201_CW1Larmst201Projectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(ACW1Larmst201Projectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(ACW1Larmst201Projectile, ProjectileMovement); }


#define CW1Larmst201_Source_CW1Larmst201_CW1Larmst201Projectile_h_12_PROLOG
#define CW1Larmst201_Source_CW1Larmst201_CW1Larmst201Projectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CW1Larmst201_Source_CW1Larmst201_CW1Larmst201Projectile_h_15_PRIVATE_PROPERTY_OFFSET \
	CW1Larmst201_Source_CW1Larmst201_CW1Larmst201Projectile_h_15_SPARSE_DATA \
	CW1Larmst201_Source_CW1Larmst201_CW1Larmst201Projectile_h_15_RPC_WRAPPERS \
	CW1Larmst201_Source_CW1Larmst201_CW1Larmst201Projectile_h_15_INCLASS \
	CW1Larmst201_Source_CW1Larmst201_CW1Larmst201Projectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CW1Larmst201_Source_CW1Larmst201_CW1Larmst201Projectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CW1Larmst201_Source_CW1Larmst201_CW1Larmst201Projectile_h_15_PRIVATE_PROPERTY_OFFSET \
	CW1Larmst201_Source_CW1Larmst201_CW1Larmst201Projectile_h_15_SPARSE_DATA \
	CW1Larmst201_Source_CW1Larmst201_CW1Larmst201Projectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	CW1Larmst201_Source_CW1Larmst201_CW1Larmst201Projectile_h_15_INCLASS_NO_PURE_DECLS \
	CW1Larmst201_Source_CW1Larmst201_CW1Larmst201Projectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CW1LARMST201_API UClass* StaticClass<class ACW1Larmst201Projectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CW1Larmst201_Source_CW1Larmst201_CW1Larmst201Projectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
