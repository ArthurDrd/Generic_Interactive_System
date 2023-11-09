// UnrealEngine Plugin - by Arthur Durand

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "InteractiveComponent.generated.h"

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class GENERIC_INTERACTIVE_SYSTEM_API UInteractiveComponent : public UActorComponent
{
	GENERATED_BODY()

	////////////////////////////////
	/// 	   PROPERTIES       ///
	////////////////////////////////
	
public:
	UInteractiveComponent();

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	
protected:
	virtual void BeginPlay() override;

	UPROPERTY()
	TObjectPtr<ACharacter> Owner;

	////////////////////////////////
	/// 	   INTERACTION       ///
	////////////////////////////////
	
public:
	UFUNCTION(BlueprintCallable)
	void PrimaryInteract();

	UFUNCTION(BlueprintCallable)
	void SecondaryInteract();
	
protected:
	UFUNCTION(Server, Reliable, WithValidation)
	void ServerPrimaryInteract();
	
	UFUNCTION(Server, Reliable, WithValidation)
	void ServerSecondaryInteract();
	
    UPROPERTY()
    TArray<AActor*> ListOfInteractibles;
	
	UPROPERTY(Replicated)
	AActor* BestInteractible;
	
	////////////////////////////////
	/// 	   RESEARCH	         ///
	////////////////////////////////

protected:
	FTimerHandle ResearchTimerHandle;
	
	void GetAllInteractible();
	
private:
	void TrySetNewBestInteractible(AActor* RelevantActor);
};