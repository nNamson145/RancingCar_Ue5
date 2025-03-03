// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CarController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RANCINGGAME_CarController_generated_h
#error "CarController.generated.h already included, missing '#pragma once' in CarController.h"
#endif
#define RANCINGGAME_CarController_generated_h

#define FID_RancingGame_Source_RancingGame_Public_CarController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACarController(); \
	friend struct Z_Construct_UClass_ACarController_Statics; \
public: \
	DECLARE_CLASS(ACarController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RancingGame"), NO_API) \
	DECLARE_SERIALIZER(ACarController)


#define FID_RancingGame_Source_RancingGame_Public_CarController_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACarController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ACarController(ACarController&&); \
	ACarController(const ACarController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACarController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACarController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACarController) \
	NO_API virtual ~ACarController();


#define FID_RancingGame_Source_RancingGame_Public_CarController_h_12_PROLOG
#define FID_RancingGame_Source_RancingGame_Public_CarController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RancingGame_Source_RancingGame_Public_CarController_h_15_INCLASS_NO_PURE_DECLS \
	FID_RancingGame_Source_RancingGame_Public_CarController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RANCINGGAME_API UClass* StaticClass<class ACarController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RancingGame_Source_RancingGame_Public_CarController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
