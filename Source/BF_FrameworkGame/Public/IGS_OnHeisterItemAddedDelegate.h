#pragma once
#include "CoreMinimal.h"
#include "IGS_OnHeisterItemAddedDelegate.generated.h"

class AIGS_GameCharacterFramework;
class UIGS_InventoryObjectFramework;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FIGS_OnHeisterItemAdded, UIGS_InventoryObjectFramework*, inItem, AIGS_GameCharacterFramework*, inCharacter);

