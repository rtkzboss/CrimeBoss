#pragma once
#include "CoreMinimal.h"
#include "EIGS_RewardType.generated.h"

UENUM(BlueprintType)
enum class EIGS_RewardType : uint8 {
    UNKNOWN = 255,
    Character = 0,
    MissionContract,
    ChainContract,
};

