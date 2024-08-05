#pragma once
#include "CoreMinimal.h"
#include "EIGS_WoundType.generated.h"

UENUM(BlueprintType)
enum class EIGS_WoundType : uint8 {
    EWT_None,
    EWT_Gunshot,
    EWT_Slash,
    EWT_BluntSmall,
    EWT_BluntLarge,
    EWT_Stab,
};

