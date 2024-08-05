#pragma once
#include "CoreMinimal.h"
#include "EIGS_SubtitleType.h"
#include "DialogueSubtitleRemoveEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDialogueSubtitleRemoveEvent, EIGS_SubtitleType, SubtitleType);

