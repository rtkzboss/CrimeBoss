#pragma once
#include "CoreMinimal.h"
#include "EntranceLockStateChangedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEntranceLockStateChangedSignature, bool, inState);

