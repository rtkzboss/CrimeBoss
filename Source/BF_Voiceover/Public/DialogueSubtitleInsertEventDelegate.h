#pragma once
#include "CoreMinimal.h"
#include "IGS_SubtitleData.h"
#include "DialogueSubtitleInsertEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FDialogueSubtitleInsertEvent, const FIGS_SubtitleData&, SubtitleText, bool, IsImportant);

