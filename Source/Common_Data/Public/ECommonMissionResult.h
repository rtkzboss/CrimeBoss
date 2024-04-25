#pragma once
#include "CoreMinimal.h"
#include "ECommonMissionResult.generated.h"

UENUM(BlueprintType)
enum class ECommonMissionResult : uint8 {
    Res_UNKNOWN = 255,
    Res_Abort = 0,
    Res_Fail,
    Res_Success,
    Res_Escaped,
};

