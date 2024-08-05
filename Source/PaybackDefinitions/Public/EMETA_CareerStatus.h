#pragma once
#include "CoreMinimal.h"
#include "EMETA_CareerStatus.generated.h"

UENUM(BlueprintType)
enum class EMETA_CareerStatus : uint8 {
    None,
    Finished,
    Ongoing,
};

