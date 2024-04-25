#pragma once
#include "CoreMinimal.h"
#include "EIGS_ObjectiveState.generated.h"

UENUM(BlueprintType)
enum class EIGS_ObjectiveState : uint8 {
    Active,
    Completed,
    Failed,
};

