#pragma once
#include "CoreMinimal.h"
#include "EIGS_MenuSlotOccupation.generated.h"

UENUM(BlueprintType)
enum class EIGS_MenuSlotOccupation : uint8 {
    Empty,
    Player,
    Bot,
};

