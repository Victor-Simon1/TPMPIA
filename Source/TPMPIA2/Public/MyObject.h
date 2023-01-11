// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

//#include "MyDataAsset.h"
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MyObject.generated.h"

/**
 * 
 */
UCLASS(EditInlineNew, Blueprintable)
class TPMPIA2_API UMyObject : public UObject
{
	GENERATED_BODY()
	

public:
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	float f;
};
