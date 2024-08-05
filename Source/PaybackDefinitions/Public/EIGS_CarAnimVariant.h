#pragma once
#include "CoreMinimal.h"
#include "EIGS_CarAnimVariant.generated.h"

UENUM(BlueprintType)
enum class EIGS_CarAnimVariant : uint8 {
    C_Unknown = 255,
    C_Sitting = 0,
    C_GetIn,
    C_GetOut,
};

