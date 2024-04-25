#pragma once
#include "CoreMinimal.h"
#include "EIGS_PlayerSwapPreventedReason.generated.h"

UENUM(BlueprintType)
enum class EIGS_PlayerSwapPreventedReason : uint8 {
    SP_Unknown,
    SP_PlayerBusy,
    SP_PlayerDead,
    SP_PlayerDowned,
    SP_PlayerLocation,
    SP_BotBusy = 11,
    SP_BotDead,
    SP_BotDowned,
};

