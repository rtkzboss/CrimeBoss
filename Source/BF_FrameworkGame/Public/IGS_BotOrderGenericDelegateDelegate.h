#pragma once
#include "CoreMinimal.h"
#include "IGS_BotOrderAction.h"
#include "IGS_BotOrderGenericDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_BotOrderGenericDelegate, const FIGS_BotOrderAction&, outAction);

