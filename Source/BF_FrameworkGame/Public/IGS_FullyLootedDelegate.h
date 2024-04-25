#pragma once
#include "CoreMinimal.h"
#include "IGS_FullyLootedDelegate.generated.h"

class AIGS_GameCharacterFramework;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_FullyLooted, AIGS_GameCharacterFramework*, Instigator);

