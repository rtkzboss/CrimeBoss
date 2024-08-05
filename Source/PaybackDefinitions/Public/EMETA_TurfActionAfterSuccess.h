#pragma once
#include "CoreMinimal.h"
#include "EMETA_TurfActionAfterSuccess.generated.h"

UENUM(BlueprintType)
enum class EMETA_TurfActionAfterSuccess : uint8 {
    None,
    NeutralizeTurf,
    CaptureTurf,
    StrengthChange,
};

