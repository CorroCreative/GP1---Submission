// Copyright Epic Games, Inc. All Rights Reserved.

#include "CW1Larmst201GameMode.h"
#include "CW1Larmst201HUD.h"
#include "CW1Larmst201Character.h"
#include "UObject/ConstructorHelpers.h"

ACW1Larmst201GameMode::ACW1Larmst201GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ACW1Larmst201HUD::StaticClass();
}
