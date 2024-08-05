#pragma once
#include "CoreMinimal.h"
#include "EIGS_PerkModeUsage.generated.h"

UENUM(BlueprintType)
enum class EIGS_PerkModeUsage : uint8 {
    None,
    Singleplayer,
    Multiplayer,
    Boss = 4,
};

