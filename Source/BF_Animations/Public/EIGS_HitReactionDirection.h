#pragma once
#include "CoreMinimal.h"
#include "EIGS_HitReactionDirection.generated.h"

UENUM(BlueprintType)
enum class EIGS_HitReactionDirection : uint8 {
    D_Front,
    D_Left,
    D_Back,
    D_Right,
};

