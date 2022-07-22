// Copyright Epic Games, Inc. All Rights Reserved.

#include "Pretest1GameMode.h"
#include "Pretest1Character.h"
#include "UObject/ConstructorHelpers.h"

APretest1GameMode::APretest1GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
