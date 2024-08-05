#pragma once
#include "CoreMinimal.h"
#include "IGS_OnServerUsedSignatureDelegate.generated.h"

class AIGS_GameCharacterFramework;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_OnServerUsedSignature, AIGS_GameCharacterFramework*, inInstigator);

