// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCharacter.h"

// Sets default values
AMyCharacter::AMyCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	time = 0.0;
}

// Called when the game starts or when spawned
void AMyCharacter::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG
	(
		LogTemp,
		Display,
		TEXT("Init character")
	)
}

// Called every frame
void AMyCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	FVector newLocation = GetActorLocation() + (MovementDirection * DeltaTime * 500.0);
	SetActorLocation(newLocation);
	if (time > 2.0)
	{
		time = 0.0;
		UE_LOG
		(
			LogTemp,
			Display,
			TEXT("IsRunning"),
		)
	}
	time += DeltaTime;
	UE_LOG
	(
		LogTemp,
		Display,
		TEXT("%s"),
		*GetActorLocation().ToString()
	)
}

// Called to bind functionality to input
void AMyCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	InputComponent->BindAction("Sprint", IE_Pressed, this, &AMyCharacter::Sprint);
	PlayerInputComponent->BindAxis("MoveForward", this, &AMyCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AMyCharacter::MoveRight);
}

void AMyCharacter::MoveForward(float Value)
{
	MovementDirection.X = FMath::Clamp(Value, -1.0, 1.0);
}
void AMyCharacter::MoveRight(float Value)
{
	MovementDirection.Y = FMath::Clamp(Value, -1.0, 1.0);
}
void AMyCharacter::Sprint()
{
	this->speed += 10;
//	Super::Tick(DeltaTime);
	if (GEngine)
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("Sprint"));
}
void AMyCharacter::Walk()
{
	this->speed -= 10;
	if (GEngine)
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("Walk"));

}
void AMyCharacter::Move()
{

}