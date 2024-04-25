#pragma once
#include "CoreMinimal.h"
#include "EIGS_LootQueryType.generated.h"

UENUM(BlueprintType)
enum class EIGS_LootQueryType : uint8 {
    Unknown,
    Collection,
    Carryable,
};

