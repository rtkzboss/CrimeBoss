#pragma once
#include "CoreMinimal.h"
#include "EIGS_ImpactTable.generated.h"

UENUM(BlueprintType)
enum class EIGS_ImpactTable : uint8 {
    None,
    Shot,
    Melee,
    Footstep,
    Destroy,
    Hit,
};

