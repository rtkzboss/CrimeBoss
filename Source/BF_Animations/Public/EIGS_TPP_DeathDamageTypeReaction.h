#pragma once
#include "CoreMinimal.h"
#include "EIGS_TPP_DeathDamageTypeReaction.generated.h"

UENUM(BlueprintType)
enum class EIGS_TPP_DeathDamageTypeReaction : uint8 {
    D_OnlyPhysics,
    D_AnimationAndPhysics,
};

