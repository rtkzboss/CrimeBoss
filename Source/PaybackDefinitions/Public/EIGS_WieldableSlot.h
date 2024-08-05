#pragma once
#include "CoreMinimal.h"
#include "EIGS_WieldableSlot.generated.h"

UENUM(BlueprintType)
enum class EIGS_WieldableSlot : uint8 {
    S_PrimaryWeapon,
    S_MIN = S_PrimaryWeapon,
    S_SecondaryWeapon,
    S_MeleeWeapon,
    S_Ability1,
    S_NORMAL_INDEX = S_Ability1,
    S_CarryableSlot,
    S_ExtraSpecialSlot,
    S_MAX UMETA(Hidden),
    S_Unarmed = 127,
    S_MountedWieldable,
    S_UNKNOWN = 255,
};

