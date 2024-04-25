#pragma once
#include "CoreMinimal.h"
#include "EMETA_VariablesScope.generated.h"

UENUM(BlueprintType)
enum class EMETA_VariablesScope : uint8 {
    Any,
    SpecificByTag,
};

