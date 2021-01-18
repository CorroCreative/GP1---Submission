// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CW1Larmst201/CW1Larmst201GameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCW1Larmst201GameMode() {}
// Cross Module References
	CW1LARMST201_API UClass* Z_Construct_UClass_ACW1Larmst201GameMode_NoRegister();
	CW1LARMST201_API UClass* Z_Construct_UClass_ACW1Larmst201GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_CW1Larmst201();
// End Cross Module References
	void ACW1Larmst201GameMode::StaticRegisterNativesACW1Larmst201GameMode()
	{
	}
	UClass* Z_Construct_UClass_ACW1Larmst201GameMode_NoRegister()
	{
		return ACW1Larmst201GameMode::StaticClass();
	}
	struct Z_Construct_UClass_ACW1Larmst201GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACW1Larmst201GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CW1Larmst201,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACW1Larmst201GameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "CW1Larmst201GameMode.h" },
		{ "ModuleRelativePath", "CW1Larmst201GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACW1Larmst201GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACW1Larmst201GameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACW1Larmst201GameMode_Statics::ClassParams = {
		&ACW1Larmst201GameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ACW1Larmst201GameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACW1Larmst201GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACW1Larmst201GameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACW1Larmst201GameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACW1Larmst201GameMode, 870669994);
	template<> CW1LARMST201_API UClass* StaticClass<ACW1Larmst201GameMode>()
	{
		return ACW1Larmst201GameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACW1Larmst201GameMode(Z_Construct_UClass_ACW1Larmst201GameMode, &ACW1Larmst201GameMode::StaticClass, TEXT("/Script/CW1Larmst201"), TEXT("ACW1Larmst201GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACW1Larmst201GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
