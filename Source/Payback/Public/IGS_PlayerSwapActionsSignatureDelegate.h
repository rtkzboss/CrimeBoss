#pragma once
#include "CoreMinimal.h"
#include "IGS_PlayerSwapActionsSignatureDelegate.generated.h"

class AIGS_GameCharacterBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FIGS_PlayerSwapActionsSignature, AIGS_GameCharacterBase*, inPlayer, AIGS_GameCharacterBase*, inBot);

