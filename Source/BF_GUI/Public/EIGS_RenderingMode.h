#pragma once
#include "CoreMinimal.h"
#include "EIGS_RenderingMode.generated.h"

UENUM(BlueprintType)
enum class EIGS_RenderingMode : uint8 {
    RM_INVALID = 255,
    RM_Performance = 0,
    RM_Quality,
};

