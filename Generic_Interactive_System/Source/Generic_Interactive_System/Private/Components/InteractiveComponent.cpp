// UnrealEngine Plugin - by Arthur Durand

#include "Components/InteractiveComponent.h"

#include "GameFramework/Character.h"
#include "Interfaces/InteractiveInterface.h"
#include "Kismet/GameplayStatics.h"
#include "Net/UnrealNetwork.h"

UInteractiveComponent::UInteractiveComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}

void UInteractiveComponent::BeginPlay()
{
	Super::BeginPlay();

	Owner = Cast<ACharacter>(GetOwner());
	checkf(Owner, TEXT("Owner is not an ACharacter"));

	if (Owner->HasAuthority())
	{
		FTimerDelegate ResearchTimerDelegate;
		ResearchTimerDelegate.BindUObject(this, &UInteractiveComponent::GetAllInteractible);
		GetWorld()->GetTimerManager().SetTimer(ResearchTimerHandle, ResearchTimerDelegate, 0.1f, true);
	}
}

void UInteractiveComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME_CONDITION_NOTIFY(UInteractiveComponent, BestInteractible, COND_OwnerOnly, REPNOTIFY_Always);
}

void UInteractiveComponent::PrimaryInteract()
{
	ServerPrimaryInteract();
}

void UInteractiveComponent::ServerPrimaryInteract_Implementation()
{
	if (BestInteractible != nullptr && BestInteractible->Implements<UInteractiveInterface>())
	{
		Cast<IInteractiveInterface>(BestInteractible)->OnPrimaryInteract(Owner);
	}
}

bool UInteractiveComponent::ServerPrimaryInteract_Validate()
{
	if (ensureAlways(Owner) && Owner->HasAuthority())
	{
		return true;
	}
	return false;
}

void UInteractiveComponent::SecondaryInteract()
{
	ServerSecondaryInteract();
}

void UInteractiveComponent::ServerSecondaryInteract_Implementation()
{
	if (BestInteractible != nullptr && BestInteractible->Implements<UInteractiveInterface>())
	{
		Cast<IInteractiveInterface>(BestInteractible)->OnSecondaryInteract(Owner);
	}
}

bool UInteractiveComponent::ServerSecondaryInteract_Validate()
{
	if (ensureAlways(Owner) && Owner->HasAuthority())
	{
		return true;
	}
	return false;
}

void UInteractiveComponent::GetAllInteractible()
{
	UGameplayStatics::GetAllActorsWithInterface(GetWorld(), UInteractiveInterface::StaticClass(), ListOfInteractibles);
	if (ListOfInteractibles.Num() > 0 )
	{
		AActor* NewBestInteractible = ListOfInteractibles[0];
		for (AActor* Interactible : ListOfInteractibles)
		{
			if (Interactible->GetDistanceTo(Owner) < NewBestInteractible->GetDistanceTo(Owner))
			{
				NewBestInteractible = Interactible;
			}
		}
		TrySetNewBestInteractible(NewBestInteractible);
	}
}

void UInteractiveComponent::TrySetNewBestInteractible(AActor* RelevantActor)
{
	if (BestInteractible != RelevantActor)
	{
		if (RelevantActor->GetDistanceTo(Owner) < BestInteractible->GetDistanceTo(Owner))
		{
			BestInteractible = RelevantActor;
		}
	}
}
