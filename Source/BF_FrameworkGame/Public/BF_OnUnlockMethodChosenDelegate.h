#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "BF_OnUnlockMethodChosenDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBF_OnUnlockMethodChosen, FGameplayTag, outMethod);

