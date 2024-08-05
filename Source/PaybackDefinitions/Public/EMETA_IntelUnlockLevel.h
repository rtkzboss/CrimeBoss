#pragma once
#include "CoreMinimal.h"
#include "EMETA_IntelUnlockLevel.generated.h"

UENUM(BlueprintType)
enum class EMETA_IntelUnlockLevel : uint8 {
    LOCK,
    PlayMission,
    RevealsDifficulty,
    DifficultyReduction,
    IncreasedRewardForMaxMoneratyValue,
};

