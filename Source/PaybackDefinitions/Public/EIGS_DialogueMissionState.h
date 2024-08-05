#pragma once
#include "CoreMinimal.h"
#include "EIGS_DialogueMissionState.generated.h"

UENUM(BlueprintType)
enum class EIGS_DialogueMissionState : uint8 {
    Stealth,
    Limbo,
    Control,
    Assault,
};

