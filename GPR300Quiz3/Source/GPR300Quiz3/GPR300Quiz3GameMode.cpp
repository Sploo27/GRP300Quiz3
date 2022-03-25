// Copyright Epic Games, Inc. All Rights Reserved.

#include "GPR300Quiz3GameMode.h"
#include "GPR300Quiz3Character.h"
#include "UObject/ConstructorHelpers.h"

AGPR300Quiz3GameMode::AGPR300Quiz3GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
