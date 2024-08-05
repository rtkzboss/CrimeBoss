#pragma once
#include "CoreMinimal.h"
#include "EIGS_HubGridPlacement.generated.h"

UENUM(BlueprintType)
enum class EIGS_HubGridPlacement : uint8 {
    OuterCorner,
    Outer,
    Inner,
};

