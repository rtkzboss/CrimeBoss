#pragma once
#include "CoreMinimal.h"
#include "IGS_SideDoorInteractionDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_SideDoorInteraction, bool, IsOpen);

