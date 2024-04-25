#pragma once
#include "CoreMinimal.h"
#include "EIGS_SO_StopType.generated.h"

UENUM(BlueprintType)
enum class EIGS_SO_StopType : uint8 {
    SO_Unknown = 255,
    SO_LoopOutAnim = 0,
    SO_BreakAnim,
    SO_Immediate,
};

