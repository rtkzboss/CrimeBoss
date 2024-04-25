#pragma once
#include "CoreMinimal.h"
#include "IGS_OnServerTriggerSignatureDelegate.generated.h"

class AIGS_GameCharacterFramework;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_OnServerTriggerSignature, AIGS_GameCharacterFramework*, inInstigator);

