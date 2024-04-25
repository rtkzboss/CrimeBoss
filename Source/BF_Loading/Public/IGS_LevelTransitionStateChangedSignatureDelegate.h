#pragma once
#include "CoreMinimal.h"
#include "EIGS_LevelTransitionType.h"
#include "IGS_LevelTransitionStateChangedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FIGS_LevelTransitionStateChangedSignature, EIGS_LevelTransitionType, inCurrentState, EIGS_LevelTransitionType, inPreviousState);

