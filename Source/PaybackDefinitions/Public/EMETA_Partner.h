#pragma once
#include "CoreMinimal.h"
#include "EMETA_Partner.generated.h"

UENUM(BlueprintType)
enum class EMETA_Partner : uint8 {
    None,
    Secretary,
    RightHand,
    Captain,
    Agent,
};

