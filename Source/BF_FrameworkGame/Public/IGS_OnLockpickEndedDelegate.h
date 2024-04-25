#pragma once
#include "CoreMinimal.h"
#include "IGS_OnLockpickEndedDelegate.generated.h"

class AIGS_GameCharacterFramework;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FIGS_OnLockpickEnded, bool, inResult, AIGS_GameCharacterFramework*, inInstigator);

