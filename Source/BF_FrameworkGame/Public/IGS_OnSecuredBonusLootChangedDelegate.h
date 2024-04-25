#pragma once
#include "CoreMinimal.h"
#include "IGS_OnSecuredBonusLootChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_OnSecuredBonusLootChanged, float, inSecuredBonusLootValue);

