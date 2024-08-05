#pragma once
#include "CoreMinimal.h"
#include "EIGS_TerritoryVolumeType.generated.h"

UENUM(BlueprintType)
enum class EIGS_TerritoryVolumeType : uint8 {
    Exterior,
    Interior,
    Transits,
    Shelter,
    Custom = 10,
};

