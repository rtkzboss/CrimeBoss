#pragma once
#include "CoreMinimal.h"
#include "GameplayEffectTypes.h"
#include "GameplayTagContainer.h"
#include "IGS_OnGameplayEffectStackChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FIGS_OnGameplayEffectStackChanged, FGameplayTag, inEffectGameplayTag, FActiveGameplayEffectHandle, inHandle, int32, inNewStackCount, int32, inOldStackCount);

