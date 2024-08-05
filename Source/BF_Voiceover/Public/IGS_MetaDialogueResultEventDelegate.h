#pragma once
#include "CoreMinimal.h"
#include "EIGS_MetaDialogueCharacterSlot.h"
#include "IGS_MetaDialogueResultEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FIGS_MetaDialogueResultEvent, FName, LineID, EIGS_MetaDialogueCharacterSlot, DialogueSlot, int32, LineOrderID, int32, LinesCount, float, inVoiceLenght);

