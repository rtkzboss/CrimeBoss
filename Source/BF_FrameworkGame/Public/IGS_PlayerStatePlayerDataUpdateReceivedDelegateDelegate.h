#pragma once
#include "CoreMinimal.h"
#include "IGS_PlayerStatePlayerDataUpdateReceivedDelegateDelegate.generated.h"

class APlayerState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_PlayerStatePlayerDataUpdateReceivedDelegate, APlayerState*, inPlayerState);

