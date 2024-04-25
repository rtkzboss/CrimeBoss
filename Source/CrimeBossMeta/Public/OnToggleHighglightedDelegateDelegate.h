#pragma once
#include "CoreMinimal.h"
#include "OnToggleHighglightedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnToggleHighglightedDelegate, bool, isHighlighted);

