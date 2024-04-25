#pragma once
#include "CoreMinimal.h"
#include "EScreenInputPass.generated.h"

UENUM(BlueprintType)
enum class EScreenInputPass : uint8 {
    NoPass,
    PassNotHandled,
    PassEverything,
};

