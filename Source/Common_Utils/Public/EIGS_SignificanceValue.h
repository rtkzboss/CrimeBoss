#pragma once
#include "CoreMinimal.h"
#include "EIGS_SignificanceValue.generated.h"

UENUM(BlueprintType)
enum class EIGS_SignificanceValue : uint8 {
    None,
    Low,
    Medium,
    High,
    Epic,
};

