#pragma once
#include "CoreMinimal.h"
#include "EMETA_GangStrategy.generated.h"

UENUM(BlueprintType)
enum class EMETA_GangStrategy : uint8 {
    Normal,
    Defensive,
    Conqueror,
    Retaliator,
    Rage,
};

