#pragma once
#include "CoreMinimal.h"
#include "EIGS_AnimationTaskFinishedReason.generated.h"

UENUM(BlueprintType)
enum class EIGS_AnimationTaskFinishedReason : uint8 {
    Reason_Unknown = 255,
    Reason_Finished = 0,
    Reason_Cancelled,
    Reason_OwnerDied,
    Reason_Damage,
    Reason_Aborted,
};

