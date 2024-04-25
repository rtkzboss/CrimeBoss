#pragma once
#include "CoreMinimal.h"
#include "EPFRollInterpType.generated.h"

UENUM(BlueprintType)
enum class EPFRollInterpType : uint8 {
    Constant,
    Linear,
    LinearStable,
    Cubic,
    CubicClamped,
};

