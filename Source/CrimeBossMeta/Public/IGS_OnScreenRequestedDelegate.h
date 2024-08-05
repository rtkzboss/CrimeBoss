#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "IGS_OnScreenRequestedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_OnScreenRequested, FGameplayTag, inTag);

