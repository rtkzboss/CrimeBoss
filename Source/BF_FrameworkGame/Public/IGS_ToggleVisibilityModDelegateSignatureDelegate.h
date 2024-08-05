#pragma once
#include "CoreMinimal.h"
#include "IGS_ToggleVisibilityModDelegateSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_ToggleVisibilityModDelegateSignature, bool, inIsOn);

