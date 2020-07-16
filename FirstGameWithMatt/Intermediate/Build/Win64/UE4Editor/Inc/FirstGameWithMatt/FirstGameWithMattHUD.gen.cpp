// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirstGameWithMatt/FirstGameWithMattHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFirstGameWithMattHUD() {}
// Cross Module References
	FIRSTGAMEWITHMATT_API UClass* Z_Construct_UClass_AFirstGameWithMattHUD_NoRegister();
	FIRSTGAMEWITHMATT_API UClass* Z_Construct_UClass_AFirstGameWithMattHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_FirstGameWithMatt();
// End Cross Module References
	void AFirstGameWithMattHUD::StaticRegisterNativesAFirstGameWithMattHUD()
	{
	}
	UClass* Z_Construct_UClass_AFirstGameWithMattHUD_NoRegister()
	{
		return AFirstGameWithMattHUD::StaticClass();
	}
	struct Z_Construct_UClass_AFirstGameWithMattHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFirstGameWithMattHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_FirstGameWithMatt,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstGameWithMattHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "FirstGameWithMattHUD.h" },
		{ "ModuleRelativePath", "FirstGameWithMattHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFirstGameWithMattHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFirstGameWithMattHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFirstGameWithMattHUD_Statics::ClassParams = {
		&AFirstGameWithMattHUD::StaticClass,
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
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AFirstGameWithMattHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFirstGameWithMattHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFirstGameWithMattHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFirstGameWithMattHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFirstGameWithMattHUD, 1150287726);
	template<> FIRSTGAMEWITHMATT_API UClass* StaticClass<AFirstGameWithMattHUD>()
	{
		return AFirstGameWithMattHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFirstGameWithMattHUD(Z_Construct_UClass_AFirstGameWithMattHUD, &AFirstGameWithMattHUD::StaticClass, TEXT("/Script/FirstGameWithMatt"), TEXT("AFirstGameWithMattHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFirstGameWithMattHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
