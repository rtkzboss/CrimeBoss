#pragma once
#include "CoreMinimal.h"
#include "EMETA_ObjectiveReward.generated.h"

UENUM(BlueprintType)
enum class EMETA_ObjectiveReward : uint8 {
    None,
    Cash,
    Loot,
    WeaponByQuality,
    WeaponByID,
    ArmyRecruits,
    MAX,
};

