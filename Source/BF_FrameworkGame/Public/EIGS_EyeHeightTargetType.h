#pragma once
#include "CoreMinimal.h"
#include "EIGS_EyeHeightTargetType.generated.h"

UENUM(BlueprintType)
enum class EIGS_EyeHeightTargetType : uint8 {
    EHT_Unknown,
    EHT_Standing,
    EHT_StandingWithGun,
    EHT_Crouching,
    EHT_CrouchingAndMoving,
    EHT_CrouchingAndAiming,
    EHT_DownState,
    EHT_DownStateFromCrouch,
    EHT_VentShaft,
    EHT_Ladder,
    EHT_Buzzsaw,
    EHT_Payload,
    EHT_MountedWeapon,
    EHT_Sliding,
};

