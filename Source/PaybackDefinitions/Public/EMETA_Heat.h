#pragma once
#include "CoreMinimal.h"
#include "EMETA_Heat.generated.h"

UENUM(BlueprintType)
enum class EMETA_Heat : uint8 {
    INVALID,
    VeryLow,
    Low,
    Medium,
    High,
    VeryHigh,
};

