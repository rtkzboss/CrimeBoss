#pragma once
#include "CoreMinimal.h"
#include "IGS_OnPickedUpDelegate.generated.h"

class AIGS_GameCharacterFramework;
class AIGS_PickupActorBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FIGS_OnPickedUp, AIGS_PickupActorBase*, inSelf, AIGS_GameCharacterFramework*, inInstigator);

