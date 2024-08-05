#pragma once
#include "CoreMinimal.h"
#include "EIGS_ThreatPointPriority.generated.h"

UENUM(BlueprintType)
enum class EIGS_ThreatPointPriority : uint8 {
    TPP_Low,
    TPP_High,
};

