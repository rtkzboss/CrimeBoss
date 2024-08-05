#pragma once
#include "CoreMinimal.h"
#include "EPFLoopType.generated.h"

UENUM(BlueprintType)
enum class EPFLoopType : uint8 {
    Replay,
    ReplayFromStart,
    PingPong,
};

