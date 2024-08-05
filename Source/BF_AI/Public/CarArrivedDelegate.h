#pragma once
#include "CoreMinimal.h"
#include "CarArrivedDelegate.generated.h"

class AIGS_VehicleBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCarArrived, AIGS_VehicleBase*, inVehicle);

