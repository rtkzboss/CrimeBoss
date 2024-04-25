#pragma once
#include "CoreMinimal.h"
#include "EIGS_HealthChangedDefinition.generated.h"

UENUM(BlueprintType)
enum class EIGS_HealthChangedDefinition : uint8 {
    Unknown = 255,
    Normal = 0,
    Accumulated,
};

