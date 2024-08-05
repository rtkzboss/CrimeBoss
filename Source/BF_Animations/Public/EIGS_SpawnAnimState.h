#pragma once
#include "CoreMinimal.h"
#include "EIGS_SpawnAnimState.generated.h"

UENUM(BlueprintType)
enum class EIGS_SpawnAnimState : uint8 {
    EBF_AliveAfterSpawn,
    EBF_CanBeDeathDuringSpawn,
};

