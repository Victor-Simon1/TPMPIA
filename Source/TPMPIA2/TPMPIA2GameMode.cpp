// Copyright Epic Games, Inc. All Rights Reserved.

#include "TPMPIA2GameMode.h"
#include "TPMPIA2PlayerController.h"
#include "TPMPIA2Character.h"
#include "UObject/ConstructorHelpers.h"

ATPMPIA2GameMode::ATPMPIA2GameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ATPMPIA2PlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDown/Blueprints/BP_TopDownCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	// set default controller to our Blueprinted controller
	static ConstructorHelpers::FClassFinder<APlayerController> PlayerControllerBPClass(TEXT("/Game/TopDown/Blueprints/BP_TopDownPlayerController"));
	if(PlayerControllerBPClass.Class != NULL)
	{
		PlayerControllerClass = PlayerControllerBPClass.Class;
	}
}