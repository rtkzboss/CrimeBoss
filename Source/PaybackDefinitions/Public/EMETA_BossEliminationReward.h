#pragma once
#include "CoreMinimal.h"
#include "EMETA_BossEliminationReward.generated.h"

UENUM(BlueprintType)
enum class EMETA_BossEliminationReward : uint8 {
    None,
    Cash,
    Loot,
    Soldiers,
    Weapon,
    Heister,
};

