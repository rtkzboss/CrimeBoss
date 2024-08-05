#pragma once
#include "CoreMinimal.h"
#include "EIGS_BoneAxis.generated.h"

UENUM(BlueprintType)
enum class EIGS_BoneAxis : uint8 {
    BA_None,
    BA_X,
    BA_Y,
    BA_Z,
};

