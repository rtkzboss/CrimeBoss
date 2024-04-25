#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "IGS_OnAvailableContractAddedDelegate.generated.h"

class UIGS_ContractID;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_OnAvailableContractAdded, TSubclassOf<UIGS_ContractID>, inID);

