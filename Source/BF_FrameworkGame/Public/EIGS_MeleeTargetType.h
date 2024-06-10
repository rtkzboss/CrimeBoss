#pragma once
#include "CoreMinimal.h"
#include "EIGS_MeleeTargetType.generated.h"

UENUM(BlueprintType)
enum class EIGS_MeleeTargetType : uint8 {
    MeleeTargetType_None,
    MeleeTargetType_StealthKill,
    MeleeTargetType_Break,
};

