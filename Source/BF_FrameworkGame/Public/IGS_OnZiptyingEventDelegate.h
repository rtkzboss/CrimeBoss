#pragma once
#include "CoreMinimal.h"
#include "IGS_OnZiptyingEventDelegate.generated.h"

class AIGS_GameCharacterFramework;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_OnZiptyingEvent, AIGS_GameCharacterFramework*, inTargetCharacter);

