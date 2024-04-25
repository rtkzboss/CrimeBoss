#pragma once
#include "CoreMinimal.h"
#include "EIGS_CoverAttackSide.generated.h"

UENUM(BlueprintType)
enum class EIGS_CoverAttackSide : uint8 {
    CAS_Unknown = 255,
    CAS_None = 0,
    CAS_Left,
    CAS_Right,
    CAS_Up,
};

