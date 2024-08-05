#pragma once
#include "CoreMinimal.h"
#include "EIGS_GangsterVariationType.generated.h"

UENUM(BlueprintType)
enum class EIGS_GangsterVariationType : uint8 {
    US_None,
    US_White,
    US_Black,
    US_Russian,
    US_Sicarios,
    US_Hielo,
    US_Riders,
    US_Scudos,
    US_Specnaz,
    US_Contras,
    US_Vietcong,
    US_RussianSoldier,
    US_ArabFighters,
    US_Eastmen,
    US_FPSMaxIndex = 128,
    US_STO_Specnaz,
    US_STO_Contras,
    US_STO_Vietcong,
    US_STO_Russians,
    US_STO_Afghans,
    US_STO_Hielo,
    US_STO_WitchGoons,
    US_STO_Ronin,
    US_STO_PrisonOrg,
    US_STO_EastMen,
    US_STO_Sicarios,
    US_STO_Riders,
    US_STO_Scudos,
    US_Ninja,
    US_STO_Bluebull,
    US_STO_Latinos,
    US_STO_ExplosiveWG,
    US_Unknown = 255,
};

