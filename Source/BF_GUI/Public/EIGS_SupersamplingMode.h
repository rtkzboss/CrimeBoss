#pragma once
#include "CoreMinimal.h"
#include "EIGS_SupersamplingMode.generated.h"

UENUM(BlueprintType)
enum class EIGS_SupersamplingMode : uint8 {
    SSM_Off,
    SSM_DLSS,
    SSM_XeSS,
    SSM_FSR,
};

