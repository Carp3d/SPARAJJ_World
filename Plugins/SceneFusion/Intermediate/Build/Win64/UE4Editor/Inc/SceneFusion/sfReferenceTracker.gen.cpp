// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SceneFusion/Private/Objects/sfReferenceTracker.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodesfReferenceTracker() {}
// Cross Module References
	SCENEFUSION_API UClass* Z_Construct_UClass_UsfReferenceTracker_NoRegister();
	SCENEFUSION_API UClass* Z_Construct_UClass_UsfReferenceTracker();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_SceneFusion();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	void UsfReferenceTracker::StaticRegisterNativesUsfReferenceTracker()
	{
	}
	UClass* Z_Construct_UClass_UsfReferenceTracker_NoRegister()
	{
		return UsfReferenceTracker::StaticClass();
	}
	struct Z_Construct_UClass_UsfReferenceTracker_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_references_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_m_references;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_references_ElementProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UsfReferenceTracker_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SceneFusion,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UsfReferenceTracker_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Objects/sfReferenceTracker.h" },
		{ "ModuleRelativePath", "Private/Objects/sfReferenceTracker.h" },
		{ "ToolTip", "Prevents tracked uobjects from being garbage collected as long as their associated sfObject is referenced by a\nsynced property." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UsfReferenceTracker_Statics::NewProp_m_references_MetaData[] = {
		{ "ModuleRelativePath", "Private/Objects/sfReferenceTracker.h" },
		{ "ToolTip", "Making this a UPROPERTY stops the objects from being garbage collected." },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_UsfReferenceTracker_Statics::NewProp_m_references = { "m_references", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UsfReferenceTracker, m_references), METADATA_PARAMS(Z_Construct_UClass_UsfReferenceTracker_Statics::NewProp_m_references_MetaData, ARRAY_COUNT(Z_Construct_UClass_UsfReferenceTracker_Statics::NewProp_m_references_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UsfReferenceTracker_Statics::NewProp_m_references_ElementProp = { "m_references", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UsfReferenceTracker_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UsfReferenceTracker_Statics::NewProp_m_references,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UsfReferenceTracker_Statics::NewProp_m_references_ElementProp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UsfReferenceTracker_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UsfReferenceTracker>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UsfReferenceTracker_Statics::ClassParams = {
		&UsfReferenceTracker::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UsfReferenceTracker_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UsfReferenceTracker_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UsfReferenceTracker_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UsfReferenceTracker_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UsfReferenceTracker()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UsfReferenceTracker_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UsfReferenceTracker, 2131500486);
	template<> SCENEFUSION_API UClass* StaticClass<UsfReferenceTracker>()
	{
		return UsfReferenceTracker::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UsfReferenceTracker(Z_Construct_UClass_UsfReferenceTracker, &UsfReferenceTracker::StaticClass, TEXT("/Script/SceneFusion"), TEXT("UsfReferenceTracker"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UsfReferenceTracker);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
