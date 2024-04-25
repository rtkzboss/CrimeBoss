#pragma once
#include "CoreMinimal.h"
#include "EIGS_StormType.generated.h"

UENUM(BlueprintType)
enum class EIGS_StormType : uint8 {
    ST_Low,
    ST_Medium,
    ST_High,
    ST_VeryHigh,
    ST_Insane,
};

