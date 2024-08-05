#pragma once
#include "CoreMinimal.h"
#include "EIGS_JumpLinkState.generated.h"

UENUM(BlueprintType)
enum class EIGS_JumpLinkState : uint8 {
    In,
    Running,
    Out,
};

