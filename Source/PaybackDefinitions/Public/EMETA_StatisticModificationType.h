#pragma once
#include "CoreMinimal.h"
#include "EMETA_StatisticModificationType.generated.h"

UENUM(BlueprintType)
enum class EMETA_StatisticModificationType : uint8 {
    None,
    Increment,
    Replace,
    Minimum,
    Maximum,
    Average,
};

