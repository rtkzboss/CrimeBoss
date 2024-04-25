#pragma once
#include "CoreMinimal.h"
#include "EIGS_DsTriggerMask.generated.h"

UENUM(BlueprintType)
enum class EIGS_DsTriggerMask : uint8 {
    None,
    Left,
    Right,
    Both,
};

