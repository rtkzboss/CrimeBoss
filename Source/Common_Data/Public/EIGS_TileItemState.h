#pragma once
#include "CoreMinimal.h"
#include "EIGS_TileItemState.generated.h"

UENUM(BlueprintType)
enum class EIGS_TileItemState : uint8 {
    Locked,
    Unlocked,
    Available,
    Owned,
    LockedDLC,
};

