#pragma once
#include "CoreMinimal.h"
#include "EIGS_SpeedUnit.generated.h"

UENUM(BlueprintType)
enum class EIGS_SpeedUnit : uint8 {
    CentimeterPerSecond,
    FootPerSecond,
    MeterPerSecond,
    MeterPerMinute,
    KilometerPerSecond,
    KilometerPerMinute,
    KilometerPerHour,
    MilePerHour,
    Knot,
    Mach,
    SpeedOfLight,
    YardPerSecond,
};

