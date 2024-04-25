#pragma once
#include "CoreMinimal.h"
#include "DetectorBaseStateChangedEventDelegate.generated.h"

class AIGS_DetectorBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDetectorBaseStateChangedEvent, AIGS_DetectorBase*, inDetectorBase);

