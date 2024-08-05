#pragma once
#include "CoreMinimal.h"
#include "VehiclePassengersSpawnedDelegate.generated.h"

class AIGS_GameCharacterFramework;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FVehiclePassengersSpawned, const TArray<AIGS_GameCharacterFramework*>&, inPassengers);

