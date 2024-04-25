#pragma once
#include "CoreMinimal.h"
#include "IGS_QuickplaySaveDataRequestedDelegateDelegate.generated.h"

class UIGS_PaybackSaveGameQuickplay;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_QuickplaySaveDataRequestedDelegate, UIGS_PaybackSaveGameQuickplay*, QuickplaySaveGame);

