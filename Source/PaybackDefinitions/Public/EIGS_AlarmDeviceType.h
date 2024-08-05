#pragma once
#include "CoreMinimal.h"
#include "EIGS_AlarmDeviceType.generated.h"

UENUM(BlueprintType)
enum class EIGS_AlarmDeviceType : uint8 {
    AD_Unknown = 255,
    AD_WalkieTalkie = 0,
    AD_AlarmButton,
    AD_Telephone,
};

