#pragma once
#include "CoreMinimal.h"
#include "EIGS_DamageStrengthType.generated.h"

UENUM(BlueprintType)
enum class EIGS_DamageStrengthType : uint8 {
    Unknown = 255,
    Light = 0,
    Heavy,
};

