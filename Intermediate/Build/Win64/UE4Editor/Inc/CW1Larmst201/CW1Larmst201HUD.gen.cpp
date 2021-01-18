// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CW1Larmst201/CW1Larmst201HUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCW1Larmst201HUD() {}
// Cross Module References
	CW1LARMST201_API UClass* Z_Construct_UClass_ACW1Larmst201HUD_NoRegister();
	CW1LARMST201_API UClass* Z_Construct_UClass_ACW1Larmst201HUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_CW1Larmst201();
// End Cross Module References
	void ACW1Larmst201HUD::StaticRegisterNativesACW1Larmst201HUD()
	{
	}
	UClass* Z_Construct_UClass_ACW1Larmst201HUD_NoRegister()
	{
		return ACW1Larmst201HUD::StaticClass();
	}
	struct Z_Construct_UClass_ACW1Larmst201HUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACW1Larmst201HUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_CW1Larmst201,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACW1Larmst201HUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "CW1Larmst201HUD.h" },
		{ "ModuleRelativePath", "CW1Larmst201HUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACW1Larmst201HUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACW1Larmst201HUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACW1Larmst201HUD_Statics::ClassParams = {
		&ACW1Larmst201HUD::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ACW1Larmst201HUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACW1Larmst201HUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACW1Larmst201HUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACW1Larmst201HUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACW1Larmst201HUD, 630822384);
	template<> CW1LARMST201_API UClass* StaticClass<ACW1Larmst201HUD>()
	{
		return ACW1Larmst201HUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACW1Larmst201HUD(Z_Construct_UClass_ACW1Larmst201HUD, &ACW1Larmst201HUD::StaticClass, TEXT("/Script/CW1Larmst201"), TEXT("ACW1Larmst201HUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACW1Larmst201HUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
