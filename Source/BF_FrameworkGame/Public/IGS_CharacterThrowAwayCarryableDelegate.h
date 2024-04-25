#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "IGS_CharacterThrowAwayCarryableDelegate.generated.h"

class UIGS_InventoryObjectFramework;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_CharacterThrowAwayCarryable, TSubclassOf<UIGS_InventoryObjectFramework>, inClass);

