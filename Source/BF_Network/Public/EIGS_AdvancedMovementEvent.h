#pragma once
#include "CoreMinimal.h"
#include "EIGS_AdvancedMovementEvent.generated.h"

UENUM(BlueprintType)
enum class EIGS_AdvancedMovementEvent : uint8 {
    AME_Slide,
    AME_StopSlide,
    AME_StopSlideOnZipline,
    AME_LeaveLadder,
    AME_LeaveLadderTop,
    AME_LeaveLadderJump,
    AME_LeaveRappel,
    AME_LeaveRappelFinished,
    AME_LeaveCoopClimbHelpMode,
};

