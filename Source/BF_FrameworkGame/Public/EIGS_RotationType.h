#pragma once
#include "CoreMinimal.h"
#include "EIGS_RotationType.generated.h"

UENUM(BlueprintType)
enum class EIGS_RotationType : uint8 {
    Clamped,
    Full360,
    Frozen,
};

