#pragma once
#include "CoreMinimal.h"
#include "FIGS_ThrowGrenadeStates.generated.h"

UENUM(BlueprintType)
enum class FIGS_ThrowGrenadeStates : uint8 {
    TH_ThrowStart,
    TH_ThrowEnd,
    TH_ThrowCancel,
};

