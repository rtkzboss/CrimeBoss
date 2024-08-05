#pragma once
#include "CoreMinimal.h"
#include "EIGS_WallType.generated.h"

UENUM(BlueprintType)
enum class EIGS_WallType : uint8 {
    Wall_Wall,
    Wall_Door,
    Wall_Window,
    Wall_Elevator,
    Wall_Shaft,
};

