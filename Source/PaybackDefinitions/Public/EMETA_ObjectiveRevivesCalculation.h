#pragma once
#include "CoreMinimal.h"
#include "EMETA_ObjectiveRevivesCalculation.generated.h"

UENUM(BlueprintType)
enum class EMETA_ObjectiveRevivesCalculation : uint8 {
    AccumulateForAll,
    PerMember,
};

