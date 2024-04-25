#pragma once
#include "CoreMinimal.h"
#include "EIGS_PushForTarget.generated.h"

UENUM(BlueprintType)
enum class EIGS_PushForTarget : uint8 {
    None,
    Low,
    Medium,
    High,
};

