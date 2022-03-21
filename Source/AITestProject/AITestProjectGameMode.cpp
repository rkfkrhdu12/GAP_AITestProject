// Copyright Epic Games, Inc. All Rights Reserved.

#include "AITestProjectGameMode.h"
#include "AITestProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAITestProjectGameMode::AAITestProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
