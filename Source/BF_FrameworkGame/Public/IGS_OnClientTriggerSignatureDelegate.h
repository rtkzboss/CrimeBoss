#pragma once
#include "CoreMinimal.h"
#include "IGS_OnClientTriggerSignatureDelegate.generated.h"

class AIGS_GameCharacterFramework;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_OnClientTriggerSignature, AIGS_GameCharacterFramework*, inInstigator);

