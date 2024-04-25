#pragma once
#include "CoreMinimal.h"
#include "ECustomizableObjectGroupType.generated.h"

UENUM(BlueprintType)
enum class ECustomizableObjectGroupType : uint8 {
    COGT_TOGGLE,
    COGT_ALL,
    COGT_ONE,
    COGT_ONE_OR_NONE,
};

