// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RancingGame/Public/CarPawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCarPawn() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APawn();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
RANCINGGAME_API UClass* Z_Construct_UClass_ACarPawn();
RANCINGGAME_API UClass* Z_Construct_UClass_ACarPawn_NoRegister();
UPackage* Z_Construct_UPackage__Script_RancingGame();
// End Cross Module References

// Begin Class ACarPawn
void ACarPawn::StaticRegisterNativesACarPawn()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACarPawn);
UClass* Z_Construct_UClass_ACarPawn_NoRegister()
{
	return ACarPawn::StaticClass();
}
struct Z_Construct_UClass_ACarPawn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "CarPawn.h" },
		{ "ModuleRelativePath", "Public/CarPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CarMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "CarMeshes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** static mesh */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CarPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "static mesh" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "SpringArm" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CarPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CarPawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CarMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACarPawn>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACarPawn_Statics::NewProp_CarMesh = { "CarMesh", nullptr, (EPropertyFlags)0x00400000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACarPawn, CarMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CarMesh_MetaData), NewProp_CarMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACarPawn_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x004000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACarPawn, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringArm_MetaData), NewProp_SpringArm_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACarPawn_Statics::NewProp_CameraComponent = { "CameraComponent", nullptr, (EPropertyFlags)0x004000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACarPawn, CameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraComponent_MetaData), NewProp_CameraComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACarPawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACarPawn_Statics::NewProp_CarMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACarPawn_Statics::NewProp_SpringArm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACarPawn_Statics::NewProp_CameraComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACarPawn_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACarPawn_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_RancingGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACarPawn_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACarPawn_Statics::ClassParams = {
	&ACarPawn::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ACarPawn_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ACarPawn_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACarPawn_Statics::Class_MetaDataParams), Z_Construct_UClass_ACarPawn_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACarPawn()
{
	if (!Z_Registration_Info_UClass_ACarPawn.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACarPawn.OuterSingleton, Z_Construct_UClass_ACarPawn_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACarPawn.OuterSingleton;
}
template<> RANCINGGAME_API UClass* StaticClass<ACarPawn>()
{
	return ACarPawn::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACarPawn);
ACarPawn::~ACarPawn() {}
// End Class ACarPawn

// Begin Registration
struct Z_CompiledInDeferFile_FID_RancingGame_Source_RancingGame_Public_CarPawn_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACarPawn, ACarPawn::StaticClass, TEXT("ACarPawn"), &Z_Registration_Info_UClass_ACarPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACarPawn), 3815168679U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RancingGame_Source_RancingGame_Public_CarPawn_h_1132718133(TEXT("/Script/RancingGame"),
	Z_CompiledInDeferFile_FID_RancingGame_Source_RancingGame_Public_CarPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RancingGame_Source_RancingGame_Public_CarPawn_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
