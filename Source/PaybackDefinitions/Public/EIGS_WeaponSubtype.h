#pragma once
#include "CoreMinimal.h"
#include "EIGS_WeaponSubtype.generated.h"

UENUM(BlueprintType)
enum class EIGS_WeaponSubtype : uint8 {
    None = 255,
    AssaultRifle = 0,
    MachineGun,
    MarksmanRifle,
    SniperRifle,
    Shotgun,
    SMG,
    HandCannon,
    Pistol,
};

