#pragma once
#include "CoreMinimal.h"
#include "DialogueSubtitleRemoveEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDialogueSubtitleRemoveEvent, bool, IsImportant);

