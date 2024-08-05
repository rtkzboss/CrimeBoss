#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "IGS_OnContractActivatedDelegate.generated.h"

class UIGS_ContractID;
class UMETA_MissionID;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FIGS_OnContractActivated, TSubclassOf<UIGS_ContractID>, inContractID, TSubclassOf<UMETA_MissionID>, inMissionID);

