#pragma once
#include "CoreMinimal.h"
#include "IGS_WidgetButtonWithReferenceEventBlueprintSignatureDelegate.generated.h"

class UIGS_WidgetButtonSimple;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_WidgetButtonWithReferenceEventBlueprintSignature, UIGS_WidgetButtonSimple*, InWidget);

