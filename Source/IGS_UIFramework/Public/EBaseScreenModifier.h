#pragma once
#include "CoreMinimal.h"
#include "EBaseScreenModifier.generated.h"

UENUM(BlueprintType)
enum class EBaseScreenModifier : uint8 {
    None,
    Top,
    Bottom,
    Whole = 4,
};

