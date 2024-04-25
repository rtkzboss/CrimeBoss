#pragma once
#include "CoreMinimal.h"
#include "EIGS_PlayerCommandType.h"
#include "IGS_OnCommandSentEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_OnCommandSentEvent, EIGS_PlayerCommandType, inCommand);

