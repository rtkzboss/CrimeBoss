#pragma once
#include "CoreMinimal.h"
#include "EMETA_PlacementPriority.generated.h"

UENUM(BlueprintType)
enum class EMETA_PlacementPriority : uint8 {
    Default,
    EnemyTerritory,
    PlayerTerritory,
    OutsideCity,
};

