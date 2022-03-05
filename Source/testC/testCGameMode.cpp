// Copyright Epic Games, Inc. All Rights Reserved.

#include "testCGameMode.h"
#include "testCHUD.h"
#include "testCCharacter.h"
#include "UObject/ConstructorHelpers.h"

AtestCGameMode::AtestCGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AtestCHUD::StaticClass();
}
