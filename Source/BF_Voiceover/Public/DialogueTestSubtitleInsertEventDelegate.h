#pragma once
#include "CoreMinimal.h"
#include "EIGS_SubtitleType.h"
#include "DialogueTestSubtitleInsertEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FDialogueTestSubtitleInsertEvent, const FString&, SubtitleText, EIGS_SubtitleType, SubtitleType);

