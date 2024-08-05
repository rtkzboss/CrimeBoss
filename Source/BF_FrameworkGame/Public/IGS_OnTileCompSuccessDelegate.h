#pragma once
#include "CoreMinimal.h"
#include "IGS_OnTileCompSuccessDelegate.generated.h"

class AIGS_GameCharacterFramework;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_OnTileCompSuccess, AIGS_GameCharacterFramework*, inInstigator);

