#pragma once
#include "CoreMinimal.h"
#include "EIGS_DetectionPriority.generated.h"

UENUM(BlueprintType)
enum class EIGS_DetectionPriority : uint8 {
    None,
    Low,
    Medium,
    High,
};

