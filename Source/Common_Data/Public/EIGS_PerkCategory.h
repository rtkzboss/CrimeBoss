#pragma once
#include "CoreMinimal.h"
#include "EIGS_PerkCategory.generated.h"

UENUM(BlueprintType)
enum class EIGS_PerkCategory : uint8 {
    PC_Negative,
    PC_Positive,
    PC_Powerful,
};

