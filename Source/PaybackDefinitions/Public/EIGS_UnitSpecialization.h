#pragma once
#include "CoreMinimal.h"
#include "EIGS_UnitSpecialization.generated.h"

UENUM(BlueprintType)
enum class EIGS_UnitSpecialization : uint8 {
    US_None,
    US_Sniper,
    US_Shield,
    US_Melee,
    US_Heavy,
    US_Detective,
    US_TurfWar_None,
    US_Scout,
    US_HeavyMelee,
    US_Engineer,
    US_Booster,
    US_Thrower,
    US_Artillery,
    US_Captain,
    US_Unknown = 255,
};

