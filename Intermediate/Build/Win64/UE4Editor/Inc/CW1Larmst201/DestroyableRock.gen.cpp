// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CW1Larmst201/DestroyableRock.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDestroyableRock() {}
// Cross Module References
	CW1LARMST201_API UClass* Z_Construct_UClass_ADestroyableRock_NoRegister();
	CW1LARMST201_API UClass* Z_Construct_UClass_ADestroyableRock();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_CW1Larmst201();
// End Cross Module References
	void ADestroyableRock::StaticRegisterNativesADestroyableRock()
	{
	}
	UClass* Z_Construct_UClass_ADestroyableRock_NoRegister()
	{
		return ADestroyableRock::StaticClass();
	}
	struct Z_Construct_UClass_ADestroyableRock_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADestroyableRock_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CW1Larmst201,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADestroyableRock_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DestroyableRock.h" },
		{ "ModuleRelativePath", "DestroyableRock.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADestroyableRock_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADestroyableRock>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADestroyableRock_Statics::ClassParams = {
		&ADestroyableRock::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADestroyableRock_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADestroyableRock_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADestroyableRock()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADestroyableRock_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADestroyableRock, 659566976);
	template<> CW1LARMST201_API UClass* StaticClass<ADestroyableRock>()
	{
		return ADestroyableRock::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADestroyableRock(Z_Construct_UClass_ADestroyableRock, &ADestroyableRock::StaticClass, TEXT("/Script/CW1Larmst201"), TEXT("ADestroyableRock"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADestroyableRock);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
