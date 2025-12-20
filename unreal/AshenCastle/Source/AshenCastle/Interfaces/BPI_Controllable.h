#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "BPI_Controllable.generated.h"

// The reflection type (UObject side)
UINTERFACE(BlueprintType, Blueprintable)
class ASHENCASTLE_API UBPI_Controllable : public UInterface
{
	GENERATED_BODY()
};

// The C++ interface body (function side)
class ASHENCASTLE_API IBPI_Controllable
{
	GENERATED_BODY()

public:
	// BlueprintNativeEvent = Blueprint may override, C++ provides default.
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Control")
	void ApplyMovementInput(FVector2D Input);
};