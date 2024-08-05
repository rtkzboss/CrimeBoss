#pragma once
#include "CoreMinimal.h"
#include "EMETA_TradeVendor.generated.h"

UENUM(BlueprintType)
enum class EMETA_TradeVendor : uint8 {
    UNDEFINED,
    ICE,
    Khan,
    DollarDragon,
    Cagnali,
    PawnShop,
    Last,
};

