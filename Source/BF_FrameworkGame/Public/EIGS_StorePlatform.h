#pragma once
#include "CoreMinimal.h"
#include "EIGS_StorePlatform.generated.h"

UENUM(BlueprintType)
enum class EIGS_StorePlatform : uint8 {
    None,
    EpicGameStore,
    Steam,
    PS5,
    Xbox,
};

