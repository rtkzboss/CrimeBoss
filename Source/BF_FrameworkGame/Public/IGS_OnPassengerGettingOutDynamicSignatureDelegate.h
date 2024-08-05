#pragma once
#include "CoreMinimal.h"
#include "IGS_OnPassengerGettingOutDynamicSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_OnPassengerGettingOutDynamicSignature, int32, inPassengerIndex);

