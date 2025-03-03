// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RancingGame/Public/RancingGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRancingGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
RANCINGGAME_API UClass* Z_Construct_UClass_ARancingGameMode();
RANCINGGAME_API UClass* Z_Construct_UClass_ARancingGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_RancingGame();
// End Cross Module References

// Begin Class ARancingGameMode
void ARancingGameMode::StaticRegisterNativesARancingGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARancingGameMode);
UClass* Z_Construct_UClass_ARancingGameMode_NoRegister()
{
	return ARancingGameMode::StaticClass();
}
struct Z_Construct_UClass_ARancingGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "RancingGameMode.h" },
		{ "ModuleRelativePath", "Public/RancingGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARancingGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ARancingGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_RancingGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARancingGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARancingGameMode_Statics::ClassParams = {
	&ARancingGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARancingGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ARancingGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ARancingGameMode()
{
	if (!Z_Registration_Info_UClass_ARancingGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARancingGameMode.OuterSingleton, Z_Construct_UClass_ARancingGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARancingGameMode.OuterSingleton;
}
template<> RANCINGGAME_API UClass* StaticClass<ARancingGameMode>()
{
	return ARancingGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ARancingGameMode);
ARancingGameMode::~ARancingGameMode() {}
// End Class ARancingGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_RancingGame_Source_RancingGame_Public_RancingGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARancingGameMode, ARancingGameMode::StaticClass, TEXT("ARancingGameMode"), &Z_Registration_Info_UClass_ARancingGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARancingGameMode), 3225898963U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RancingGame_Source_RancingGame_Public_RancingGameMode_h_2894304761(TEXT("/Script/RancingGame"),
	Z_CompiledInDeferFile_FID_RancingGame_Source_RancingGame_Public_RancingGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RancingGame_Source_RancingGame_Public_RancingGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
