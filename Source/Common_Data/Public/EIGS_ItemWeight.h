#pragma once
#include "CoreMinimal.h"
#include "EIGS_ItemWeight.generated.h"

UENUM(BlueprintType)
enum class EIGS_ItemWeight : uint8 {
    VeryLight,
    Light,
    Medium,
    Heavy,
    VeryHeavy,
    UNKNOWN = 255,
};

