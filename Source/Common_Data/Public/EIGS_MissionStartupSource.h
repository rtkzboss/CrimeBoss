#pragma once
#include "CoreMinimal.h"
#include "EIGS_MissionStartupSource.generated.h"

UENUM(BlueprintType)
enum class EIGS_MissionStartupSource : uint8 {
    INVALID = 255,
    Editor = 0,
    Meta,
    Quickplay,
};

