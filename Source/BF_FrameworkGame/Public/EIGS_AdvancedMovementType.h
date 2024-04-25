#pragma once
#include "CoreMinimal.h"
#include "EIGS_AdvancedMovementType.generated.h"

UENUM(BlueprintType)
enum class EIGS_AdvancedMovementType : uint8 {
    AMT_None,
    AMT_ZiplineGrab,
    AMT_LadderGrab,
    AMT_LadderLeave,
    AMT_RopeGrab,
    AMT_RopeLeave,
    AMT_VentEnter,
    AMT_RappelGrab,
    AMT_RappelLeave,
    AMT_CoopClimbHelp,
    AMT_CoopClimbing,
};

