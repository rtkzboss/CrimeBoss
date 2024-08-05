#pragma once
#include "CoreMinimal.h"
#include "IGS_PlayerSlotChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_PlayerSlotChanged, int32, inSlot);

