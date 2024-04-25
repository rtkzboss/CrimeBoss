#pragma once
#include "CoreMinimal.h"
#include "IGS_OnSkinAppliedEventDelegate.generated.h"

class UIGS_WeaponSkinData;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FIGS_OnSkinAppliedEvent, bool, inIsLowRes, UIGS_WeaponSkinData*, inSkin);

