#pragma once
#include "CoreMinimal.h"
#include "EIGS_TraficPathfindingType.generated.h"

UENUM(BlueprintType)
enum class EIGS_TraficPathfindingType : uint8 {
    None,
    FromDestination,
    ToExitPoint,
    ToDestination,
    ToClosestDestination,
};

