#pragma once
#include "CoreMinimal.h"
#include "EIGS_LeanSide.h"
#include "IGS_LeanChangedEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_LeanChangedEvent, EIGS_LeanSide, inLeanSide);

