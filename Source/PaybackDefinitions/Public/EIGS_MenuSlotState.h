#pragma once
#include "CoreMinimal.h"
#include "EIGS_MenuSlotState.generated.h"

UENUM(BlueprintType)
enum class EIGS_MenuSlotState : uint8 {
    NotSeleced,
    Selecting,
    NotReady,
    Ready,
};

