#pragma once
#include "CoreMinimal.h"
#include "EIGS_UnregisterReason.h"
#include "IGS_OnCharacterUnregisteredDynamicSignatureDelegate.generated.h"

class AIGS_GameCharacterFramework;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FIGS_OnCharacterUnregisteredDynamicSignature, AIGS_GameCharacterFramework*, inCharacter, EIGS_UnregisterReason, inReason);

