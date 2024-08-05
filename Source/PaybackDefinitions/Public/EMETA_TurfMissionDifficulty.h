#pragma once
#include "CoreMinimal.h"
#include "EMETA_TurfMissionDifficulty.generated.h"

UENUM(BlueprintType)
enum class EMETA_TurfMissionDifficulty : uint8 {
    None,
    Easy,
    Medium,
    Hard,
};

