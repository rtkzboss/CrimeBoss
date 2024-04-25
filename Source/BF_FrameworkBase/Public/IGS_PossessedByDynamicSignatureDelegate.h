#pragma once
#include "CoreMinimal.h"
#include "IGS_PossessedByDynamicSignatureDelegate.generated.h"

class AController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_PossessedByDynamicSignature, AController*, NewController);

