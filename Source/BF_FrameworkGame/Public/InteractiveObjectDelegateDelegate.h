#pragma once
#include "CoreMinimal.h"
#include "EIGS_InteractionType.h"
#include "Templates/SubclassOf.h"
#include "InteractiveObjectDelegateDelegate.generated.h"

class UIGS_InteractiveComponent;
class UIGS_InventoryObjectFramework;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FInteractiveObjectDelegate, bool, inIsNear, EIGS_InteractionType, inInteractionType, UIGS_InteractiveComponent*, inInteractiveComponent, TSubclassOf<UIGS_InventoryObjectFramework>, inNeededItem);

