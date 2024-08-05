#pragma once
#include "CoreMinimal.h"
#include "BoolParamChangedBP2Delegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBoolParamChangedBP2, bool, inIsDefending);

