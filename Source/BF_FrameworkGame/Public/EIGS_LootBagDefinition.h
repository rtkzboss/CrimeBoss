#pragma once
#include "CoreMinimal.h"
#include "EIGS_LootBagDefinition.generated.h"

UENUM(BlueprintType)
enum class EIGS_LootBagDefinition : uint8 {
    Unknown = 255,
    PickedUp = 0,
    CatchInAir,
};

