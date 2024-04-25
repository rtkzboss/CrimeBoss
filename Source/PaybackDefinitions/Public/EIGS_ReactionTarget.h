#pragma once
#include "CoreMinimal.h"
#include "EIGS_ReactionTarget.generated.h"

UENUM(BlueprintType)
enum class EIGS_ReactionTarget : uint8 {
    Target_UNKNOWN = 255,
    Target_Actor = 0,
    Target_Offender,
    Target_Special,
};

