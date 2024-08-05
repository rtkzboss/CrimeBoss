#pragma once
#include "CoreMinimal.h"
#include "EIGS_KeypadButton.generated.h"

UENUM(BlueprintType)
enum class EIGS_KeypadButton : uint8 {
    Number,
    Escape,
    Clear,
};

