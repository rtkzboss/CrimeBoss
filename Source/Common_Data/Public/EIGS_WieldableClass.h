#pragma once
#include "CoreMinimal.h"
#include "EIGS_WieldableClass.generated.h"

UENUM(BlueprintType)
enum class EIGS_WieldableClass : uint8 {
    C_Generic,
    C_Pistol,
    C_SMG,
    C_AR,
    C_Shotgun,
    C_Explosive,
    C_Melee,
    C_DMR,
    C_LMG,
    C_Revolver,
    C_Sniper,
    C_SpecialGun,
    T_MAX UMETA(Hidden),
    T_UNKNOWN = 255,
};

