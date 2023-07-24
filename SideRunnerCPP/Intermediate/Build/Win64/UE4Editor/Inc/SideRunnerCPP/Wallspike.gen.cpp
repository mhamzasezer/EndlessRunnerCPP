// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SideRunnerCPP/Wallspike.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWallspike() {}
// Cross Module References
	SIDERUNNERCPP_API UClass* Z_Construct_UClass_AWallspike_NoRegister();
	SIDERUNNERCPP_API UClass* Z_Construct_UClass_AWallspike();
	SIDERUNNERCPP_API UClass* Z_Construct_UClass_ASpikes();
	UPackage* Z_Construct_UPackage__Script_SideRunnerCPP();
// End Cross Module References
	void AWallspike::StaticRegisterNativesAWallspike()
	{
	}
	UClass* Z_Construct_UClass_AWallspike_NoRegister()
	{
		return AWallspike::StaticClass();
	}
	struct Z_Construct_UClass_AWallspike_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWallspike_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASpikes,
		(UObject* (*)())Z_Construct_UPackage__Script_SideRunnerCPP,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWallspike_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Wallspike.h" },
		{ "ModuleRelativePath", "Wallspike.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWallspike_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWallspike>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWallspike_Statics::ClassParams = {
		&AWallspike::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AWallspike_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWallspike_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWallspike()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWallspike_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWallspike, 433978491);
	template<> SIDERUNNERCPP_API UClass* StaticClass<AWallspike>()
	{
		return AWallspike::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWallspike(Z_Construct_UClass_AWallspike, &AWallspike::StaticClass, TEXT("/Script/SideRunnerCPP"), TEXT("AWallspike"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWallspike);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
