#pragma once
#include "CoreMinimal.h"
#include "IGS_OnMouseEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_OnMouseEvent, bool, inDown);

