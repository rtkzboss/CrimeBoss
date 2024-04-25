#pragma once
#include "CoreMinimal.h"
#include "IGS_CameraViewerIsUsedChangedEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_CameraViewerIsUsedChangedEvent, bool, inIsUsed);

