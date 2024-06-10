#pragma once
#include "CoreMinimal.h"
#include "EMETA_TradeExpenseType.generated.h"

UENUM(BlueprintType)
enum class EMETA_TradeExpenseType : uint8 {
    Unknown,
    Money,
    Loot,
    Soldiers,
};

