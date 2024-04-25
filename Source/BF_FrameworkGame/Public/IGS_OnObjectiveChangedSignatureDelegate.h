#pragma once
#include "CoreMinimal.h"
#include "IGS_OnObjectiveChangedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FIGS_OnObjectiveChangedSignature, bool, inIsVisible, bool, inObjectiveCompleted);

