#pragma once
#include "CoreMinimal.h"
#include "EEasingType.generated.h"

UENUM(BlueprintType)
enum class EEasingType : uint8 {
    Linear,
    CircularIn,
    CircularOut,
    CircularInOut,
    EaseIn,
    EaseOut,
    EaseInOut,
    ExpoIn,
    ExpoOut,
    ExpoInOut,
    SinIn,
    SinOut,
    SinInOut,
};

