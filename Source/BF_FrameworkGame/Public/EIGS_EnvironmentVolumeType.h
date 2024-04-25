#pragma once
#include "CoreMinimal.h"
#include "EIGS_EnvironmentVolumeType.generated.h"

UENUM(BlueprintType)
enum class EIGS_EnvironmentVolumeType : uint8 {
    Exterior,
    Interior,
    WaterSprayAny,
    Shelter,
    Custom = 10,
    None = 255,
};

