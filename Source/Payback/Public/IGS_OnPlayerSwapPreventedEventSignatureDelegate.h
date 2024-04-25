#pragma once
#include "CoreMinimal.h"
#include "EIGS_PlayerSwapPreventedReason.h"
#include "IGS_OnPlayerSwapPreventedEventSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_OnPlayerSwapPreventedEventSignature, EIGS_PlayerSwapPreventedReason, inReason);

