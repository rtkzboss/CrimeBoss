#pragma once
#include "CoreMinimal.h"
#include "EIGS_PostProcessType.generated.h"

UENUM(BlueprintType)
enum class EIGS_PostProcessType : uint8 {
    GPP_VisualStyle = 1,
    GPP_DirtMask,
    GPP_None = 0,
};

