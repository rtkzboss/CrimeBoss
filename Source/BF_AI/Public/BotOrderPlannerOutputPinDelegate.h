#pragma once
#include "CoreMinimal.h"
#include "BotOrderPlannerOutputPinDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBotOrderPlannerOutputPin, const bool, PlayerApproves);

