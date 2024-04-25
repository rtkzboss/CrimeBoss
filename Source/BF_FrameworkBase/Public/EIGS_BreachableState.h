#pragma once
#include "CoreMinimal.h"
#include "EIGS_BreachableState.generated.h"

UENUM(BlueprintType)
enum class EIGS_BreachableState : uint8 {
    Clear,
    Open,
    HalfOpen,
    Closed,
    Static,
};

