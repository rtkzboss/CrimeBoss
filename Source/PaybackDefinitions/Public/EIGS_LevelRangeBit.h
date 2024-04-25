#pragma once
#include "CoreMinimal.h"
#include "EIGS_LevelRangeBit.generated.h"

UENUM(BlueprintType)
enum class EIGS_LevelRangeBit : uint8 {
    None,
    All,
    Level1,
    Level2,
    Level3,
    Level4,
    Level5,
};

