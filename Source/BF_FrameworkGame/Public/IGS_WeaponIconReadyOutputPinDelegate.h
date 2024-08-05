#pragma once
#include "CoreMinimal.h"
#include "IGS_WeaponIconReadyOutputPinDelegate.generated.h"

class UTexture2D;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_WeaponIconReadyOutputPin, UTexture2D*, inWeaponIcon);

