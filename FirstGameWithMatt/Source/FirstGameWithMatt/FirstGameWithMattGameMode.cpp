// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "FirstGameWithMattGameMode.h"
#include "FirstGameWithMattHUD.h"
#include "FirstGameWithMattCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFirstGameWithMattGameMode::AFirstGameWithMattGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AFirstGameWithMattHUD::StaticClass();
}
