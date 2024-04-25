#pragma once
#include "CoreMinimal.h"
#include "IGS_OnTileSuccessDelegate.generated.h"

class AIGS_GameCharacterFramework;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_OnTileSuccess, AIGS_GameCharacterFramework*, inInstigator);

