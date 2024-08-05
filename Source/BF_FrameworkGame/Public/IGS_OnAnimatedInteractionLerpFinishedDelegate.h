#pragma once
#include "CoreMinimal.h"
#include "IGS_OnAnimatedInteractionLerpFinishedDelegate.generated.h"

class AIGS_GameCharacterFramework;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_OnAnimatedInteractionLerpFinished, AIGS_GameCharacterFramework*, inInstigator);

