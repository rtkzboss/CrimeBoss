#pragma once
#include "CoreMinimal.h"
#include "IGS_AimGameCharacterChangedEventDelegate.generated.h"

class AIGS_GameCharacterFramework;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_AimGameCharacterChangedEvent, AIGS_GameCharacterFramework*, newAimGameCharacter);

