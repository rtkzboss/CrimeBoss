#pragma once
#include "CoreMinimal.h"
#include "EMETA_ForceJobFillCharacter.generated.h"

UENUM(BlueprintType)
enum class EMETA_ForceJobFillCharacter : uint8 {
    RandomGenericCrew,
    Manual,
    RevengePool,
};

