// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SceneFusion/Private/Objects/sfLandscapeInfoMapHack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodesfLandscapeInfoMapHack() {}
// Cross Module References
	SCENEFUSION_API UClass* Z_Construct_UClass_UsfLandscapeInfoMapHack_NoRegister();
	SCENEFUSION_API UClass* Z_Construct_UClass_UsfLandscapeInfoMapHack();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_SceneFusion();
// End Cross Module References
	void UsfLandscapeInfoMapHack::StaticRegisterNativesUsfLandscapeInfoMapHack()
	{
	}
	UClass* Z_Construct_UClass_UsfLandscapeInfoMapHack_NoRegister()
	{
		return UsfLandscapeInfoMapHack::StaticClass();
	}
	struct Z_Construct_UClass_UsfLandscapeInfoMapHack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UsfLandscapeInfoMapHack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SceneFusion,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UsfLandscapeInfoMapHack_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Objects/sfLandscapeInfoMapHack.h" },
		{ "ModuleRelativePath", "Private/Objects/sfLandscapeInfoMapHack.h" },
		{ "ToolTip", "This is a hack to expose the members of the private class ULandscapeInfoMap by declaring the same members in the\nsame order." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UsfLandscapeInfoMapHack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UsfLandscapeInfoMapHack>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UsfLandscapeInfoMapHack_Statics::ClassParams = {
		&UsfLandscapeInfoMapHack::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UsfLandscapeInfoMapHack_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UsfLandscapeInfoMapHack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UsfLandscapeInfoMapHack()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UsfLandscapeInfoMapHack_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UsfLandscapeInfoMapHack, 2017099370);
	template<> SCENEFUSION_API UClass* StaticClass<UsfLandscapeInfoMapHack>()
	{
		return UsfLandscapeInfoMapHack::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UsfLandscapeInfoMapHack(Z_Construct_UClass_UsfLandscapeInfoMapHack, &UsfLandscapeInfoMapHack::StaticClass, TEXT("/Script/SceneFusion"), TEXT("UsfLandscapeInfoMapHack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UsfLandscapeInfoMapHack);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
