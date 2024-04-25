#pragma once
#include "CoreMinimal.h"
#include "IGS_HitInfo.h"
#include "IGS_WeakSpotSignatureDelegate.generated.h"

class UPrimitiveComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FIGS_WeakSpotSignature, const UPrimitiveComponent*, inWeakSpotReference, const FIGS_HitInfo&, inLastHitInfo);

