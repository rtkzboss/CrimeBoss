#pragma once
#include "CoreMinimal.h"
#include "EIGS_LeanSide.h"
#include "IGS_AILeanChangedEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_AILeanChangedEvent, EIGS_LeanSide, inLeanSide);

