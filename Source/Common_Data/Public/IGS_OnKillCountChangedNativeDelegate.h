#pragma once
#include "CoreMinimal.h"
#include "IGS_OnKillCountChangedNativeDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_OnKillCountChangedNative, int32, inCount);

