#pragma once
#include "CoreMinimal.h"
#include "EIGS_TeamSideEnum.h"
#include "IGS_OnCharacterDiedDynamicSignatureDelegate.generated.h"

class AIGS_GameCharacterFramework;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FIGS_OnCharacterDiedDynamicSignature, AIGS_GameCharacterFramework*, inCharacter, EIGS_TeamSideEnum, inTeamSide);

