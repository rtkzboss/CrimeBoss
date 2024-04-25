#pragma once
#include "CoreMinimal.h"
#include "EIGS_DebugBoneTextTransformSpaceFormat.generated.h"

UENUM(BlueprintType)
enum class EIGS_DebugBoneTextTransformSpaceFormat : uint8 {
    WorldSpace,
    LocalSpace,
};

