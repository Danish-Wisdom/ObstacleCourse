// Copyright Epic Games, Inc. All Rights Reserved.

#include "ObstacleRushGameMode.h"
#include "ObstacleRushCharacter.h"
#include "UObject/ConstructorHelpers.h"

AObstacleRushGameMode::AObstacleRushGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
