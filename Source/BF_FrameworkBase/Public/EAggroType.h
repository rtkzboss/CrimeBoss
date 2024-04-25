#pragma once
#include "CoreMinimal.h"
#include "EAggroType.generated.h"

UENUM(BlueprintType)
enum class EAggroType : uint8 {
    AT_Sight,
    AT_Hear,
    AT_Damage,
    AT_Taunt,
    AT_MAX_INDEX,
};

