#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "IGS_OnSecuredLootAddedDelegate.generated.h"

class UIGS_InventoryObjectFramework;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_OnSecuredLootAdded, TSubclassOf<UIGS_InventoryObjectFramework>, inInventoryObject);

