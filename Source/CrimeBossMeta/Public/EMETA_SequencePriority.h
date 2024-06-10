#pragma once
#include "CoreMinimal.h"
#include "EMETA_SequencePriority.generated.h"

UENUM(BlueprintType)
enum class EMETA_SequencePriority : uint8 {
    Normal,
    High,
    Critical,
};

