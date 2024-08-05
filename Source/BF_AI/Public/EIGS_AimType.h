#pragma once
#include "CoreMinimal.h"
#include "EIGS_AimType.generated.h"

UENUM(BlueprintType)
enum class EIGS_AimType : uint8 {
    None,
    Idle,
    Combat,
};

