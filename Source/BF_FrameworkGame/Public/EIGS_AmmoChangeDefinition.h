#pragma once
#include "CoreMinimal.h"
#include "EIGS_AmmoChangeDefinition.generated.h"

UENUM(BlueprintType)
enum class EIGS_AmmoChangeDefinition : uint8 {
    Unknown = 255,
    NoAmmo = 0,
    LowAmmo,
    HalfAmmo,
    FullAmmo,
};

