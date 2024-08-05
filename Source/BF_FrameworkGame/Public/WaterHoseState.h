#pragma once
#include "CoreMinimal.h"
#include "WaterHoseState.generated.h"

UENUM()
enum class WaterHoseState : int32 {
    Hidden,
    Highlighted,
    Visible,
};

