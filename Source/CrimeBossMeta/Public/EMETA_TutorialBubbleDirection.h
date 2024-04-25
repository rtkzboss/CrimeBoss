#pragma once
#include "CoreMinimal.h"
#include "EMETA_TutorialBubbleDirection.generated.h"

UENUM(BlueprintType)
enum class EMETA_TutorialBubbleDirection : uint8 {
    TopLeft,
    TopRight,
    BottomLeft,
    BottomRight,
};

