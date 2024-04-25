#pragma once
#include "CoreMinimal.h"
#include "EIGS_TaskTimerType.generated.h"

UENUM(BlueprintType)
enum class EIGS_TaskTimerType : uint8 {
    None,
    Timer,
    TimeTrial,
};

