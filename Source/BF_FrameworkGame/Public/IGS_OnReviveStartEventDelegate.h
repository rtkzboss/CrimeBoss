#pragma once
#include "CoreMinimal.h"
#include "IGS_OnReviveStartEventDelegate.generated.h"

class APawn;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_OnReviveStartEvent, APawn*, inHealer);

