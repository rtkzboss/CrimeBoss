#pragma once
#include "CoreMinimal.h"
#include "EIGS_CleanExecutionState.h"
#include "IGS_OnCleanExecutionStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_OnCleanExecutionStateChanged, EIGS_CleanExecutionState, inState);

