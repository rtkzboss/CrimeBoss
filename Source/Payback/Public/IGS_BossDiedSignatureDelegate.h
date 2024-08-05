#pragma once
#include "CoreMinimal.h"
#include "EIGS_CharacterID.h"
#include "IGS_BossDiedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_BossDiedSignature, EIGS_CharacterID, inCharacterID);

