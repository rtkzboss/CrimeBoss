#pragma once
#include "CoreMinimal.h"
#include "Perception/AIPerceptionTypes.h"
#include "IGS_GeneralListenerHeardEventDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FIGS_GeneralListenerHeardEvent, AActor*, inActor, FAIStimulus, inStimulus);

