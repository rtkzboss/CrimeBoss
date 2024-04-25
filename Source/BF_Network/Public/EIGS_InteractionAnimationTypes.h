#pragma once
#include "CoreMinimal.h"
#include "EIGS_InteractionAnimationTypes.generated.h"

UENUM(BlueprintType)
enum class EIGS_InteractionAnimationTypes : uint8 {
    EIGS_DoorOpened,
    EIGS_DoorClosed,
    EIGS_Pickup,
    EIGS_ThrowLoot,
    EIGS_Ziptie,
    EIGS_CarryableThrowLow,
    EIGS_CarryableThrow,
    EIGS_LootBagPickup,
    EIGS_LootCollectionStart,
    EIGS_LootCollectionEnd,
    EIGS_Undefined,
};

