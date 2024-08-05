#pragma once
#include "CoreMinimal.h"
#include "EPFEventFireMode.generated.h"

UENUM(BlueprintType)
enum class EPFEventFireMode : uint8 {
    Forward,
    Reverse,
    Always,
};

