#pragma once
#include "CoreMinimal.h"
#include "PlayerExitVehicleDelegateDelegate.generated.h"

class APawn;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPlayerExitVehicleDelegate, APawn*, inPawn, int32, inSeatIndex);

