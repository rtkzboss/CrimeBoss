#pragma once
#include "CoreMinimal.h"
#include "EIGS_MuzzleLightState.generated.h"

UENUM(BlueprintType)
enum class EIGS_MuzzleLightState : uint8 {
    MZLS_Off,
    MZLS_FadingIn,
    MZLS_Lit,
    MZLS_FadingOut,
};

