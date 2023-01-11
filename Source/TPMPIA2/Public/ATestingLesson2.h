// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Movement.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ATestingLesson2.generated.h"


UENUM(Blueprintable)
enum class direction : uint8
{
	RIGHT, 
	LEFT
};

UCLASS()
class TPMPIA2_API AATestingLesson2 : public AActor,public IMovement
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AATestingLesson2();

	UPROPERTY(BlueprintReadOnly)
	float pv;
	UPROPERTY(BlueprintReadOnly)
	float speed;
	UPROPERTY(BlueprintReadOnly)
	direction dir;

	UFUNCTION()
	void GetDamage(float dmg);
	virtual void Direction() override;
private:
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
