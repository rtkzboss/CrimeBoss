#pragma once
#include "CoreMinimal.h"
#include "IGS_HitInfo.h"
#include "IGS_HealthChangedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FIGS_HealthChangedSignature, float, inDifference, const FIGS_HitInfo&, inHitInfo);

