#pragma once
#include "CoreMinimal.h"
#include "EIGS_DsEffectMode.generated.h"

UENUM(BlueprintType)
enum class EIGS_DsEffectMode : uint8 {
    Off,
    Weapon,
    Vibration,
    Feedback,
    SlopeFeedback,
    MultiplePositionFeedback,
    MultiplePositionVibration,
};

