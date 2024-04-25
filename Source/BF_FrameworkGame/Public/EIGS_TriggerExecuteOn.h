#pragma once
#include "CoreMinimal.h"
#include "EIGS_TriggerExecuteOn.generated.h"

UENUM(BlueprintType)
enum class EIGS_TriggerExecuteOn : uint8 {
    EIGS_BeginOverlap,
    EIGS_EndOverlap,
    EIGS_Both,
};

