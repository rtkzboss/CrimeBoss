#pragma once
#include "CoreMinimal.h"
#include "IGS_OnServerHoldCanceledSignatureDelegate.generated.h"

class AIGS_GameCharacterFramework;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_OnServerHoldCanceledSignature, AIGS_GameCharacterFramework*, inInstigator);

