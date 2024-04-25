#pragma once
#include "CoreMinimal.h"
#include "IGS_MetaCutsceneDataDelegateDelegate.generated.h"

class UIGS_MetaCutsceneDataAsset;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_MetaCutsceneDataDelegate, UIGS_MetaCutsceneDataAsset*, CutsceneData);

