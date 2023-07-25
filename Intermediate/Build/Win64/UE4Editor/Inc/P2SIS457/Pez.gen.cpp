// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "P2SIS457/Pez.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePez() {}
// Cross Module References
	P2SIS457_API UClass* Z_Construct_UClass_APez_NoRegister();
	P2SIS457_API UClass* Z_Construct_UClass_APez();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_P2SIS457();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	void APez::StaticRegisterNativesAPez()
	{
	}
	UClass* Z_Construct_UClass_APez_NoRegister()
	{
		return APez::StaticClass();
	}
	struct Z_Construct_UClass_APez_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PezNombre_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PezNombre;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PosicionInicial_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PosicionInicial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TamanioInicial_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TamanioInicial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PezMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PezMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PezMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PezMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SceneComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SceneComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APez_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_P2SIS457,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APez_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Pez.h" },
		{ "ModuleRelativePath", "Pez.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APez_Statics::NewProp_PezNombre_MetaData[] = {
		{ "ModuleRelativePath", "Pez.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_APez_Statics::NewProp_PezNombre = { "PezNombre", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APez, PezNombre), METADATA_PARAMS(Z_Construct_UClass_APez_Statics::NewProp_PezNombre_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APez_Statics::NewProp_PezNombre_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APez_Statics::NewProp_PosicionInicial_MetaData[] = {
		{ "ModuleRelativePath", "Pez.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_APez_Statics::NewProp_PosicionInicial = { "PosicionInicial", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APez, PosicionInicial), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_APez_Statics::NewProp_PosicionInicial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APez_Statics::NewProp_PosicionInicial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APez_Statics::NewProp_TamanioInicial_MetaData[] = {
		{ "ModuleRelativePath", "Pez.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_APez_Statics::NewProp_TamanioInicial = { "TamanioInicial", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APez, TamanioInicial), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_APez_Statics::NewProp_TamanioInicial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APez_Statics::NewProp_TamanioInicial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APez_Statics::NewProp_PezMesh_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Pez.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APez_Statics::NewProp_PezMesh = { "PezMesh", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APez, PezMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APez_Statics::NewProp_PezMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APez_Statics::NewProp_PezMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APez_Statics::NewProp_PezMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Pez.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APez_Statics::NewProp_PezMaterial = { "PezMaterial", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APez, PezMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APez_Statics::NewProp_PezMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APez_Statics::NewProp_PezMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APez_Statics::NewProp_SceneComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Pez.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APez_Statics::NewProp_SceneComponent = { "SceneComponent", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APez, SceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APez_Statics::NewProp_SceneComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APez_Statics::NewProp_SceneComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APez_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APez_Statics::NewProp_PezNombre,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APez_Statics::NewProp_PosicionInicial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APez_Statics::NewProp_TamanioInicial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APez_Statics::NewProp_PezMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APez_Statics::NewProp_PezMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APez_Statics::NewProp_SceneComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APez_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APez>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APez_Statics::ClassParams = {
		&APez::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APez_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APez_Statics::PropPointers),
		0,
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_APez_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APez_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APez()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APez_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APez, 3914426240);
	template<> P2SIS457_API UClass* StaticClass<APez>()
	{
		return APez::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APez(Z_Construct_UClass_APez, &APez::StaticClass, TEXT("/Script/P2SIS457"), TEXT("APez"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APez);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
