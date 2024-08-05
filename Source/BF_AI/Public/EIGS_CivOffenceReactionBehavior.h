#pragma once
#include "CoreMinimal.h"
#include "EIGS_CivOffenceReactionBehavior.generated.h"

UENUM(BlueprintType)
enum class EIGS_CivOffenceReactionBehavior : uint8 {
    UNKNOWN = 255,
    None = 0,
    Inspect,
    Duty,
    Panic,
};

