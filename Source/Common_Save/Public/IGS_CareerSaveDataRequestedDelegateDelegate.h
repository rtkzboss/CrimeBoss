#pragma once
#include "CoreMinimal.h"
#include "IGS_CareerSaveDataRequestedDelegateDelegate.generated.h"

class UIGS_PaybackSaveGameCareer;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_CareerSaveDataRequestedDelegate, UIGS_PaybackSaveGameCareer*, CareerSaveGame);

