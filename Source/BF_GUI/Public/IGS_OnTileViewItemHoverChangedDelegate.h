#pragma once
#include "CoreMinimal.h"
#include "IGS_OnTileViewItemHoverChangedDelegate.generated.h"

class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FIGS_OnTileViewItemHoverChanged, const UObject*, inObject, bool, inHovered);

