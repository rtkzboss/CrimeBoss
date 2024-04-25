#pragma once
#include "CoreMinimal.h"
#include "IGS_OnServerUseReleasedSignatureDelegate.generated.h"

class AIGS_GameCharacterFramework;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_OnServerUseReleasedSignature, AIGS_GameCharacterFramework*, inInstigator);

