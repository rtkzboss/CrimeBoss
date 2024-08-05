#pragma once
#include "CoreMinimal.h"
#include "EIGS_WindScenarioType.generated.h"

UENUM(BlueprintType)
enum class EIGS_WindScenarioType : uint8 {
    Wind_Still,
    Wind_LightAir,
    Wind_Breeze,
    Wind_Gale,
    Wind_Storm,
    Wind_Hurricane,
};

