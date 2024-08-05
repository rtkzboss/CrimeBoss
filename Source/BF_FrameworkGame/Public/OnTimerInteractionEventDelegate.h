#pragma once
#include "CoreMinimal.h"
#include "OnTimerInteractionEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnTimerInteractionEvent, bool, inEnabled, float, inTotalTime);

