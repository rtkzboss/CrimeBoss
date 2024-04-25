#pragma once
#include "CoreMinimal.h"
#include "EMETA_BonusUsage.generated.h"

UENUM(BlueprintType)
enum class EMETA_BonusUsage : uint8 {
    Other,
    PercentageX100,
    AbsoluteValue,
    Perks,
    Money,
    Bool,
    Heisters,
    Percentage,
};

