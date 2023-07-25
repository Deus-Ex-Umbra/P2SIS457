// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "P2SIS457/PezAzul.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePezAzul() {}
// Cross Module References
	P2SIS457_API UClass* Z_Construct_UClass_APezAzul_NoRegister();
	P2SIS457_API UClass* Z_Construct_UClass_APezAzul();
	P2SIS457_API UClass* Z_Construct_UClass_APez();
	UPackage* Z_Construct_UPackage__Script_P2SIS457();
// End Cross Module References
	void APezAzul::StaticRegisterNativesAPezAzul()
	{
	}
	UClass* Z_Construct_UClass_APezAzul_NoRegister()
	{
		return APezAzul::StaticClass();
	}
	struct Z_Construct_UClass_APezAzul_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APezAzul_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APez,
		(UObject* (*)())Z_Construct_UPackage__Script_P2SIS457,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APezAzul_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PezAzul.h" },
		{ "ModuleRelativePath", "PezAzul.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APezAzul_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APezAzul>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APezAzul_Statics::ClassParams = {
		&APezAzul::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_APezAzul_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APezAzul_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APezAzul()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APezAzul_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APezAzul, 219842846);
	template<> P2SIS457_API UClass* StaticClass<APezAzul>()
	{
		return APezAzul::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APezAzul(Z_Construct_UClass_APezAzul, &APezAzul::StaticClass, TEXT("/Script/P2SIS457"), TEXT("APezAzul"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APezAzul);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
