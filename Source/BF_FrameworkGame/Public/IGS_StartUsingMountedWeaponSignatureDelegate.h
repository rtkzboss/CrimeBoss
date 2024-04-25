#pragma once
#include "CoreMinimal.h"
#include "IGS_StartUsingMountedWeaponSignatureDelegate.generated.h"

class AIGS_GameCharacterFramework;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_StartUsingMountedWeaponSignature, const AIGS_GameCharacterFramework*, inGameCharacter);

