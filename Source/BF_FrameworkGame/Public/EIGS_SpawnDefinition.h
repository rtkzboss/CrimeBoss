#pragma once
#include "CoreMinimal.h"
#include "EIGS_SpawnDefinition.generated.h"

UENUM(BlueprintType)
enum class EIGS_SpawnDefinition : uint8 {
    Unknown = 255,
    Window = 0,
    Building,
    Vehicle,
};

