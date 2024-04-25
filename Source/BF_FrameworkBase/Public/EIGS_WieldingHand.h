#pragma once
#include "CoreMinimal.h"
#include "EIGS_WieldingHand.generated.h"

UENUM(BlueprintType)
enum class EIGS_WieldingHand : uint8 {
    RightHand,
    LeftHand,
    AnyHand,
    BothHands,
    NoHand,
};

