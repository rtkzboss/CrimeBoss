#pragma once
#include "CoreMinimal.h"
#include "EIGS_SlotHighlight.generated.h"

UENUM(BlueprintType)
enum class EIGS_SlotHighlight : uint8 {
    SH_Normal,
    SH_Hovered,
    SH_DropOk,
    SH_DropFail,
    SH_MAX UMETA(Hidden),
    SH_UNKNOWN = 255,
};

