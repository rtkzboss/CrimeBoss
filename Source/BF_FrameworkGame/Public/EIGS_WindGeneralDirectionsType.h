#pragma once
#include "CoreMinimal.h"
#include "EIGS_WindGeneralDirectionsType.generated.h"

UENUM(BlueprintType)
enum class EIGS_WindGeneralDirectionsType : uint8 {
    Any,
    WorldDir_N,
    WorldDir_NE,
    WorldDir_E,
    WorldDir_SE,
    WorldDir_S,
    WorldDir_SW,
    WorldDir_W,
    WorldDir_NW,
};

