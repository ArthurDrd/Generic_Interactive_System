// UnrealEngine Plugin - by Arthur Durand

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "InteractiveComponent.generated.h"


UCLASS(Blueprintable, BlueprintType, ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class GENERIC_INTERACTIVE_SYSTEM_API UInteractiveComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UInteractiveComponent();

	UFUNCTION(BlueprintCallable, Category=Interaction)
	void TrackForInteractor(AActor* Interactor);
	
protected:
	virtual void BeginPlay() override;

	UFUNCTION(Server, Reliable, WithValidation)
	void ServerInteract(AActor* Interactor);
};
