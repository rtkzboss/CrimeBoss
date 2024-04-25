#pragma once
#include "CoreMinimal.h"
#include "EIGS_OffenceType.generated.h"

UENUM(BlueprintType)
enum class EIGS_OffenceType : uint8 {
    Offence_UNKNOWN = 255,
    Offence_Player = 0,
    Offence_Noise,
    Offence_SuspActors,
    Offence_Special,
};

