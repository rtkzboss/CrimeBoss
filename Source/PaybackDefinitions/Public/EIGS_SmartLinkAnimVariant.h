#pragma once
#include "CoreMinimal.h"
#include "EIGS_SmartLinkAnimVariant.generated.h"

UENUM(BlueprintType)
enum class EIGS_SmartLinkAnimVariant : uint8 {
    AIM_Unknown = 255,
    AIM_None = 0,
    AIM_Open_Door,
    AIM_Jump_OverObstacle,
    AIM_Montage,
};

