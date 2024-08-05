#pragma once
#include "CoreMinimal.h"
#include "EMETA_JobResult.generated.h"

UENUM(BlueprintType)
enum class EMETA_JobResult : uint8 {
    Success,
    Fail,
    Ignored,
    Custom,
    Escaped,
    MAX,
};

