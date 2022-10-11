// Copyright Epic Games, Inc. All Rights Reserved.

#include "ZombieApocalypseGameMode.h"
#include "ZombieApocalypseCharacter.h"
#include "UObject/ConstructorHelpers.h"

AZombieApocalypseGameMode::AZombieApocalypseGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
