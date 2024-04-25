#pragma once
#include "CoreMinimal.h"
#include "EIGS_DialogueCharacterCooldown.generated.h"

UENUM(BlueprintType)
enum class EIGS_DialogueCharacterCooldown : uint8 {
    Instant,
    Short,
    Medium,
    Long,
};

