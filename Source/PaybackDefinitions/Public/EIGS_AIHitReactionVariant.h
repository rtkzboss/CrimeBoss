#pragma once
#include "CoreMinimal.h"
#include "EIGS_AIHitReactionVariant.generated.h"

UENUM(BlueprintType)
enum class EIGS_AIHitReactionVariant : uint8 {
    SO_Unknown = 255,
    Front = 0,
    Left,
    Back,
    Right,
};

