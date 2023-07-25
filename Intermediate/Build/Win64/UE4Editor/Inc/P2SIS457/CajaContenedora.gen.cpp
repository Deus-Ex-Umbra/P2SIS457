// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "P2SIS457/CajaContenedora.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCajaContenedora() {}
// Cross Module References
	P2SIS457_API UClass* Z_Construct_UClass_ACajaContenedora_NoRegister();
	P2SIS457_API UClass* Z_Construct_UClass_ACajaContenedora();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_P2SIS457();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
// End Cross Module References
	void ACajaContenedora::StaticRegisterNativesACajaContenedora()
	{
	}
	UClass* Z_Construct_UClass_ACajaContenedora_NoRegister()
	{
		return ACajaContenedora::StaticClass();
	}
	struct Z_Construct_UClass_ACajaContenedora_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshCaja_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshCaja;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialCaja_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaterialCaja;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACajaContenedora_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_P2SIS457,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACajaContenedora_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CajaContenedora.h" },
		{ "ModuleRelativePath", "CajaContenedora.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACajaContenedora_Statics::NewProp_MeshCaja_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CajaContenedora.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACajaContenedora_Statics::NewProp_MeshCaja = { "MeshCaja", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACajaContenedora, MeshCaja), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACajaContenedora_Statics::NewProp_MeshCaja_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACajaContenedora_Statics::NewProp_MeshCaja_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACajaContenedora_Statics::NewProp_MaterialCaja_MetaData[] = {
		{ "ModuleRelativePath", "CajaContenedora.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACajaContenedora_Statics::NewProp_MaterialCaja = { "MaterialCaja", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACajaContenedora, MaterialCaja), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACajaContenedora_Statics::NewProp_MaterialCaja_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACajaContenedora_Statics::NewProp_MaterialCaja_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACajaContenedora_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACajaContenedora_Statics::NewProp_MeshCaja,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACajaContenedora_Statics::NewProp_MaterialCaja,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACajaContenedora_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACajaContenedora>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACajaContenedora_Statics::ClassParams = {
		&ACajaContenedora::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACajaContenedora_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACajaContenedora_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACajaContenedora_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACajaContenedora_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACajaContenedora()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACajaContenedora_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACajaContenedora, 1745455276);
	template<> P2SIS457_API UClass* StaticClass<ACajaContenedora>()
	{
		return ACajaContenedora::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACajaContenedora(Z_Construct_UClass_ACajaContenedora, &ACajaContenedora::StaticClass, TEXT("/Script/P2SIS457"), TEXT("ACajaContenedora"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACajaContenedora);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
