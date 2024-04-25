#pragma once
#include "CoreMinimal.h"
#include "IGS_IsTargetChangedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_IsTargetChangedSignature, bool, isTarget);

