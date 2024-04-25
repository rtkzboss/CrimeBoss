#pragma once
#include "CoreMinimal.h"
#include "EIGS_DeathDefinition.generated.h"

UENUM(BlueprintType)
enum class EIGS_DeathDefinition : uint8 {
    Unknown = 255,
    FirstHeisterDown = 0,
    SecondHeisterDown,
    ThirdHeisterDown,
    LastHeisterDown,
};

