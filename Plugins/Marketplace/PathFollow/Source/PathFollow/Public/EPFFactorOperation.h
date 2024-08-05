#pragma once
#include "CoreMinimal.h"
#include "EPFFactorOperation.generated.h"

UENUM(BlueprintType)
enum class EPFFactorOperation : uint8 {
    None,
    Add,
    Mul,
};

