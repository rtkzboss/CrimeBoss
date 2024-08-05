#pragma once
#include "CoreMinimal.h"
#include "EScreenZOrder.generated.h"

UENUM(BlueprintType)
enum class EScreenZOrder : uint8 {
    Normal,
    Overlay = 32,
    Modal = 64,
    Menu = 142,
    Important = 169,
    Critical = 200,
    None = 255,
};

