#pragma once
#include "CoreMinimal.h"
#include "IGS_DialogueAsyncNodeDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_DialogueAsyncNodeDelegate, int32, LineIndex);

