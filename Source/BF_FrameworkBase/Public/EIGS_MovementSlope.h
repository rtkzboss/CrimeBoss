#pragma once
#include "CoreMinimal.h"
#include "EIGS_MovementSlope.generated.h"

UENUM(BlueprintType)
enum class EIGS_MovementSlope : uint8 {
    FSW_Normal,
    FSW_UpStairs,
    FSW_DownStairs,
};

