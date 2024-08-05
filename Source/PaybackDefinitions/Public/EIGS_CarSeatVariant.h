#pragma once
#include "CoreMinimal.h"
#include "EIGS_CarSeatVariant.generated.h"

UENUM(BlueprintType)
enum class EIGS_CarSeatVariant : uint8 {
    CS_Unknown = 255,
    CS_0 = 0,
    CS_1,
    CS_2,
    CS_3,
    CS_4,
    CS_5,
    CS_6,
    CS_7,
    CS_8,
    CS_9,
};

