#pragma once
#include "CoreMinimal.h"
#include "EIGS_WaveManagerDefinition.generated.h"

UENUM(BlueprintType)
enum class EIGS_WaveManagerDefinition : uint8 {
    Unknown = 255,
    AssaultStart = 0,
    ControlStart,
    AssaultEndingSoon,
};

