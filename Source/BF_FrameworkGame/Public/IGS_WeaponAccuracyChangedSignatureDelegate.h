#pragma once
#include "CoreMinimal.h"
#include "IGS_WeaponAccuracyInfoHolder.h"
#include "IGS_WeaponAccuracyChangedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_WeaponAccuracyChangedSignature, FIGS_WeaponAccuracyInfoHolder, AccuracyInfoHolder);

