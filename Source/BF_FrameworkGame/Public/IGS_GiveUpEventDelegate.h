#pragma once
#include "CoreMinimal.h"
#include "IGS_GiveUpEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_GiveUpEvent, bool, inIsHolding);

