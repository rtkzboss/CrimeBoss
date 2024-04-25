#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "IGS_OnActiveContractRemovedDelegate.generated.h"

class UMETA_MissionID;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_OnActiveContractRemoved, TSubclassOf<UMETA_MissionID>, inID);

