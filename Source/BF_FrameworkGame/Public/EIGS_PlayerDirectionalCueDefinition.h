#pragma once
#include "CoreMinimal.h"
#include "EIGS_PlayerDirectionalCueDefinition.generated.h"

UENUM(BlueprintType)
enum class EIGS_PlayerDirectionalCueDefinition : uint8 {
    Unknown = 255,
    Melee = 0,
};

