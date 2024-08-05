#pragma once
#include "CoreMinimal.h"
#include "EIGS_AmbientReaction.generated.h"

UENUM(BlueprintType)
enum class EIGS_AmbientReaction : uint8 {
    UNKNOWN = 255,
    None = 0,
    DutyMinor,
    FearMinor,
    Duty,
    Fear,
    Inspect,
};

