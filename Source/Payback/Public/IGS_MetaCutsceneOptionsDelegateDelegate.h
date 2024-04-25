#pragma once
#include "CoreMinimal.h"
#include "IGS_MetaCutsceneNodeOption.h"
#include "IGS_MetaCutsceneOptionsDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FIGS_MetaCutsceneOptionsDelegate, FText, ChoiceText, const TArray<FIGS_MetaCutsceneNodeOption>&, Options, int32, DefaultOption, float, TimeToSelect);

