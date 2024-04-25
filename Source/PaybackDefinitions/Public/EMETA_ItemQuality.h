#pragma once
#include "CoreMinimal.h"
#include "EMETA_ItemQuality.generated.h"

UENUM(BlueprintType)
enum class EMETA_ItemQuality : uint8 {
    None,
    Common,
    MinGenerate = Common,
    Uncommon,
    Rare,
    Epic,
    Legendary,
    MaxGenerate = Legendary,
    Reserved,
};

