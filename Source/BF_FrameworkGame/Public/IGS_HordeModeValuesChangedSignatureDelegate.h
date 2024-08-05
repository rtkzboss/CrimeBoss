#pragma once
#include "CoreMinimal.h"
#include "IGS_HordeModeValues.h"
#include "IGS_HordeModeValuesChangedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_HordeModeValuesChangedSignature, const FIGS_HordeModeValues, inValues);

