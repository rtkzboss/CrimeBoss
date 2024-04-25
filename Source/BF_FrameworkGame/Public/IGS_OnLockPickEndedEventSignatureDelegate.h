#pragma once
#include "CoreMinimal.h"
#include "IGS_OnLockPickEndedEventSignatureDelegate.generated.h"

class AIGS_GameCharacterFramework;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FIGS_OnLockPickEndedEventSignature, AIGS_GameCharacterFramework*, inInstigator, bool, inSuccess);

