#pragma once
#include "CoreMinimal.h"
#include "EIGS_BreachingAnimationTaskStatus.generated.h"

UENUM(BlueprintType)
enum class EIGS_BreachingAnimationTaskStatus : uint8 {
    InActive,
    Running,
    Finished,
    Canceled,
};

