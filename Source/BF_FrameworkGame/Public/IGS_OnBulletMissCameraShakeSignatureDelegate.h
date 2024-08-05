#pragma once
#include "CoreMinimal.h"
#include "EIGS_FlyBySide.h"
#include "EIGS_SuppressionType.h"
#include "IGS_OnBulletMissCameraShakeSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FIGS_OnBulletMissCameraShakeSignature, EIGS_SuppressionType, inSuppressionType, EIGS_FlyBySide, inFlyBySide);

