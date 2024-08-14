#pragma once
#include "CoreMinimal.h"
#include "EIGS_CleanExecutionState.generated.h"

UENUM(BlueprintType)
enum class EIGS_CleanExecutionState : uint8 {
    Unsupported,
    Active,
    Failed,
};

