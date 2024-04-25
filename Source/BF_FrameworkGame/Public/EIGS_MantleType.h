#pragma once
#include "CoreMinimal.h"
#include "EIGS_MantleType.generated.h"

UENUM(BlueprintType)
enum class EIGS_MantleType : uint8 {
    MantleType_None,
    MantleType_Stand,
    MantleType_Crouch,
};

