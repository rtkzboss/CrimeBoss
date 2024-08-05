#pragma once
#include "CoreMinimal.h"
#include "IGS_OnClientUseReleasedSignatureDelegate.generated.h"

class AIGS_GameCharacterFramework;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_OnClientUseReleasedSignature, AIGS_GameCharacterFramework*, inInstigator);

