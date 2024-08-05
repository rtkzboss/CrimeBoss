#pragma once
#include "CoreMinimal.h"
#include "EIGS_FlyBySide.generated.h"

UENUM(BlueprintType)
enum class EIGS_FlyBySide : uint8 {
    EST_Left,
    EST_Right,
    EST_None = 255,
};

