#pragma once
#include "CoreMinimal.h"
#include "IGS_OnBossDownChangedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FIGS_OnBossDownChangedSignature, bool, inIsVisible, bool, inIsDown);

