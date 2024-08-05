#pragma once
#include "CoreMinimal.h"
#include "EIGS_SuspicionManagerDefinition.generated.h"

UENUM(BlueprintType)
enum class EIGS_SuspicionManagerDefinition : uint8 {
    Unknown = 255,
    AlarmRised = 0,
    GuardFirstKill,
    GuardMultikill,
    HQFinished,
    AllGuardsDead,
    HeistStarted,
};

