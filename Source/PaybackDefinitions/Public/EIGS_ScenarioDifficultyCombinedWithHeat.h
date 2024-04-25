#pragma once
#include "CoreMinimal.h"
#include "EIGS_ScenarioDifficultyCombinedWithHeat.generated.h"

UENUM(BlueprintType)
enum class EIGS_ScenarioDifficultyCombinedWithHeat : uint8 {
    SDCWH_Unknown,
    SDCWH_LightForce,
    SDCWH_MediumForce,
    SDCWH_HeavyForce,
    SDCWH_VeryHeavyForce,
    SDCWH_Extreme,
};

