// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirstGameWithMatt/FirstGameWithMattGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFirstGameWithMattGameMode() {}
// Cross Module References
	FIRSTGAMEWITHMATT_API UClass* Z_Construct_UClass_AFirstGameWithMattGameMode_NoRegister();
	FIRSTGAMEWITHMATT_API UClass* Z_Construct_UClass_AFirstGameWithMattGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_FirstGameWithMatt();
// End Cross Module References
	void AFirstGameWithMattGameMode::StaticRegisterNativesAFirstGameWithMattGameMode()
	{
	}
	UClass* Z_Construct_UClass_AFirstGameWithMattGameMode_NoRegister()
	{
		return AFirstGameWithMattGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AFirstGameWithMattGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFirstGameWithMattGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FirstGameWithMatt,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstGameWithMattGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "FirstGameWithMattGameMode.h" },
		{ "ModuleRelativePath", "FirstGameWithMattGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFirstGameWithMattGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFirstGameWithMattGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFirstGameWithMattGameMode_Statics::ClassParams = {
		&AFirstGameWithMattGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AFirstGameWithMattGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFirstGameWithMattGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFirstGameWithMattGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFirstGameWithMattGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFirstGameWithMattGameMode, 3966570474);
	template<> FIRSTGAMEWITHMATT_API UClass* StaticClass<AFirstGameWithMattGameMode>()
	{
		return AFirstGameWithMattGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFirstGameWithMattGameMode(Z_Construct_UClass_AFirstGameWithMattGameMode, &AFirstGameWithMattGameMode::StaticClass, TEXT("/Script/FirstGameWithMatt"), TEXT("AFirstGameWithMattGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFirstGameWithMattGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
