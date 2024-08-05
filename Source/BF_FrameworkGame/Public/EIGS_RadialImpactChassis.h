#pragma once
#include "CoreMinimal.h"
#include "EIGS_RadialImpactChassis.generated.h"

UENUM(BlueprintType)
enum class EIGS_RadialImpactChassis : uint8 {
    Hit_None,
    Hit_Front,
    Hit_FrontLeft,
    Hit_Left,
    Hit_RearLeft,
    Hit_Rear,
    Hit_RearRight,
    Hit_Right,
    Hit_FrontRight,
};

