#pragma once
#include "CoreMinimal.h"
#include "EIGS_ReloadInterruptReasonEnum.generated.h"

UENUM(BlueprintType)
enum class EIGS_ReloadInterruptReasonEnum : uint8 {
    Other,
    Shooting,
    Sprinting,
    Bashing,
    ChangingWeapons,
    Interaction,
    GameplayEventRequest,
    BotSwitch,
    MAX,
    UNKNOWN = 255,
};

