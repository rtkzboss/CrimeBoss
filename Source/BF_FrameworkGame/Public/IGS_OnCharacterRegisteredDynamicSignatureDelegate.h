#pragma once
#include "CoreMinimal.h"
#include "IGS_OnCharacterRegisteredDynamicSignatureDelegate.generated.h"

class AIGS_GameCharacterFramework;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_OnCharacterRegisteredDynamicSignature, AIGS_GameCharacterFramework*, inCharacter);

