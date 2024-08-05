#pragma once
#include "CoreMinimal.h"
#include "EIGS_TileRotation.generated.h"

UENUM(BlueprintType)
enum class EIGS_TileRotation : uint8 {
    Top,
    Right,
    Bottom,
    Left,
};

