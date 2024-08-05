#pragma once
#include "CoreMinimal.h"
#include "PlayerStateFromPawnReadyOutputPinDelegate.generated.h"

class AIGS_PlayerStateFramework;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerStateFromPawnReadyOutputPin, AIGS_PlayerStateFramework*, PlayerState);

