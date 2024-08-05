#pragma once
#include "CoreMinimal.h"
#include "IGS_CopsArriveTimerFinishedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_CopsArriveTimerFinished, bool, inAborted);

