#pragma once
#include "CoreMinimal.h"
#include "IGS_OnPayloadFinishedDelegate.generated.h"

class AIGS_PayloadBase;
class AIGS_PlayerCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FIGS_OnPayloadFinished, AIGS_PayloadBase*, inPayload, const TArray<AIGS_PlayerCharacter*>&, inPushingPlayers);

