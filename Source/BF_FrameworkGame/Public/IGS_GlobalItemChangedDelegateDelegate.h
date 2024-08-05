#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "IGS_GlobalItemChangedDelegateDelegate.generated.h"

class UIGS_GlobalInventoryObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FIGS_GlobalItemChangedDelegate, TSubclassOf<UIGS_GlobalInventoryObject>, inItemClass, int32, inCurrentCount);

