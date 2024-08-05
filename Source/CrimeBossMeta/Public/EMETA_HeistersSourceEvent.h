#pragma once
#include "CoreMinimal.h"
#include "EMETA_HeistersSourceEvent.generated.h"

UENUM(BlueprintType)
enum class EMETA_HeistersSourceEvent : uint8 {
    FromEventManagerMap,
    FromCrewOrByID,
};

