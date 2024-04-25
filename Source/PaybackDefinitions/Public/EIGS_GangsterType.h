#pragma once
#include "CoreMinimal.h"
#include "EIGS_GangsterType.generated.h"

UENUM(BlueprintType)
enum class EIGS_GangsterType : uint8 {
    INVALID = 255,
    Nasara = 0,
    KarlKhan,
    DoctorCagnali,
    VanillaIce,
    TravisBaker,
    DollarDragon,
};

