// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "P2SIS457/PezVerde.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePezVerde() {}
// Cross Module References
	P2SIS457_API UClass* Z_Construct_UClass_APezVerde_NoRegister();
	P2SIS457_API UClass* Z_Construct_UClass_APezVerde();
	P2SIS457_API UClass* Z_Construct_UClass_APez();
	UPackage* Z_Construct_UPackage__Script_P2SIS457();
// End Cross Module References
	void APezVerde::StaticRegisterNativesAPezVerde()
	{
	}
	UClass* Z_Construct_UClass_APezVerde_NoRegister()
	{
		return APezVerde::StaticClass();
	}
	struct Z_Construct_UClass_APezVerde_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APezVerde_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APez,
		(UObject* (*)())Z_Construct_UPackage__Script_P2SIS457,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APezVerde_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PezVerde.h" },
		{ "ModuleRelativePath", "PezVerde.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APezVerde_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APezVerde>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APezVerde_Statics::ClassParams = {
		&APezVerde::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_APezVerde_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APezVerde_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APezVerde()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APezVerde_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APezVerde, 1024370828);
	template<> P2SIS457_API UClass* StaticClass<APezVerde>()
	{
		return APezVerde::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APezVerde(Z_Construct_UClass_APezVerde, &APezVerde::StaticClass, TEXT("/Script/P2SIS457"), TEXT("APezVerde"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APezVerde);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
