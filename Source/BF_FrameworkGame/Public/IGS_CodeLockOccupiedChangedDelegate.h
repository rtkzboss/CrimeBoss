#pragma once
#include "CoreMinimal.h"
#include "IGS_CodeLockOccupiedChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_CodeLockOccupiedChanged, bool, inOccupied);

