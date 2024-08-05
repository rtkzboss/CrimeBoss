#pragma once
#include "CoreMinimal.h"
#include "EIGS_CustomSlotFilteringResult.generated.h"

UENUM(BlueprintType)
enum class EIGS_CustomSlotFilteringResult : uint8 {
    Res_Passed,
    Res_Failed,
    Res_Unhandled,
};

