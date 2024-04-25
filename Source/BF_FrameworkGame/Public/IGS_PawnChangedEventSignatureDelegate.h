#pragma once
#include "CoreMinimal.h"
#include "IGS_PawnChangedEventSignatureDelegate.generated.h"

class APawn;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_PawnChangedEventSignature, APawn*, inNewPawn);

