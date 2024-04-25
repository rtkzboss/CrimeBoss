#pragma once
#include "CoreMinimal.h"
#include "IGS_TriggerEventOutputPinDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_TriggerEventOutputPin, AActor*, inOtherActor);

