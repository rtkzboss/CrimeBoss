#pragma once
#include "CoreMinimal.h"
#include "EIGS_RappelNavLinkState.generated.h"

UENUM(BlueprintType)
enum class EIGS_RappelNavLinkState : uint8 {
    In,
    Running,
    Out,
};

