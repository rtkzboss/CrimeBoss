#pragma once
#include "CoreMinimal.h"
#include "IGS_DialogueEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_DialogueEvent, FName, inDialogueID);

