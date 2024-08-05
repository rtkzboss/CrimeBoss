#pragma once
#include "CoreMinimal.h"
#include "IGS_MetaCutsceneSkipDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_MetaCutsceneSkipDelegate, bool, IsSkippable);

