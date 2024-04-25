#pragma once
#include "CoreMinimal.h"
#include "IGS_OnClientHoldCanceledSignatureDelegate.generated.h"

class AIGS_GameCharacterFramework;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_OnClientHoldCanceledSignature, AIGS_GameCharacterFramework*, inInstigator);

