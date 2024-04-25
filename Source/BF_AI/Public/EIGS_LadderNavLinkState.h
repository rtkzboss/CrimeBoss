#pragma once
#include "CoreMinimal.h"
#include "EIGS_LadderNavLinkState.generated.h"

UENUM(BlueprintType)
enum class EIGS_LadderNavLinkState : uint8 {
    In,
    Running,
    Out,
};

