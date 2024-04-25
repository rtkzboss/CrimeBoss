#pragma once
#include "CoreMinimal.h"
#include "OnActiveObjectiveChangedEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnActiveObjectiveChangedEvent, int32, inOldObjectiveID, int32, inNewObjectiveID);

