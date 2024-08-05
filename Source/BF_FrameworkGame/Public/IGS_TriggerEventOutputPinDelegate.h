#pragma once
#include "CoreMinimal.h"
#include "IGS_TriggerEventOutputPinDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FIGS_TriggerEventOutputPin, AActor*, OverlappedActor, AActor*, inOtherActor);

