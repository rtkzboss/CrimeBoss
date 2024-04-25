#pragma once
#include "CoreMinimal.h"
#include "OnRMAnimationStartDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRMAnimationStart, float, AnimationDuration);

