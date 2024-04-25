#pragma once
#include "CoreMinimal.h"
#include "IGS_OnDownstateHealthChangedEventSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_OnDownstateHealthChangedEventSignature, float, inHealth);

