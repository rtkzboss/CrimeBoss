#pragma once
#include "CoreMinimal.h"
#include "IGS_PickupThrownSignatureDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_PickupThrownSignature, AActor*, inPickup);

