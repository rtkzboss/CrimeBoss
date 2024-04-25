#pragma once
#include "CoreMinimal.h"
#include "IGS_IsZiptiedChangedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_IsZiptiedChangedSignature, bool, InValue);

