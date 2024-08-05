#pragma once
#include "CoreMinimal.h"
#include "EMETA_StatisticsHeisterState.generated.h"

UENUM(BlueprintType)
enum class EMETA_StatisticsHeisterState : uint8 {
    None,
    Hired,
    PromotedToVeteran,
    PromotedToElite,
    Dead,
    Missing,
    Arrested,
    Fired,
    Executed,
    Deserter,
};

