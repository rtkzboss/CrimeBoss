#pragma once
#include "CoreMinimal.h"
#include "EIGS_AILootingBehavior.generated.h"

UENUM(BlueprintType)
enum class EIGS_AILootingBehavior : uint8 {
    Allways,
    OnlyCommanded,
    OnlyUnlocked,
    Never,
};

