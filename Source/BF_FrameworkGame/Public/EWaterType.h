#pragma once
#include "CoreMinimal.h"
#include "EWaterType.generated.h"

UENUM(BlueprintType)
namespace EWaterType {
    enum Type {
        Puddle,
        Clear,
        DeepBlue,
        Lake,
    };
}

