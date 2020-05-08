// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SceneFusion/Private/Actors/sfDecalActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodesfDecalActor() {}
// Cross Module References
	SCENEFUSION_API UClass* Z_Construct_UClass_AsfDecalActor_NoRegister();
	SCENEFUSION_API UClass* Z_Construct_UClass_AsfDecalActor();
	ENGINE_API UClass* Z_Construct_UClass_ADecalActor();
	UPackage* Z_Construct_UPackage__Script_SceneFusion();
// End Cross Module References
	void AsfDecalActor::StaticRegisterNativesAsfDecalActor()
	{
	}
	UClass* Z_Construct_UClass_AsfDecalActor_NoRegister()
	{
		return AsfDecalActor::StaticClass();
	}
	struct Z_Construct_UClass_AsfDecalActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AsfDecalActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ADecalActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SceneFusion,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AsfDecalActor_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Attachment Actor Input Replication" },
		{ "IncludePath", "Actors/sfDecalActor.h" },
		{ "ModuleRelativePath", "Private/Actors/sfDecalActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "A decal actor that cannot be selected in the editor." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AsfDecalActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AsfDecalActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AsfDecalActor_Statics::ClassParams = {
		&AsfDecalActor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AsfDecalActor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AsfDecalActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AsfDecalActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AsfDecalActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AsfDecalActor, 2118088090);
	template<> SCENEFUSION_API UClass* StaticClass<AsfDecalActor>()
	{
		return AsfDecalActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AsfDecalActor(Z_Construct_UClass_AsfDecalActor, &AsfDecalActor::StaticClass, TEXT("/Script/SceneFusion"), TEXT("AsfDecalActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AsfDecalActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
