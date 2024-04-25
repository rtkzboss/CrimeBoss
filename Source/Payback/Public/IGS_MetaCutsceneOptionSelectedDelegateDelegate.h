#pragma once
#include "CoreMinimal.h"
#include "IGS_MetaCutsceneOptionSelectedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FIGS_MetaCutsceneOptionSelectedDelegate, FName, NodeName, int32, OptionIndex, bool, Ending);

