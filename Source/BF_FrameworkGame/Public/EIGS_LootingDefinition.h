#pragma once
#include "CoreMinimal.h"
#include "EIGS_LootingDefinition.generated.h"

UENUM(BlueprintType)
enum class EIGS_LootingDefinition : uint8 {
    Unknown = 255,
    Start = 0,
    BagAdded,
};

