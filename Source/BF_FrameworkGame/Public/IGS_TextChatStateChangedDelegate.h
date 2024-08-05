#pragma once
#include "CoreMinimal.h"
#include "IGS_TextChatStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_TextChatStateChanged, bool, inState);

