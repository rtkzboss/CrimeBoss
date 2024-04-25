#pragma once
#include "CoreMinimal.h"
#include "IGS_StormIntensityChangedEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_StormIntensityChangedEvent, int32, inIntensity);

