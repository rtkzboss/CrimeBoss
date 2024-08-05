#pragma once
#include "CoreMinimal.h"
#include "IGS_RearDoorInteractionDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_RearDoorInteraction, bool, IsOpen);

