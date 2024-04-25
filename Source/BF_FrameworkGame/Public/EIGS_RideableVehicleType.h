#pragma once
#include "CoreMinimal.h"
#include "EIGS_RideableVehicleType.generated.h"

UENUM(BlueprintType)
enum class EIGS_RideableVehicleType : uint8 {
    Vessel,
    QuadBike,
    None,
};

