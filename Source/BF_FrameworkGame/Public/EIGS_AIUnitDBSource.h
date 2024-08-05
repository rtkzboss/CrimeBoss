#pragma once
#include "CoreMinimal.h"
#include "EIGS_AIUnitDBSource.generated.h"

UENUM(BlueprintType)
enum class EIGS_AIUnitDBSource : uint8 {
    US_Unknown,
    US_FPS,
    US_Story,
    US_Old,
    US_FPS_VIP = 11,
    US_Story_VIP,
};

