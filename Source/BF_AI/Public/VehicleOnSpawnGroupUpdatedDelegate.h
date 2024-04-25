#pragma once
#include "CoreMinimal.h"
#include "EIGS_VehicleSpawnGroup.h"
#include "VehicleOnSpawnGroupUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FVehicleOnSpawnGroupUpdated, EIGS_VehicleSpawnGroup, inSpawnGroup);

