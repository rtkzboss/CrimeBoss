#pragma once
#include "CoreMinimal.h"
#include "EPopulationConstraintType.generated.h"

UENUM(BlueprintType)
enum class EPopulationConstraintType : uint8 {
    NONE,
    BOOL,
    DISCRETE,
    DISCRETE_FLOAT,
    DISCRETE_COLOR,
    TAG,
    RANGE,
    CURVE,
    CURVE_COLOR,
};

