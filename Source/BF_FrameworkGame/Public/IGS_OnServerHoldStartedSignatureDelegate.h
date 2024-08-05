#pragma once
#include "CoreMinimal.h"
#include "IGS_OnServerHoldStartedSignatureDelegate.generated.h"

class AIGS_GameCharacterFramework;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FIGS_OnServerHoldStartedSignature, AIGS_GameCharacterFramework*, inInstigator, float, inTimerDuration);

