#pragma once
#include "CoreMinimal.h"
#include "EIGS_DialoguePreloadOption.generated.h"

UENUM(BlueprintType)
enum class EIGS_DialoguePreloadOption : uint8 {
    NoPreload,
    MissionPreload,
    AllPreload,
};

