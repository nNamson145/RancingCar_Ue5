// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CarPawn.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RANCINGGAME_CarPawn_generated_h
#error "CarPawn.generated.h already included, missing '#pragma once' in CarPawn.h"
#endif
#define RANCINGGAME_CarPawn_generated_h

#define FID_RancingGame_Source_RancingGame_Public_CarPawn_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACarPawn(); \
	friend struct Z_Construct_UClass_ACarPawn_Statics; \
public: \
	DECLARE_CLASS(ACarPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RancingGame"), NO_API) \
	DECLARE_SERIALIZER(ACarPawn)


#define FID_RancingGame_Source_RancingGame_Public_CarPawn_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ACarPawn(ACarPawn&&); \
	ACarPawn(const ACarPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACarPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACarPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACarPawn) \
	NO_API virtual ~ACarPawn();


#define FID_RancingGame_Source_RancingGame_Public_CarPawn_h_14_PROLOG
#define FID_RancingGame_Source_RancingGame_Public_CarPawn_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RancingGame_Source_RancingGame_Public_CarPawn_h_17_INCLASS_NO_PURE_DECLS \
	FID_RancingGame_Source_RancingGame_Public_CarPawn_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RANCINGGAME_API UClass* StaticClass<class ACarPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RancingGame_Source_RancingGame_Public_CarPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
