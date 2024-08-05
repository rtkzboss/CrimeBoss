#pragma once
#include "CoreMinimal.h"
#include "EIGS_LocationOrScaleBoneAxis.generated.h"

UENUM(BlueprintType)
enum class EIGS_LocationOrScaleBoneAxis : uint8 {
    BA_None,
    BA_X,
    BA_Y,
    BA_Z,
    BA_XY,
    BA_XZ,
    BA_YZ,
    BA_XYZ,
};

