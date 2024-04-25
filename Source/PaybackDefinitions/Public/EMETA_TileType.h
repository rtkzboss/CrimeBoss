#pragma once
#include "CoreMinimal.h"
#include "EMETA_TileType.generated.h"

UENUM(BlueprintType)
enum class EMETA_TileType : uint8 {
    Empty,
    Airport,
    Fort,
    Police,
    Prison,
    Cemetery,
    Central,
};

