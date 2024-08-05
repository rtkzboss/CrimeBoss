#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "IGS_OnInputKeyPressedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_OnInputKeyPressed, FKey, inKey);

