#pragma once
#include "CoreMinimal.h"
#include "EIGS_GangsterPresence.generated.h"

UENUM(BlueprintType)
enum class EIGS_GangsterPresence : uint8 {
    INVALID = 255,
    Unknown = 0,
    Low,
    Normal,
    More,
    Extreme,
};

