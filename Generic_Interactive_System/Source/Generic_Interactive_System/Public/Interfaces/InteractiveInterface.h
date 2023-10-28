// UnrealEngine Plugin - by Arthur Durand

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "InteractiveInterface.generated.h"

UINTERFACE(BlueprintType, Blueprintable)
class UInteractiveInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class GENERIC_INTERACTIVE_SYSTEM_API IInteractiveInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintImplementableEvent, Category=Interaction)
	void BP_OnInteract();
};
