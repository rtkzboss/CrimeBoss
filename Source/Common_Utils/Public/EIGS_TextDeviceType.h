#pragma once
#include "CoreMinimal.h"
#include "EIGS_TextDeviceType.generated.h"

UENUM(BlueprintType)
enum class EIGS_TextDeviceType : uint8 {
    Keyboard,
    Gamepad,
    Other,
    Count,
};

