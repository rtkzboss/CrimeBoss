#pragma once
#include "CoreMinimal.h"
#include "IGS_LevelTransitionSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FIGS_LevelTransitionSignature, FName, inLevelName, bool, inIsServerTravel);

