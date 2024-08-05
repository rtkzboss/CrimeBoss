#pragma once
#include "CoreMinimal.h"
#include "IGS_IsChargingChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_IsChargingChanged, bool, isCharging);

