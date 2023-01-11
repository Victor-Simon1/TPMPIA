// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "MyObject.h"
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "MyDataAsset.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class TPMPIA2_API UMyDataAsset : public UDataAsset
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	float f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool b;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FGameplayTag tag;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite,Instanced)
	UMyObject *obj;
};
