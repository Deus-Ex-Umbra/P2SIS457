// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "P2SIS457/PezRojo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePezRojo() {}
// Cross Module References
	P2SIS457_API UClass* Z_Construct_UClass_APezRojo_NoRegister();
	P2SIS457_API UClass* Z_Construct_UClass_APezRojo();
	P2SIS457_API UClass* Z_Construct_UClass_APez();
	UPackage* Z_Construct_UPackage__Script_P2SIS457();
// End Cross Module References
	void APezRojo::StaticRegisterNativesAPezRojo()
	{
	}
	UClass* Z_Construct_UClass_APezRojo_NoRegister()
	{
		return APezRojo::StaticClass();
	}
	struct Z_Construct_UClass_APezRojo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APezRojo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APez,
		(UObject* (*)())Z_Construct_UPackage__Script_P2SIS457,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APezRojo_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PezRojo.h" },
		{ "ModuleRelativePath", "PezRojo.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APezRojo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APezRojo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APezRojo_Statics::ClassParams = {
		&APezRojo::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_APezRojo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APezRojo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APezRojo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APezRojo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APezRojo, 2543980357);
	template<> P2SIS457_API UClass* StaticClass<APezRojo>()
	{
		return APezRojo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APezRojo(Z_Construct_UClass_APezRojo, &APezRojo::StaticClass, TEXT("/Script/P2SIS457"), TEXT("APezRojo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APezRojo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
