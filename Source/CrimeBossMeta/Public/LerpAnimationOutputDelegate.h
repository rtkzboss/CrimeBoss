#pragma once
#include "CoreMinimal.h"
#include "LerpAnimationOutputDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FLerpAnimationOutput, float, CurrentValue);

