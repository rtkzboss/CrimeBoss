#pragma once
#include "CoreMinimal.h"
#include "EDFLDrawDebugAxis.generated.h"

UENUM(BlueprintType)
enum class EDFLDrawDebugAxis : uint8 {
    X,
    Y,
    Z,
    NegX,
    NegY,
    NegZ,
};

