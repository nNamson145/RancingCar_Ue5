// Fill out your copyright notice in the Description page of Project Settings.


#include "RancingGame/Public/RancingGameMode.h"
#include "RancingGame/Public/CarController.h"
#include "RancingGame/Public/CarPawn.h"

ARancingGameMode::ARancingGameMode()
{
	PlayerControllerClass = ACarController::StaticClass();

	DefaultPawnClass = ACarPawn::StaticClass();
}



