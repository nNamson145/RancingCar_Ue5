// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RancingGameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RANCINGGAME_RancingGameMode_generated_h
#error "RancingGameMode.generated.h already included, missing '#pragma once' in RancingGameMode.h"
#endif
#define RANCINGGAME_RancingGameMode_generated_h

#define FID_RancingGame_Source_RancingGame_Public_RancingGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARancingGameMode(); \
	friend struct Z_Construct_UClass_ARancingGameMode_Statics; \
public: \
	DECLARE_CLASS(ARancingGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/RancingGame"), NO_API) \
	DECLARE_SERIALIZER(ARancingGameMode)


#define FID_RancingGame_Source_RancingGame_Public_RancingGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ARancingGameMode(ARancingGameMode&&); \
	ARancingGameMode(const ARancingGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARancingGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARancingGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARancingGameMode) \
	NO_API virtual ~ARancingGameMode();


#define FID_RancingGame_Source_RancingGame_Public_RancingGameMode_h_12_PROLOG
#define FID_RancingGame_Source_RancingGame_Public_RancingGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RancingGame_Source_RancingGame_Public_RancingGameMode_h_15_INCLASS_NO_PURE_DECLS \
	FID_RancingGame_Source_RancingGame_Public_RancingGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RANCINGGAME_API UClass* StaticClass<class ARancingGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RancingGame_Source_RancingGame_Public_RancingGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
