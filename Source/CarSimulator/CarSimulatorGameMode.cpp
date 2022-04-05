// Copyright Epic Games, Inc. All Rights Reserved.

#include "CarSimulatorGameMode.h"
#include "CarSimulatorPawn.h"
#include "CarSimulatorHud.h"

ACarSimulatorGameMode::ACarSimulatorGameMode()
{
	DefaultPawnClass = ACarSimulatorPawn::StaticClass();
	HUDClass = ACarSimulatorHud::StaticClass();
}
