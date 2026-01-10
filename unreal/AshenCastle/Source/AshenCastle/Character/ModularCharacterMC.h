// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "ModularCharacterMC.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, BlueprintType)
class ASHENCASTLE_API UModularCharacterMC : public UCharacterMovementComponent
{
	GENERATED_BODY()
	
public:
    virtual float GetMaxSpeed() const override;

    UFUNCTION(BlueprintImplementableEvent, Category="Movement")
    float BP_GetMaxSpeed(float BaseSpeed) const;
};