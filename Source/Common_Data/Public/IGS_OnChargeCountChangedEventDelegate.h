#pragma once
#include "CoreMinimal.h"
#include "IGS_OnChargeCountChangedEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_OnChargeCountChangedEvent, int32, inCount);

