#pragma once
#include "CoreMinimal.h"
#include "IGS_WidgetSliderBlueprintEventSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_WidgetSliderBlueprintEventSignature, float, InValue);

