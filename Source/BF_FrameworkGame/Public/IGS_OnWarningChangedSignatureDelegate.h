#pragma once
#include "CoreMinimal.h"
#include "EIGS_InteractionWarningPriority.h"
#include "EIGS_InteractionWarningType.h"
#include "IGS_OnWarningChangedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FIGS_OnWarningChangedSignature, EIGS_InteractionWarningType, inType, EIGS_InteractionWarningPriority, InPriority, bool, inIsVisible);

