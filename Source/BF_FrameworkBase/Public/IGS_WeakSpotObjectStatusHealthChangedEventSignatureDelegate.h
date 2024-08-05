#pragma once
#include "CoreMinimal.h"
#include "IGS_HitInfo.h"
#include "IGS_WeakSpotObjectStatusHealthChangedEventSignatureDelegate.generated.h"

class UPrimitiveComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_SixParams(FIGS_WeakSpotObjectStatusHealthChangedEventSignature, const UPrimitiveComponent*, inWeakSpotReference, float, CurrentHealth, float, CurrentShield, float, HealthChange, float, ShieldChange, const FIGS_HitInfo&, HitInfo);

