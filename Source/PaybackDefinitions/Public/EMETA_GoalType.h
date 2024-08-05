#pragma once
#include "CoreMinimal.h"
#include "EMETA_GoalType.generated.h"

UENUM(BlueprintType)
enum class EMETA_GoalType : uint8 {
    INVALID,
    Story,
    SideQuest,
    MoneyMaking,
    Primary,
};

