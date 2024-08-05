#pragma once
#include "CoreMinimal.h"
#include "EMETA_RandEventCategory.generated.h"

UENUM(BlueprintType)
enum class EMETA_RandEventCategory : uint8 {
    None,
    HeatAndInvestigation,
    TurfWar,
    Crew,
    EnemyGang,
    Economy,
};

