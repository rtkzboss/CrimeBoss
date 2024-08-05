#pragma once
#include "CoreMinimal.h"
#include "EMETA_LootPurpose.generated.h"

UENUM(BlueprintType)
enum class EMETA_LootPurpose : uint8 {
    Received,
    Spent,
    Sold,
};

