#pragma once
#include "CoreMinimal.h"
#include "IGS_ActiveStateChangedDynamicSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_ActiveStateChangedDynamicSignature, bool, inIsActive);

