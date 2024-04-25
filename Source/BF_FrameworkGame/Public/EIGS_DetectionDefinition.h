#pragma once
#include "CoreMinimal.h"
#include "EIGS_DetectionDefinition.generated.h"

UENUM(BlueprintType)
enum class EIGS_DetectionDefinition : uint8 {
    Unknown = 255,
    Start = 0,
    End,
};

