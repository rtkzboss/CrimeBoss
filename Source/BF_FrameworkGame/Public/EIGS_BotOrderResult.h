#pragma once
#include "CoreMinimal.h"
#include "EIGS_BotOrderResult.generated.h"

UENUM(BlueprintType)
enum class EIGS_BotOrderResult : uint8 {
    Unknown = 255,
    Success = 0,
    NoAction,
    NoBots,
    BotsBusy,
};

