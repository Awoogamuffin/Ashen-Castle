#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Interfaces/BPI_Controllable.h"
#include "ComposableCharacter.generated.h"

UCLASS()
class ASHENCASTLE_API AComposableCharacter : public ACharacter, public IBPI_Controllable
{
	GENERATED_BODY()

public:
	// This is the default handler used when BP doesn't override.
	virtual void ApplyMovementInput_Implementation(FVector2D Input) override;

protected:
	// Optional: choose what component type you forward to (explicit).
	// For now, we’ll forward to the first component that implements UBPI_Controllable.
};