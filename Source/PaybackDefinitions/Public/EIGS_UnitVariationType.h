#pragma once
#include "CoreMinimal.h"
#include "EIGS_UnitVariationType.generated.h"

UENUM(BlueprintType)
enum class EIGS_UnitVariationType : uint8 {
    US_None,
    US_FPSMaxIndex = 128,
    US_Unknown = 255,
};

