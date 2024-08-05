#pragma once
#include "CoreMinimal.h"
#include "EIGS_DebugBoneAxisTypes.generated.h"

UENUM(BlueprintType)
enum class EIGS_DebugBoneAxisTypes : uint8 {
    X,
    Y,
    Z,
    XY,
    YZ,
    XZ,
    XYZ,
};

