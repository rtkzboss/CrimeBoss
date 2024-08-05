#pragma once
#include "CoreMinimal.h"
#include "IGS_ItemDroppedDelegate.generated.h"

class AIGS_PickupActorInventoryItem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FIGS_ItemDropped, AIGS_PickupActorInventoryItem*, outItem);

