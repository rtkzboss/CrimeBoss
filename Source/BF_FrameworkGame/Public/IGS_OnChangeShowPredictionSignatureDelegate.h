#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "IGS_OnChangeShowPredictionSignatureDelegate.generated.h"

class UIGS_ThrowableInventoryObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FIGS_OnChangeShowPredictionSignature, bool, inShow, TSubclassOf<UIGS_ThrowableInventoryObject>, inPredictedClass);

