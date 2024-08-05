#pragma once
#include "CoreMinimal.h"
#include "EIGS_InteractionWarningPriority.generated.h"

UENUM(BlueprintType)
enum class EIGS_InteractionWarningPriority : uint8 {
    None,
    Critical,
    Important,
};

