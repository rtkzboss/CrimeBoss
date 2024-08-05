#pragma once
#include "CoreMinimal.h"
#include "EIGS_ProgressGadgetSubtype.h"
#include "IGS_ProgressWidgetTypeChangedEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_ProgressWidgetTypeChangedEvent, EIGS_ProgressGadgetSubtype, inType);

