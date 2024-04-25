#pragma once
#include "CoreMinimal.h"
#include "IGS_HitInfo.h"
#include "IGS_ObjectStatusAccumulatedDamageEventSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FIGS_ObjectStatusAccumulatedDamageEventSignature, float, CurrentHealth, float, CurrentShield, float, HealthChange, float, ShieldChange, const FIGS_HitInfo&, HitInfo);

