#pragma once
#include "CoreMinimal.h"
#include "EIGS_LightReactionPoseVariant.generated.h"

UENUM(BlueprintType)
enum class EIGS_LightReactionPoseVariant : uint8 {
    D_Standing,
    D_Crouching,
    D_LyingOnGround,
    D_Downstate,
};

