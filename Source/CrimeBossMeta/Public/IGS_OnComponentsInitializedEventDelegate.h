#pragma once
#include "CoreMinimal.h"
#include "EMETA_ManagersStartUpMode.h"
#include "IGS_OnComponentsInitializedEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_OnComponentsInitializedEvent, EMETA_ManagersStartUpMode, inStartUpMode);

