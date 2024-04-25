#pragma once
#include "CoreMinimal.h"
#include "IGS_OnPayloadActiveChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_OnPayloadActiveChanged, bool, inState);

