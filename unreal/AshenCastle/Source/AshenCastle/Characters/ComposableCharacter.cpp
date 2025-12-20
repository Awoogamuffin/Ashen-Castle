#include "Characters/ComposableCharacter.h"
#include "Components/ActorComponent.h"

void AComposableCharacter::ApplyMovementInput_Implementation(FVector2D Input)
{
	TArray<UActorComponent*> Components;
	GetComponents(Components);

	for (UActorComponent* Component : Components)
	{
		if (!Component) continue;

		// Explicitly only forward this specific interface
		if (Component->GetClass()->ImplementsInterface(UBPI_Controllable::StaticClass()))
		{
			IBPI_Controllable::Execute_ApplyMovementInput(Component, Input);
			return;
		}
	}

	// Optional debug:
	// UE_LOG(LogTemp, Warning, TEXT("%s: No component implements BPI_Controllable"), *GetName());
}