#pragma once
#include "CoreMinimal.h"
#include "EMETA_TradeRelationship.generated.h"

UENUM(BlueprintType)
enum class EMETA_TradeRelationship : uint8 {
    UNDEFINED,
    Good,
    Neutral,
    Bad,
    Hostile,
};

