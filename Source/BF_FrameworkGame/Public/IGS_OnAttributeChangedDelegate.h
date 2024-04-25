#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "IGS_OnAttributeChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FIGS_OnAttributeChanged, FGameplayAttribute, inAttribute, float, inNewValue, float, inOldValue);

