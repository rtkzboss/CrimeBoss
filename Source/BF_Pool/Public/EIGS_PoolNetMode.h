#pragma once
#include "CoreMinimal.h"
#include "EIGS_PoolNetMode.generated.h"

UENUM(BlueprintType)
enum class EIGS_PoolNetMode : uint8 {
    Everywhere,
    OnlyServer,
    OnlyClient,
};

