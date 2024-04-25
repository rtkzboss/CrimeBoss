#pragma once
#include "CoreMinimal.h"
#include "EIGS_SituationalDeathType.generated.h"

UENUM(BlueprintType)
enum class EIGS_SituationalDeathType : uint8 {
    SO_Unknown = 255,
    Wall_Front = 0,
    Wall_Left,
    Wall_Back,
    Wall_Right,
};

