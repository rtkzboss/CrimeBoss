#pragma once
#include "CoreMinimal.h"
#include "EIGS_VoiceExpressionType.generated.h"

UENUM(BlueprintType)
enum class EIGS_VoiceExpressionType : uint8 {
    None,
    Hit,
    NearDeath,
    Die,
    InstantDeath,
};

