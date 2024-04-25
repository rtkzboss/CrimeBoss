#pragma once
#include "CoreMinimal.h"
#include "EMETA_PerksPreference.generated.h"

UENUM(BlueprintType)
enum class EMETA_PerksPreference : uint8 {
    Any,
    OnlyPositive,
    OnlyNegative,
};

