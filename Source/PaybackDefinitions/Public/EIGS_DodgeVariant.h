#pragma once
#include "CoreMinimal.h"
#include "EIGS_DodgeVariant.generated.h"

UENUM(BlueprintType)
enum class EIGS_DodgeVariant : uint8 {
    DODGE_Unknown = 255,
    DODGE_None = 0,
    DODGE_Flinch,
    DODGE_Step_Short_L,
    DODGE_Step_Short_R,
    DODGE_Aim_Short_L,
    DODGE_Aim_Short_R,
    DODGE_Step_Medium_L,
    DODGE_Step_Medium_R,
    DODGE_Step_Long_L,
    DODGE_Step_Long_R,
};

