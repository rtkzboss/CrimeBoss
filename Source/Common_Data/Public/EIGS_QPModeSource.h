#pragma once
#include "CoreMinimal.h"
#include "EIGS_QPModeSource.generated.h"

UENUM(BlueprintType)
enum class EIGS_QPModeSource : uint8 {
    INVALID = 255,
    Lobby = 0,
    UrbanLegends,
    Shuffle,
};

