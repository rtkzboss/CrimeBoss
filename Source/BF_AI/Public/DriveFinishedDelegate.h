#pragma once
#include "CoreMinimal.h"
#include "DriveFinishedDelegate.generated.h"

class AIGS_VehicleBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDriveFinished, AIGS_VehicleBase*, inVehicle);

