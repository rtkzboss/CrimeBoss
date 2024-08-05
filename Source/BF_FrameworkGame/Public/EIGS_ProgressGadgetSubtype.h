#pragma once
#include "CoreMinimal.h"
#include "EIGS_ProgressGadgetSubtype.generated.h"

UENUM(BlueprintType)
enum class EIGS_ProgressGadgetSubtype : uint8 {
    Type_Default,
    Type_Buzzsaw,
    Type_Drill,
    Type_Computer,
    Type_DefendPoint,
};

