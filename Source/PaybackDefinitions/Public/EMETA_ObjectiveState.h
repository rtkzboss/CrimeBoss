#pragma once
#include "CoreMinimal.h"
#include "EMETA_ObjectiveState.generated.h"

UENUM(BlueprintType)
enum class EMETA_ObjectiveState : uint8 {
    InProgress,
    Success,
    Failed,
};

