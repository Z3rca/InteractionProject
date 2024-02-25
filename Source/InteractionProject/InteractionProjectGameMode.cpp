// Copyright Epic Games, Inc. All Rights Reserved.

#include "InteractionProjectGameMode.h"
#include "InteractionProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AInteractionProjectGameMode::AInteractionProjectGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
