#pragma once
#include "CoreMinimal.h"
#include "EIGS_MantleType.h"
#include "IGS_MantleTypeChangedEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_MantleTypeChangedEvent, EIGS_MantleType, inMantleType);

