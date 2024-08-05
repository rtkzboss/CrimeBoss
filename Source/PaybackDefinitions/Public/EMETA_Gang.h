#pragma once
#include "CoreMinimal.h"
#include "EMETA_Gang.generated.h"

UENUM(BlueprintType)
enum class EMETA_Gang : uint8 {
    None,
    Baker,
    ICE,
    Khan,
    DollarDragon,
    Cagnali,
    GANG_MAX UMETA(Hidden),
};

