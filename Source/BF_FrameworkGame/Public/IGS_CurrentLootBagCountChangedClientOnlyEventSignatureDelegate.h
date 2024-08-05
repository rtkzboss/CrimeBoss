#pragma once
#include "CoreMinimal.h"
#include "EIGS_BagType.h"
#include "IGS_CurrentLootBagCountChangedClientOnlyEventSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FIGS_CurrentLootBagCountChangedClientOnlyEventSignature, int32, inCount, const TArray<EIGS_BagType>&, inBagTypes, bool, inCausedByItem);

