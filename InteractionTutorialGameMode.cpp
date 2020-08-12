// Copyright Epic Games, Inc. All Rights Reserved.

#include "InteractionTutorialGameMode.h"
#include "InteractionTutorialCharacter.h"
#include "UObject/ConstructorHelpers.h"

AInteractionTutorialGameMode::AInteractionTutorialGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
