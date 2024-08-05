#pragma once
#include "CoreMinimal.h"
#include "IGS_CompileShadersProgressPinDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_CompileShadersProgressPin, float, InProgress);

