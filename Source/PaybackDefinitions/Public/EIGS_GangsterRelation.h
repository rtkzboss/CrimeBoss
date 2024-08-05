#pragma once
#include "CoreMinimal.h"
#include "EIGS_GangsterRelation.generated.h"

UENUM(BlueprintType)
enum class EIGS_GangsterRelation : uint8 {
    INVALID = 255,
    Neutral = 0,
    Hate,
    Superhate,
};

