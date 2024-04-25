#pragma once
#include "CoreMinimal.h"
#include "EIGS_EscapingDefinition.generated.h"

UENUM(BlueprintType)
enum class EIGS_EscapingDefinition : uint8 {
    Unknown = 255,
    Start = 0,
    Finished,
};

