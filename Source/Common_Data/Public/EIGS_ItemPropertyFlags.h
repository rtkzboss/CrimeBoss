#pragma once
#include "CoreMinimal.h"
#include "EIGS_ItemPropertyFlags.generated.h"

UENUM(BlueprintType)
enum class EIGS_ItemPropertyFlags : uint8 {
    Property_Droppable,
    Property_Stackable,
    Property_Consumable,
    Property_Wieldable,
    Property_PlayerForbidden,
    Property_Metal,
    Property_Money,
    Property_LootBag,
};

