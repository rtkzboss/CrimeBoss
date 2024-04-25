#pragma once
#include "CoreMinimal.h"
#include "EIGS_BagType.generated.h"

UENUM(BlueprintType)
enum class EIGS_BagType : uint8 {
    Bag_Unknown,
    Bag_Generic,
    Bag_Loot_Common,
    Bag_Loot_Uncommon,
    Bag_Loot_Rare,
    Bag_Loot_Epic,
    Bag_Loot_Legendary,
};

