#pragma once
#include "CoreMinimal.h"
#include "InteractedWithWaterHoseDelegate.generated.h"

class AIGS_GameCharacterFramework;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInteractedWithWaterHose, AIGS_GameCharacterFramework*, inInstigator);

