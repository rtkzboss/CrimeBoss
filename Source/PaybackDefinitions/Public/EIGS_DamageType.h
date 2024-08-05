#pragma once
#include "CoreMinimal.h"
#include "EIGS_DamageType.generated.h"

UENUM(BlueprintType)
enum class EIGS_DamageType : uint8 {
    Unknown,
    Fire,
    Water,
    Earth,
    Air,
    Cold = 11,
    Electric,
    Sonic,
    Acid,
    Plasma = 21,
    Melee = 31,
    Bullet = 41,
    Explosion,
    BreachExplosion,
    BleedOut = 51,
    TemporaryHealth,
    FallDamage,
};

