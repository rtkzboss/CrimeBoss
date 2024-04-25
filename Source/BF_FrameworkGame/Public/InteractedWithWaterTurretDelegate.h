#pragma once
#include "CoreMinimal.h"
#include "InteractedWithWaterTurretDelegate.generated.h"

class AIGS_GameCharacterFramework;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInteractedWithWaterTurret, AIGS_GameCharacterFramework*, inInstigator);

