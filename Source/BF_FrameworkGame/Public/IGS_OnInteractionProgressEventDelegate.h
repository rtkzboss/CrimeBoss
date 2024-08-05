#pragma once
#include "CoreMinimal.h"
#include "IGS_OnInteractionProgressEventDelegate.generated.h"

class UIGS_InteractiveComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FIGS_OnInteractionProgressEvent, bool, inEnabled, UIGS_InteractiveComponent*, inInteractiveComponent);

