#pragma once
#include "CoreMinimal.h"
#include "IGS_OnLockStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_OnLockStateChanged, bool, inLocked);

