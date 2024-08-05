#pragma once
#include "CoreMinimal.h"
#include "IGS_OnListViewItemHoverChangedDelegate.generated.h"

class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FIGS_OnListViewItemHoverChanged, const UObject*, inObject, bool, inHovered);

