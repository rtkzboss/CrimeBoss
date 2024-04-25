#pragma once
#include "CoreMinimal.h"
#include "SpawnerEventDelegate.generated.h"

class AIGS_VehicleSpawner;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSpawnerEvent, AIGS_VehicleSpawner*, inSpawner);

