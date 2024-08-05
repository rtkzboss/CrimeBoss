#pragma once
#include "CoreMinimal.h"
#include "IGS_CylinderValueChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FIGS_CylinderValueChanged, int32, inCylinderNumber, int32, InValue);

