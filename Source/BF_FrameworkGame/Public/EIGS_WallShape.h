#pragma once
#include "CoreMinimal.h"
#include "EIGS_WallShape.generated.h"

UENUM(BlueprintType)
enum class EIGS_WallShape : uint8 {
    Wall_Normal,
    Wall_Half,
    Wall_90,
    Wall_Shaft,
};

