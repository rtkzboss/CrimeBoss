#pragma once
#include "CoreMinimal.h"
#include "EIGS_Ethnicity.generated.h"

UENUM(BlueprintType)
enum class EIGS_Ethnicity : uint8 {
    White,
    Black,
    Asian,
    Latinx,
    Unknown = 255,
};

