#pragma once
#include "CoreMinimal.h"
#include "EMETA_TileReward.generated.h"

UENUM(BlueprintType)
enum class EMETA_TileReward : uint8 {
    None,
    Cash,
    Loot,
    Soldiers,
    Weapon,
};

