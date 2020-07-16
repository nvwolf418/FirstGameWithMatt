// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FIRSTGAMEWITHMATT_FirstGameWithMattCharacter_generated_h
#error "FirstGameWithMattCharacter.generated.h already included, missing '#pragma once' in FirstGameWithMattCharacter.h"
#endif
#define FIRSTGAMEWITHMATT_FirstGameWithMattCharacter_generated_h

#define FirstGameWithMatt_Source_FirstGameWithMatt_FirstGameWithMattCharacter_h_14_SPARSE_DATA
#define FirstGameWithMatt_Source_FirstGameWithMatt_FirstGameWithMattCharacter_h_14_RPC_WRAPPERS
#define FirstGameWithMatt_Source_FirstGameWithMatt_FirstGameWithMattCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define FirstGameWithMatt_Source_FirstGameWithMatt_FirstGameWithMattCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFirstGameWithMattCharacter(); \
	friend struct Z_Construct_UClass_AFirstGameWithMattCharacter_Statics; \
public: \
	DECLARE_CLASS(AFirstGameWithMattCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstGameWithMatt"), NO_API) \
	DECLARE_SERIALIZER(AFirstGameWithMattCharacter)


#define FirstGameWithMatt_Source_FirstGameWithMatt_FirstGameWithMattCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAFirstGameWithMattCharacter(); \
	friend struct Z_Construct_UClass_AFirstGameWithMattCharacter_Statics; \
public: \
	DECLARE_CLASS(AFirstGameWithMattCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstGameWithMatt"), NO_API) \
	DECLARE_SERIALIZER(AFirstGameWithMattCharacter)


#define FirstGameWithMatt_Source_FirstGameWithMatt_FirstGameWithMattCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFirstGameWithMattCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFirstGameWithMattCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFirstGameWithMattCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFirstGameWithMattCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFirstGameWithMattCharacter(AFirstGameWithMattCharacter&&); \
	NO_API AFirstGameWithMattCharacter(const AFirstGameWithMattCharacter&); \
public:


#define FirstGameWithMatt_Source_FirstGameWithMatt_FirstGameWithMattCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFirstGameWithMattCharacter(AFirstGameWithMattCharacter&&); \
	NO_API AFirstGameWithMattCharacter(const AFirstGameWithMattCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFirstGameWithMattCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFirstGameWithMattCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFirstGameWithMattCharacter)


#define FirstGameWithMatt_Source_FirstGameWithMatt_FirstGameWithMattCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(AFirstGameWithMattCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(AFirstGameWithMattCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(AFirstGameWithMattCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(AFirstGameWithMattCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(AFirstGameWithMattCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(AFirstGameWithMattCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(AFirstGameWithMattCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(AFirstGameWithMattCharacter, L_MotionController); }


#define FirstGameWithMatt_Source_FirstGameWithMatt_FirstGameWithMattCharacter_h_11_PROLOG
#define FirstGameWithMatt_Source_FirstGameWithMatt_FirstGameWithMattCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FirstGameWithMatt_Source_FirstGameWithMatt_FirstGameWithMattCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FirstGameWithMatt_Source_FirstGameWithMatt_FirstGameWithMattCharacter_h_14_SPARSE_DATA \
	FirstGameWithMatt_Source_FirstGameWithMatt_FirstGameWithMattCharacter_h_14_RPC_WRAPPERS \
	FirstGameWithMatt_Source_FirstGameWithMatt_FirstGameWithMattCharacter_h_14_INCLASS \
	FirstGameWithMatt_Source_FirstGameWithMatt_FirstGameWithMattCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FirstGameWithMatt_Source_FirstGameWithMatt_FirstGameWithMattCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FirstGameWithMatt_Source_FirstGameWithMatt_FirstGameWithMattCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FirstGameWithMatt_Source_FirstGameWithMatt_FirstGameWithMattCharacter_h_14_SPARSE_DATA \
	FirstGameWithMatt_Source_FirstGameWithMatt_FirstGameWithMattCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FirstGameWithMatt_Source_FirstGameWithMatt_FirstGameWithMattCharacter_h_14_INCLASS_NO_PURE_DECLS \
	FirstGameWithMatt_Source_FirstGameWithMatt_FirstGameWithMattCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIRSTGAMEWITHMATT_API UClass* StaticClass<class AFirstGameWithMattCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FirstGameWithMatt_Source_FirstGameWithMatt_FirstGameWithMattCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
