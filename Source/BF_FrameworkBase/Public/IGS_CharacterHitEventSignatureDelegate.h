#pragma once
#include "CoreMinimal.h"
#include "IGS_HitInfo.h"
#include "IGS_CharacterHitEventSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FIGS_CharacterHitEventSignature, float, inDamage, float, inHealthChange, float, inShieldChange, const FIGS_HitInfo&, inHitInfo);

