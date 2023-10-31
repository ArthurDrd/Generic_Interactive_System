// UnrealEngine Plugin - by Arthur Durand

#include "Components/InteractiveComponent.h"

#include "Interfaces/InteractiveInterface.h"

UInteractiveComponent::UInteractiveComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}

void UInteractiveComponent::BeginPlay()
{
	Super::BeginPlay();
}

void UInteractiveComponent::TrackForInteractor(AActor* Interactor)
{
	if (Interactor == nullptr)
	{
		return;
	}

	if (!Interactor->Implements<UInteractiveInterface>())
	{
		return;
	}

	if (GetOwner()->HasAuthority())
	{
		Cast<IInteractiveInterface>(Interactor)->OnInteract();
	}
	else
	{
		//ServerInteract(Interactor);
	}
}

void UInteractiveComponent::ServerInteract_Implementation(AActor* Interactor)
{
	TrackForInteractor(Interactor);
}

bool UInteractiveComponent::ServerInteract_Validate(AActor* Interactor)
{
	return Interactor != nullptr && Interactor->Implements<UInteractiveInterface>();
}