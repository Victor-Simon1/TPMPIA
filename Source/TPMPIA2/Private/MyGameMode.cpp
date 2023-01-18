// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameMode.h"



AMyGameMode::AMyGameMode()
{
    //DefaultPawnClass = AMyCharacter::StaticClass();
    //PlayerControllerClass = AMyController::StaticClass();
    UE_LOG
    (
        LogTemp,
        Display,
        TEXT("Init Gamemode")
    )
   
}
/*
void AMyGameMode::StartMatch()
{
  /*  UE_LOG
    (
        LogTemp,
        Warning,
        EXT("StartMatch")
    )
}*/