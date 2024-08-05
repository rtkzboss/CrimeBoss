#pragma once
#include "CoreMinimal.h"
#include "EMETA_EconomyGraphVariableMode.generated.h"

UENUM(BlueprintType)
enum class EMETA_EconomyGraphVariableMode : uint8 {
    Absolute,
    Multiplier,
};

