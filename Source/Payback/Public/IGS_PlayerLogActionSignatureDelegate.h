#pragma once
#include "CoreMinimal.h"
#include "IGS_PlayerLogActionSignatureDelegate.generated.h"

class APlayerController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_PlayerLogActionSignature, APlayerController*, PlayerController);

