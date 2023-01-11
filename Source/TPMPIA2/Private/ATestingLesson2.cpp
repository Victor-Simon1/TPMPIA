// Fill out your copyright notice in the Description page of Project Settings.


#include "ATestingLesson2.h"

// Sets default values
AATestingLesson2::AATestingLesson2()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

UFUNCTION()
void AATestingLesson2::GetDamage(float dmg)
{
	pv -= dmg;
}

void AATestingLesson2::Direction()
{
	dir = direction::RIGHT;
}
// Called when the game starts or when spawned
void AATestingLesson2::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AATestingLesson2::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

