#pragma once
#include "CoreMinimal.h"
#include "EIGS_CopsVariationType.generated.h"

UENUM(BlueprintType)
enum class EIGS_CopsVariationType : uint8 {
    US_None,
    US_Specnaz,
    US_Contras,
    US_Vietcong,
    US_Detective,
    US_Russians,
    US_ParkRangers,
    US_Advanced,
    US_Metahuman,
    US_Elite,
    US_Robot,
    US_CagnaliRobot,
    US_Cagnali,
    US_Detective1 = 101,
    US_Detective2,
    US_Detective3,
    US_Detective4,
    US_Detective5,
    US_Detective6,
    US_Detective7,
    US_Detective8,
    US_Detective9,
    US_Detective10,
    US_FPSMaxIndex = 128,
    US_STO_ParkRanger,
    US_STO_Jupiter5,
    US_Unknown = 255,
};

