#pragma once
#include "CoreMinimal.h"
#include "EIGS_SOScope.generated.h"

UENUM(BlueprintType)
enum class EIGS_SOScope : uint8 {
    None,
    OverrideLimbo,
    OverrideAlarm,
    OverrideReaction = 4,
    CancelOnCombatTargetSeen = 8,
    IgnoreFightForWaypoint = 16,
};

