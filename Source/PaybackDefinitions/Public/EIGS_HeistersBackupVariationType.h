#pragma once
#include "CoreMinimal.h"
#include "EIGS_HeistersBackupVariationType.generated.h"

UENUM(BlueprintType)
enum class EIGS_HeistersBackupVariationType : uint8 {
    US_None,
    US_GI_US_Soldiers,
    US_FPSMaxIndex = 128,
    US_STO_GISoldiers,
    US_STO_Arctic,
    US_STO_LatinoGang,
    US_STO_Haitians,
    US_STO_Hielos,
    US_Unknown = 255,
};

