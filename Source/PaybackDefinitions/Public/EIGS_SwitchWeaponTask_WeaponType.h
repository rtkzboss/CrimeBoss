#pragma once
#include "CoreMinimal.h"
#include "EIGS_SwitchWeaponTask_WeaponType.generated.h"

UENUM(BlueprintType)
enum class EIGS_SwitchWeaponTask_WeaponType : uint8 {
    WT_Unknown = 255,
    WT_Primary = 0,
    WT_Secondary,
    WT_Melee,
    WT_Holstered,
    WT_Carryable,
    WT_MountedGun,
    WT_MAX UMETA(Hidden),
};

