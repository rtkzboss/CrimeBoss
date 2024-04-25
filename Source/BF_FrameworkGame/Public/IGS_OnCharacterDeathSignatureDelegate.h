#pragma once
#include "CoreMinimal.h"
#include "IGS_OnCharacterDeathSignatureDelegate.generated.h"

class AIGS_GameCharacterFramework;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FIGS_OnCharacterDeathSignature, AIGS_GameCharacterFramework*, inCharacter, AIGS_GameCharacterFramework*, inInstigator);

