// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MyUserWidget.generated.h"

/**
 * 
 */
UCLASS(Abstract)
class TPMPIA2_API UMyUserWidget : public UUserWidget
{
	GENERATED_BODY()


protected:
	virtual void NativeConstruct() override;

	UPROPERTY(EditAnywhere)
	class UImage* ImageTitle;
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
	class UTextBlock* ItemTitle;
};
