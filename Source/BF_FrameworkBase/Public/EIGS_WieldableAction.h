#pragma once
#include "CoreMinimal.h"
#include "EIGS_WieldableAction.generated.h"

UENUM(BlueprintType)
enum class EIGS_WieldableAction : uint8 {
    StartAction,
    StopAction,
    ForceStopAction,
};

