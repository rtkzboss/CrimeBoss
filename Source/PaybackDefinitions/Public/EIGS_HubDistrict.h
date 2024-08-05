#pragma once
#include "CoreMinimal.h"
#include "EIGS_HubDistrict.generated.h"

UENUM(BlueprintType)
enum class EIGS_HubDistrict : uint8 {
    INVALID = 255,
    Downtown = 0,
    Industrial,
    Beach,
};

