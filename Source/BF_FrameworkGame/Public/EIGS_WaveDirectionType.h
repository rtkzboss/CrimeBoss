#pragma once
#include "CoreMinimal.h"
#include "EIGS_WaveDirectionType.generated.h"

UENUM(BlueprintType)
enum class EIGS_WaveDirectionType : uint8 {
    WDT_None,
    WDT_North,
    WDT_East,
    WDT_South,
    WDT_West,
};

