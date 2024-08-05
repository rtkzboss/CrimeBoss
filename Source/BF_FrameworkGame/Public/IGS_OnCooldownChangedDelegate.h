#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "IGS_OnCooldownChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FIGS_OnCooldownChanged, FGameplayTag, inCooldownTag, float, inTimeRemaining, float, inDuration);

