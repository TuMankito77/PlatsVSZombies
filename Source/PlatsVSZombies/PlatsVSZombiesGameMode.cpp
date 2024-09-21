// Copyright Epic Games, Inc. All Rights Reserved.

#include "PlatsVSZombiesGameMode.h"
#include "PlatsVSZombiesCharacter.h"
#include "UObject/ConstructorHelpers.h"

APlatsVSZombiesGameMode::APlatsVSZombiesGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
