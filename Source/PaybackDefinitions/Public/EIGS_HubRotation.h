#pragma once
#include "CoreMinimal.h"
#include "EIGS_HubRotation.generated.h"

UENUM(BlueprintType)
enum class EIGS_HubRotation : uint8 {
    RotateAll,
    Rotate180,
    RotateNone,
};

