#pragma once
#include "CoreMinimal.h"
#include "IGS_OnClientUsedSignatureDelegate.generated.h"

class AIGS_GameCharacterFramework;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_OnClientUsedSignature, AIGS_GameCharacterFramework*, inInstigator);

