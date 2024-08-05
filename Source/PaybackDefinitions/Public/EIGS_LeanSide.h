#pragma once
#include "CoreMinimal.h"
#include "EIGS_LeanSide.generated.h"

UENUM(BlueprintType)
enum class EIGS_LeanSide : uint8 {
    LeanSide_None,
    LeanSide_Avoid,
    LeanSide_Right,
    LeanSide_Left,
    LeanSide_Up,
    LeanSide_Down,
};

