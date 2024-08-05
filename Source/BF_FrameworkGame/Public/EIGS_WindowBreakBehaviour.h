#pragma once
#include "CoreMinimal.h"
#include "EIGS_WindowBreakBehaviour.generated.h"

UENUM(BlueprintType)
enum class EIGS_WindowBreakBehaviour : uint8 {
    Breakable,
    Unbreakable,
    Impenetrable,
};

