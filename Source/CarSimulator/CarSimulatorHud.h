// Copyright Epic Games, Inc. All Rights Reserved.
#pragma once
#include "GameFramework/HUD.h"
#include "CarSimulatorHud.generated.h"


UCLASS(config = Game)
class ACarSimulatorHud : public AHUD
{
	GENERATED_BODY()

public:
	ACarSimulatorHud();

	/** Font used to render the vehicle info */
	UPROPERTY()
	UFont* HUDFont;

	// Begin AHUD interface
	virtual void DrawHUD() override;
	// End AHUD interface
};
