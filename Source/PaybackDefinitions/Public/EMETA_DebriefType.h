#pragma once
#include "CoreMinimal.h"
#include "EMETA_DebriefType.generated.h"

UENUM(BlueprintType)
enum class EMETA_DebriefType : uint8 {
    Standard,
    Short,
    TurfWar,
    DontShow,
};

