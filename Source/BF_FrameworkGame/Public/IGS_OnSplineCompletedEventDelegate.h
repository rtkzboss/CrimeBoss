#pragma once
#include "CoreMinimal.h"
#include "IGS_OnSplineCompletedEventDelegate.generated.h"

class AIGS_GameCharacterFramework;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_OnSplineCompletedEvent, AIGS_GameCharacterFramework*, inPlayer);

