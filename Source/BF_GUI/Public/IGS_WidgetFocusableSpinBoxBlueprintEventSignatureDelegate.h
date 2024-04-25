#pragma once
#include "CoreMinimal.h"
#include "IGS_WidgetFocusableSpinBoxBlueprintEventSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_WidgetFocusableSpinBoxBlueprintEventSignature, int32, InValue);

