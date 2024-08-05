#pragma once
#include "CoreMinimal.h"
#include "EIGS_PingableType.generated.h"

UENUM(BlueprintType)
enum class EIGS_PingableType : uint8 {
    Generic,
    Pickupable,
    Weapon,
    Interactivity,
    Enemy,
    NeutralCharacter,
    Heister,
    Camera,
    MetalDetector,
    Button,
    Phone,
    Destructible,
    Loot,
    Bag,
    EscapeVan,
    Blank,
    Laser,
    Objective,
};

