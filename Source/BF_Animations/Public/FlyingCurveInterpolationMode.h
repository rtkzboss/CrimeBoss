#pragma once
#include "CoreMinimal.h"
#include "FlyingCurveInterpolationMode.generated.h"

UENUM(BlueprintType)
enum class FlyingCurveInterpolationMode : uint8 {
    Mode_Bezier,
    Mode_Catmull,
};

