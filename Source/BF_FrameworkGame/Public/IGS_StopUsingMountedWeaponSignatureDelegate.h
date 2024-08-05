#pragma once
#include "CoreMinimal.h"
#include "IGS_StopUsingMountedWeaponSignatureDelegate.generated.h"

class AIGS_GameCharacterFramework;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_StopUsingMountedWeaponSignature, const AIGS_GameCharacterFramework*, inGameCharacter);

