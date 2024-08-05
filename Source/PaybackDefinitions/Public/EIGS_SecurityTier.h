#pragma once
#include "CoreMinimal.h"
#include "EIGS_SecurityTier.generated.h"

UENUM(BlueprintType)
enum class EIGS_SecurityTier : uint8 {
    Tier0,
    Tier1,
    Tier2,
    Tier3,
};

