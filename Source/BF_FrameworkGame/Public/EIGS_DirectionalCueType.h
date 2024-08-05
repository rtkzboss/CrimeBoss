#pragma once
#include "CoreMinimal.h"
#include "EIGS_DirectionalCueType.generated.h"

UENUM(BlueprintType)
enum class EIGS_DirectionalCueType : uint8 {
    DC_Generic,
    DC_Bullet,
    DC_Melee,
    DC_Unknown = 255,
};

