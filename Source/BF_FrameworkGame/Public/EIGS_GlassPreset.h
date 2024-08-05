#pragma once
#include "CoreMinimal.h"
#include "EIGS_GlassPreset.generated.h"

UENUM(BlueprintType)
enum class EIGS_GlassPreset : uint8 {
    Panel_None,
    Panel_400X105,
    Panel_400X135,
    Panel_200X135,
    Panel_200X105,
    Panel_060X190,
    Panel_060X160,
    Panel_025X190,
    Panel_025X160,
    Panel_100X100,
    Panel_100X150,
    Panel_200X200,
    Panel_140X015,
    Panel_045X060,
    Panel_050X100,
    Panel_250X150,
    Panel_100X250,
};

