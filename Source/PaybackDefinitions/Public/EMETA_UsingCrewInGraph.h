#pragma once
#include "CoreMinimal.h"
#include "EMETA_UsingCrewInGraph.generated.h"

UENUM(BlueprintType)
enum class EMETA_UsingCrewInGraph : uint8 {
    TemporaryCrew,
    KeepCrewOnlySuccess,
    KeepCrew,
    KeepCrewAndIgnoreLosses,
};

