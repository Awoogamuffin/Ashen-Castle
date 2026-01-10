// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/ModularCharacterMC.h"

float UModularCharacterMC::GetMaxSpeed() const
{
    const float Base = Super::GetMaxSpeed();

    if (GetClass()->IsFunctionImplementedInScript(TEXT("BP_GetMaxSpeed")))
    {
        return BP_GetMaxSpeed(Base);
    }
    return Base;
}