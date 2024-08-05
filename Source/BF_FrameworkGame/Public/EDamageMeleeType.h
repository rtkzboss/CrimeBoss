#pragma once
#include "CoreMinimal.h"
#include "EDamageMeleeType.generated.h"

UENUM(BlueprintType)
enum class EDamageMeleeType : uint8 {
    Default,
    Claws,
    MetalBlunt = 11,
    MetalSharp,
};

