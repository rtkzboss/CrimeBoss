#pragma once
#include "CoreMinimal.h"
#include "OnInstanceBreakableStateChangedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnInstanceBreakableStateChangedDelegate, int32, InstanceIndex);

