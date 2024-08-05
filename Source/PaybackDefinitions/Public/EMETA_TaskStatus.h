#pragma once
#include "CoreMinimal.h"
#include "EMETA_TaskStatus.generated.h"

UENUM(BlueprintType)
enum class EMETA_TaskStatus : uint8 {
    None,
    Failed,
    Success,
};

