#pragma once
#include "CoreMinimal.h"
#include "IGS_LootBagDestroyedDelegate.generated.h"

class AIGS_LootBagPickup;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_LootBagDestroyed, AIGS_LootBagPickup*, inBagPickup);

