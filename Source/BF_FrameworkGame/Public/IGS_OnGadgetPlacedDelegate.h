#pragma once
#include "CoreMinimal.h"
#include "IGS_OnGadgetPlacedDelegate.generated.h"

class AIGS_GameCharacterFramework;
class AIGS_ItemPlacementBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FIGS_OnGadgetPlaced, AIGS_ItemPlacementBase*, GadgetActor, AIGS_GameCharacterFramework*, Instigator);

