#pragma once
#include "CoreMinimal.h"
#include "EIGS_MenuInputState.generated.h"

UENUM(BlueprintType)
enum class EIGS_MenuInputState : uint8 {
    Input_Open,
    Input_Close,
    Input_Toggle,
    Input_MAX UMETA(Hidden),
    Input_UNKNOWN = 255,
};

