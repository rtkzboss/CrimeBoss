#pragma once
#include "CoreMinimal.h"
#include "IGS_StatusProgressChangedEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_StatusProgressChangedEvent, float, InProgress);

