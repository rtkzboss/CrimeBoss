#pragma once
#include "CoreMinimal.h"
#include "IGS_TextChatInputStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_TextChatInputStateChanged, bool, inOpen);

