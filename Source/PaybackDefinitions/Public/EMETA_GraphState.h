#pragma once
#include "CoreMinimal.h"
#include "EMETA_GraphState.generated.h"

UENUM(BlueprintType)
enum class EMETA_GraphState : uint8 {
    NotStarted,
    IsRunning,
    EndedWithSuccess,
    EndedWithFail,
};

