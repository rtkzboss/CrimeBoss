#pragma once
#include "CoreMinimal.h"
#include "EIGS_FPSDifficulty.generated.h"

UENUM(BlueprintType)
enum class EIGS_FPSDifficulty : uint8 {
    FD_Unknown,
    FD_Normal,
    FD_Hard,
    FD_Extreme,
};

