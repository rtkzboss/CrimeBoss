#pragma once
#include "CoreMinimal.h"
#include "EIGS_LocomotionType.generated.h"

UENUM(BlueprintType)
enum class EIGS_LocomotionType : uint8 {
    BT_None,
    BT_Normal,
    BT_Injured,
};

