#pragma once
#include "CoreMinimal.h"
#include "EIGS_StickyDefinition.generated.h"

UENUM(BlueprintType)
enum class EIGS_StickyDefinition : uint8 {
    Unknown = 255,
    Start = 0,
    Arrived,
    Changed,
    EndWithLOS,
    EndWithoutLOS,
};

