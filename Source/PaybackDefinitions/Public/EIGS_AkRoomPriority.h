#pragma once
#include "CoreMinimal.h"
#include "EIGS_AkRoomPriority.generated.h"

UENUM(BlueprintType)
enum class EIGS_AkRoomPriority : uint8 {
    None,
    Min,
    Low = 5,
    Medium = 10,
    High = 15,
    Max = 20,
};

