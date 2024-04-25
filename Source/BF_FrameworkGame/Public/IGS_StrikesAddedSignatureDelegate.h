#pragma once
#include "CoreMinimal.h"
#include "IGS_StrikesAddedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FIGS_StrikesAddedSignature, int32, inStrikeCount, int32, inStrikeIncrease, const FText&, inBlameText);

