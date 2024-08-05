#pragma once
#include "CoreMinimal.h"
#include "EIGS_PlayerMovingDirection.generated.h"

UENUM(BlueprintType)
enum class EIGS_PlayerMovingDirection : uint8 {
    D_Dorward,
    D_Backward,
    D_Left,
    D_Right,
    D_None,
};

