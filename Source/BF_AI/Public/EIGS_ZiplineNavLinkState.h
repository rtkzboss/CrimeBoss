#pragma once
#include "CoreMinimal.h"
#include "EIGS_ZiplineNavLinkState.generated.h"

UENUM(BlueprintType)
enum class EIGS_ZiplineNavLinkState : uint8 {
    In,
    Running,
    Out,
};

