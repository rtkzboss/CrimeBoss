#pragma once
#include "CoreMinimal.h"
#include "IGS_DoorOpenedEventDelegate.generated.h"

class AIGS_DoorBase;
class AIGS_GameCharacterFramework;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FIGS_DoorOpenedEvent, AIGS_GameCharacterFramework*, inCharacter, AIGS_DoorBase*, inOpenedDoor);

