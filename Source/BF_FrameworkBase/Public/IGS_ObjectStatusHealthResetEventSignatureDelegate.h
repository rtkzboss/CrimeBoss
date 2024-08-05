#pragma once
#include "CoreMinimal.h"
#include "IGS_ObjectStatusHealthResetEventSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FIGS_ObjectStatusHealthResetEventSignature, float, CurrentHealth, float, CurrentShield);

