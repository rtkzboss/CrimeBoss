#pragma once
#include "CoreMinimal.h"
#include "EIGS_NavFilterType.generated.h"

UENUM(BlueprintType)
enum class EIGS_NavFilterType : uint8 {
    None,
    TraceTarget,
    CheckSpawnValidity,
};

