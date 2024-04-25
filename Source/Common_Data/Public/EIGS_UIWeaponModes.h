#pragma once
#include "CoreMinimal.h"
#include "EIGS_UIWeaponModes.generated.h"

UENUM(BlueprintType)
enum class EIGS_UIWeaponModes : uint8 {
    None,
    FullAuto,
    Burst,
    SingleShot = 4,
    Silencer = 8,
    Sniper = 16,
};

