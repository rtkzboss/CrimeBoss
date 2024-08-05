#pragma once
#include "CoreMinimal.h"
#include "EMETA_MenuState.h"
#include "IGS_OnMetaMenuStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_OnMetaMenuStateChanged, EMETA_MenuState, inState);

