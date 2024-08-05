#pragma once
#include "CoreMinimal.h"
#include "EMETA_GoalStatus.generated.h"

UENUM(BlueprintType)
enum class EMETA_GoalStatus : uint8 {
    None,
    InPool,
    InProgress,
    Failed,
    Success,
};

