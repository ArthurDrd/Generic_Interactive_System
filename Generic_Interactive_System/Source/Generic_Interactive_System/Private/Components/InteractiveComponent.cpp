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
		UE_LOG(LogTemp, Warning, TEXT("Tried to interact with a null object"));
		return;
	}

	if (!Interactor->Implements<UInteractiveInterface>())
	{
		return;
	}

	if (GetOwnerRole() != ROLE_Authority)
	{
		ServerInteract(Interactor);
	}
	else
	{
		Cast<IInteractiveInterface>(Interactor)->Execute_BP_OnInteract(Interactor);
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