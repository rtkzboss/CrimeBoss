#pragma once
#include "CoreMinimal.h"
#include "EIGS_MetaDialogueCharacterSlot.h"
#include "IGS_MetaDialogueLineDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_MetaDialogueLineDelegate, EIGS_MetaDialogueCharacterSlot, Slot);

