#pragma once
#include "CoreMinimal.h"
#include "EMETA_NotificationEffect.generated.h"

UENUM(BlueprintType)
enum class EMETA_NotificationEffect : uint8 {
    Neutral,
    Negative,
    Positive,
    Story,
};

