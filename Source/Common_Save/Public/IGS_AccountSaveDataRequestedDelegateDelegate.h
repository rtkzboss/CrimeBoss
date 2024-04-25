#pragma once
#include "CoreMinimal.h"
#include "IGS_AccountSaveDataRequestedDelegateDelegate.generated.h"

class UIGS_PaybackSaveGameAccount;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_AccountSaveDataRequestedDelegate, UIGS_PaybackSaveGameAccount*, AccountSaveGame);

