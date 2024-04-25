#pragma once
#include "CoreMinimal.h"
#include "EIGS_InteractionType.generated.h"

UENUM(BlueprintType)
enum class EIGS_InteractionType : uint8 {
    Interaction_Press,
    Interaction_Hold,
    Interaction_Invalid,
};

