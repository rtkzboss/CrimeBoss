#pragma once
#include "CoreMinimal.h"
#include "IGS_OnDeathItemsDroppedDelegate.generated.h"

class AIGS_PickupActorInventoryItem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_OnDeathItemsDropped, const TArray<AIGS_PickupActorInventoryItem*>&, outDroppedItems);

