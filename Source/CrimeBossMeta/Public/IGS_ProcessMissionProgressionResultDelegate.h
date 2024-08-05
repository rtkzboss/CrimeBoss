#pragma once
#include "CoreMinimal.h"
#include "IGS_ProgressionResult.h"
#include "IGS_ProcessMissionProgressionResultDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_ProcessMissionProgressionResult, FIGS_ProgressionResult, ProgressionResult);

