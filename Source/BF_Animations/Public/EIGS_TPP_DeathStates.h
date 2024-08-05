#pragma once
#include "CoreMinimal.h"
#include "EIGS_TPP_DeathStates.generated.h"

UENUM(BlueprintType)
enum class EIGS_TPP_DeathStates : uint8 {
    D_Stand,
    D_HeadShot,
    D_CrouchHeadShot,
    D_Run,
    D_Heavy,
    D_CrouchHeavy,
    D_Crouch,
};

