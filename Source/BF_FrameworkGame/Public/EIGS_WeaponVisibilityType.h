#pragma once
#include "CoreMinimal.h"
#include "EIGS_WeaponVisibilityType.generated.h"

UENUM(BlueprintType)
enum class EIGS_WeaponVisibilityType : uint8 {
    VT_None,
    VT_Laser,
    VT_Flashlight,
    VT_ScopeGlint = 4,
};

