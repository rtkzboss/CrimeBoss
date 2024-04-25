#pragma once
#include "CoreMinimal.h"
#include "EIGS_SquadHealthChangedDefinition.generated.h"

UENUM(BlueprintType)
enum class EIGS_SquadHealthChangedDefinition : uint8 {
    Unknown = 255,
    HeistersLowHP = 0,
    HeistersHalfHP,
};

