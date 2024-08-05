#pragma once
#include "CoreMinimal.h"
#include "EIGS_CoverVariant.generated.h"

UENUM(BlueprintType)
enum class EIGS_CoverVariant : uint8 {
    CV_Unknown = 255,
    CV_None = 0,
    AIM_CoverPeekLeft_In,
    AIM_CoverPeekRight_In,
    AIM_CoverPeekLeft_Out,
    AIM_CoverPeekRight_Out,
    AIM_CoverPeekUp_Out,
};

