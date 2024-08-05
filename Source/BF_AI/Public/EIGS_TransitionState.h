#pragma once
#include "CoreMinimal.h"
#include "EIGS_TransitionState.generated.h"

UENUM(BlueprintType)
enum class EIGS_TransitionState : uint8 {
    None,
    Waiting,
    Interpolating,
    Running,
};

