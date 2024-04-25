#pragma once
#include "CoreMinimal.h"
#include "EIGS_ConnectionPointTag.generated.h"

UENUM(BlueprintType)
enum class EIGS_ConnectionPointTag : uint8 {
    FirstFloor,
    SecondFloor,
    ThirdFloor,
    Roof,
    Outside,
    Inside,
    Tier0,
    Tier1,
    Tier2,
    Tier3,
};

