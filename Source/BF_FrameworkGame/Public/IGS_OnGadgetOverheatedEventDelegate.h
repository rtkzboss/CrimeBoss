#pragma once
#include "CoreMinimal.h"
#include "EIGS_ProgressGadgetSubtype.h"
#include "IGS_OnGadgetOverheatedEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_OnGadgetOverheatedEvent, EIGS_ProgressGadgetSubtype, inType);

