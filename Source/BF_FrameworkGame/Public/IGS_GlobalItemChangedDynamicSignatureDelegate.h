#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "IGS_GlobalItemChangedDynamicSignatureDelegate.generated.h"

class UIGS_GlobalInventoryObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FIGS_GlobalItemChangedDynamicSignature, TSubclassOf<UIGS_GlobalInventoryObject>, inItemClass, int32, inCurrentCount);

