#pragma once
#include "CoreMinimal.h"
#include "IGS_CodeLockStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_CodeLockStateChanged, bool, inLocked);

