#pragma once
#include "CoreMinimal.h"
#include "IGS_VisorEffectsOnDrillSparksStateChangeDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_VisorEffectsOnDrillSparksStateChange, const AActor*, inDrill);

