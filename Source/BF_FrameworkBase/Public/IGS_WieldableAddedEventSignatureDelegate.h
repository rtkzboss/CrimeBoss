#pragma once
#include "CoreMinimal.h"
#include "EIGS_WieldableSlot.h"
#include "IGS_WieldableAddedEventSignatureDelegate.generated.h"

class UIGS_WieldableInventoryObjectBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FIGS_WieldableAddedEventSignature, UIGS_WieldableInventoryObjectBase*, inInventoryObject, EIGS_WieldableSlot, inSlot);

