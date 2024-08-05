#pragma once
#include "CoreMinimal.h"
#include "IGS_DialogueLineEventDelegate.generated.h"

class AIGS_GameCharacterFramework;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FIGS_DialogueLineEvent, AIGS_GameCharacterFramework*, inInstigator, FName, inDialogueID, FName, inLineID);

