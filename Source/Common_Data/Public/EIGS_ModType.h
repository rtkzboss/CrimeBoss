#pragma once
#include "CoreMinimal.h"
#include "EIGS_ModType.generated.h"

UENUM(BlueprintType)
enum class EIGS_ModType : uint8 {
    Mod_Sight,
    Mod_Visibility,
    Mod_Barrel,
    Mod_Magazine,
    Mod_Grip,
    Mod_Stock,
    Mod_Other,
    Mod_VALID = Mod_Other,
    Mod_SecondMagazine = 253,
    Mod_DynamicSight,
    Mod_INVALID,
};

