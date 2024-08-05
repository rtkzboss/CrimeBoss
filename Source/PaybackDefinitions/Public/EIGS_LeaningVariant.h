#pragma once
#include "CoreMinimal.h"
#include "EIGS_LeaningVariant.generated.h"

UENUM(BlueprintType)
enum class EIGS_LeaningVariant : uint8 {
    AIM_Unknown = 255,
    AIM_None = 0,
    AIM_Left_In,
    AIM_Right_In,
    AIM_Up_In,
    AIM_Left_Out,
    AIM_Right_Out,
    AIM_Up_Out,
};

