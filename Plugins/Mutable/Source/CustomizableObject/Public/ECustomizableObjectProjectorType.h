#pragma once
#include "CoreMinimal.h"
#include "ECustomizableObjectProjectorType.generated.h"

UENUM(BlueprintType)
enum class ECustomizableObjectProjectorType : uint8 {
    Planar,
    Cylindrical,
    Wrapping,
};

