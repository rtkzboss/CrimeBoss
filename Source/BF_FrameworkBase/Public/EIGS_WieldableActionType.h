#pragma once
#include "CoreMinimal.h"
#include "EIGS_WieldableActionType.generated.h"

UENUM(BlueprintType)
enum class EIGS_WieldableActionType : uint8 {
    PrimaryAction,
    SecondaryAction,
};

