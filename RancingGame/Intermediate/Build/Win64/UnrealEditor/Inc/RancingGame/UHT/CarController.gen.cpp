// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RancingGame/Public/CarController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCarController() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
RANCINGGAME_API UClass* Z_Construct_UClass_ACarController();
RANCINGGAME_API UClass* Z_Construct_UClass_ACarController_NoRegister();
UPackage* Z_Construct_UPackage__Script_RancingGame();
// End Cross Module References

// Begin Class ACarController
void ACarController::StaticRegisterNativesACarController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACarController);
UClass* Z_Construct_UClass_ACarController_NoRegister()
{
	return ACarController::StaticClass();
}
struct Z_Construct_UClass_ACarController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "CarController.h" },
		{ "ModuleRelativePath", "Public/CarController.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACarController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ACarController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_RancingGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACarController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACarController_Statics::ClassParams = {
	&ACarController::StaticClass,
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
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACarController_Statics::Class_MetaDataParams), Z_Construct_UClass_ACarController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACarController()
{
	if (!Z_Registration_Info_UClass_ACarController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACarController.OuterSingleton, Z_Construct_UClass_ACarController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACarController.OuterSingleton;
}
template<> RANCINGGAME_API UClass* StaticClass<ACarController>()
{
	return ACarController::StaticClass();
}
ACarController::ACarController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACarController);
ACarController::~ACarController() {}
// End Class ACarController

// Begin Registration
struct Z_CompiledInDeferFile_FID_RancingGame_Source_RancingGame_Public_CarController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACarController, ACarController::StaticClass, TEXT("ACarController"), &Z_Registration_Info_UClass_ACarController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACarController), 731659824U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RancingGame_Source_RancingGame_Public_CarController_h_2684345762(TEXT("/Script/RancingGame"),
	Z_CompiledInDeferFile_FID_RancingGame_Source_RancingGame_Public_CarController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RancingGame_Source_RancingGame_Public_CarController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
