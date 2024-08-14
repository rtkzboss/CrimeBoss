#pragma once
#include "CoreMinimal.h"
#include "EIGS_WeaponAttackType.generated.h"

UENUM(BlueprintType)
enum class EIGS_WeaponAttackType : uint8 {
    AT_SemiAuto,
    AT_Burst2,
    AT_Burst3,
    AT_FullAuto,
    AT_Continuous,
    AT_Charged,
    AT_Custom,
    AT_GrenadeSemiAuto,
    AT_MAX UMETA(Hidden),
    AT_UNKNOWN = 255,
};

