#pragma once
#include "CoreMinimal.h"
#include "IGS_LoadoutInitializedSignatureDelegate.generated.h"

class UIGS_PlayerLoadoutComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_LoadoutInitializedSignature, UIGS_PlayerLoadoutComponent*, inPlayerLoadoutComponent);

