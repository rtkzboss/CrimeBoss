#pragma once
#include "CoreMinimal.h"
#include "IGS_OnSlotReachedDelegate.generated.h"

class AIGS_GameCharacterFramework;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_OnSlotReached, AIGS_GameCharacterFramework*, inCharacter);

