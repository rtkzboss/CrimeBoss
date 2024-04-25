#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "IGS_HudDebugEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FIGS_HudDebugEvent, uint8, inID, float, InTime, FLinearColor, inLogColor, const FString&, inLog);

