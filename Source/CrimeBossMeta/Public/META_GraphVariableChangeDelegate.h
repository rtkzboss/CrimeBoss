#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "META_GraphVariableChangeDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FMETA_GraphVariableChange, FGameplayTag, ChangedTag, int32, CurrentValue);

