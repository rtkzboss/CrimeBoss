#pragma once
#include "CoreMinimal.h"
#include "EIGS_DirectionalCueType.h"
#include "IGS_OnDirectionalPlayerCueSignatureDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FIGS_OnDirectionalPlayerCueSignature, const AActor*, inSourceActor, const EIGS_DirectionalCueType, inType);

