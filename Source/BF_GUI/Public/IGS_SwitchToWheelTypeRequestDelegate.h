#pragma once
#include "CoreMinimal.h"
#include "EIGS_WheelMenuType.h"
#include "IGS_SwitchToWheelTypeRequestDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_SwitchToWheelTypeRequest, EIGS_WheelMenuType, WheelType);

