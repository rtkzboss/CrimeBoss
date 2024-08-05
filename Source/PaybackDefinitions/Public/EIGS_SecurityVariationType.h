#pragma once
#include "CoreMinimal.h"
#include "EIGS_SecurityVariationType.generated.h"

UENUM(BlueprintType)
enum class EIGS_SecurityVariationType : uint8 {
    US_None,
    US_RDR,
    US_RDR2,
    US_Metahuman,
    US_Jewelry,
    US_Bay,
    US_Prison,
    US_Cop,
    US_Elite,
    US_FPSMaxIndex = 128,
    US_STO_Prison,
    US_Unknown = 255,
};

