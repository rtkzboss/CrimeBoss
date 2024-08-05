#pragma once
#include "CoreMinimal.h"
#include "EIGS_UnregisterReason.generated.h"

UENUM(BlueprintType)
enum class EIGS_UnregisterReason : uint8 {
    UR_EndPlay,
    UR_Death,
    UR_BotSwitch,
};

