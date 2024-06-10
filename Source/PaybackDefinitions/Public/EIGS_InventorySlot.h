#pragma once
#include "CoreMinimal.h"
#include "EIGS_InventorySlot.generated.h"

UENUM(BlueprintType)
enum class EIGS_InventorySlot : uint8 {
    INVALID = 255,
    Primary = 0,
    Secondary,
    Melee,
    Armour,
    Equipment,
    CharacterSkin,
    Perk,
};

