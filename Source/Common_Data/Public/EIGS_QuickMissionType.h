#pragma once
#include "CoreMinimal.h"
#include "EIGS_QuickMissionType.generated.h"

UENUM(BlueprintType)
enum class EIGS_QuickMissionType : uint8 {
    UNKNOWN = 255,
    Opportunity = 0,
    Contract,
    ChainContract,
    ShuffleContract,
};

