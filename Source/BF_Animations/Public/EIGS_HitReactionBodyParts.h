#pragma once
#include "CoreMinimal.h"
#include "EIGS_HitReactionBodyParts.generated.h"

UENUM(BlueprintType)
enum class EIGS_HitReactionBodyParts : uint8 {
    D_UpperBody,
    D_LowerBody,
    D_Head,
    D_None,
};

