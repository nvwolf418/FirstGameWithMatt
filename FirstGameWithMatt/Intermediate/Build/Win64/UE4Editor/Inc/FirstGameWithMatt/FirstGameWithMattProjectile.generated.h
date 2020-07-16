// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
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
#ifdef FIRSTGAMEWITHMATT_FirstGameWithMattProjectile_generated_h
#error "FirstGameWithMattProjectile.generated.h already included, missing '#pragma once' in FirstGameWithMattProjectile.h"
#endif
#define FIRSTGAMEWITHMATT_FirstGameWithMattProjectile_generated_h

#define FirstGameWithMatt_Source_FirstGameWithMatt_FirstGameWithMattProjectile_h_12_SPARSE_DATA
#define FirstGameWithMatt_Source_FirstGameWithMatt_FirstGameWithMattProjectile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define FirstGameWithMatt_Source_FirstGameWithMatt_FirstGameWithMattProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define FirstGameWithMatt_Source_FirstGameWithMatt_FirstGameWithMattProjectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFirstGameWithMattProjectile(); \
	friend struct Z_Construct_UClass_AFirstGameWithMattProjectile_Statics; \
public: \
	DECLARE_CLASS(AFirstGameWithMattProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstGameWithMatt"), NO_API) \
	DECLARE_SERIALIZER(AFirstGameWithMattProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FirstGameWithMatt_Source_FirstGameWithMatt_FirstGameWithMattProjectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAFirstGameWithMattProjectile(); \
	friend struct Z_Construct_UClass_AFirstGameWithMattProjectile_Statics; \
public: \
	DECLARE_CLASS(AFirstGameWithMattProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstGameWithMatt"), NO_API) \
	DECLARE_SERIALIZER(AFirstGameWithMattProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FirstGameWithMatt_Source_FirstGameWithMatt_FirstGameWithMattProjectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFirstGameWithMattProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFirstGameWithMattProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFirstGameWithMattProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFirstGameWithMattProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFirstGameWithMattProjectile(AFirstGameWithMattProjectile&&); \
	NO_API AFirstGameWithMattProjectile(const AFirstGameWithMattProjectile&); \
public:


#define FirstGameWithMatt_Source_FirstGameWithMatt_FirstGameWithMattProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFirstGameWithMattProjectile(AFirstGameWithMattProjectile&&); \
	NO_API AFirstGameWithMattProjectile(const AFirstGameWithMattProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFirstGameWithMattProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFirstGameWithMattProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFirstGameWithMattProjectile)


#define FirstGameWithMatt_Source_FirstGameWithMatt_FirstGameWithMattProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AFirstGameWithMattProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AFirstGameWithMattProjectile, ProjectileMovement); }


#define FirstGameWithMatt_Source_FirstGameWithMatt_FirstGameWithMattProjectile_h_9_PROLOG
#define FirstGameWithMatt_Source_FirstGameWithMatt_FirstGameWithMattProjectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FirstGameWithMatt_Source_FirstGameWithMatt_FirstGameWithMattProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FirstGameWithMatt_Source_FirstGameWithMatt_FirstGameWithMattProjectile_h_12_SPARSE_DATA \
	FirstGameWithMatt_Source_FirstGameWithMatt_FirstGameWithMattProjectile_h_12_RPC_WRAPPERS \
	FirstGameWithMatt_Source_FirstGameWithMatt_FirstGameWithMattProjectile_h_12_INCLASS \
	FirstGameWithMatt_Source_FirstGameWithMatt_FirstGameWithMattProjectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FirstGameWithMatt_Source_FirstGameWithMatt_FirstGameWithMattProjectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FirstGameWithMatt_Source_FirstGameWithMatt_FirstGameWithMattProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FirstGameWithMatt_Source_FirstGameWithMatt_FirstGameWithMattProjectile_h_12_SPARSE_DATA \
	FirstGameWithMatt_Source_FirstGameWithMatt_FirstGameWithMattProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FirstGameWithMatt_Source_FirstGameWithMatt_FirstGameWithMattProjectile_h_12_INCLASS_NO_PURE_DECLS \
	FirstGameWithMatt_Source_FirstGameWithMatt_FirstGameWithMattProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIRSTGAMEWITHMATT_API UClass* StaticClass<class AFirstGameWithMattProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FirstGameWithMatt_Source_FirstGameWithMatt_FirstGameWithMattProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
