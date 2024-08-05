#pragma once
#include "CoreMinimal.h"
#include "EMETA_AmbushStartMethod.generated.h"

UENUM(BlueprintType)
enum class EMETA_AmbushStartMethod : uint8 {
    Calculate,
    DEGUB_ForceDecline,
    DEBUG_ForceStart,
};

