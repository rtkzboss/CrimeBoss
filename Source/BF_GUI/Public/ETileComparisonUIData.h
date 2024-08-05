#pragma once
#include "CoreMinimal.h"
#include "ETileComparisonUIData.generated.h"

UENUM(BlueprintType)
enum class ETileComparisonUIData : uint8 {
    None,
    Better,
    Worse,
};

