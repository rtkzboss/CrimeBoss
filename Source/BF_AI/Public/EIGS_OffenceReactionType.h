#pragma once
#include "CoreMinimal.h"
#include "EIGS_OffenceReactionType.generated.h"

UENUM(BlueprintType)
enum class EIGS_OffenceReactionType : uint8 {
    Offence_UNKNOWN = 255,
    Offence_Player = 0,
    Offence_Noise,
    Offence_SuspActors,
};

