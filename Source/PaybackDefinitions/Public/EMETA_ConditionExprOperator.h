#pragma once
#include "CoreMinimal.h"
#include "EMETA_ConditionExprOperator.generated.h"

UENUM(BlueprintType)
enum class EMETA_ConditionExprOperator : uint8 {
    And,
    Or,
};

