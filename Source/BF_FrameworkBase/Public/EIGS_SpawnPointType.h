#pragma once
#include "CoreMinimal.h"
#include "EIGS_SpawnPointType.generated.h"

UENUM(BlueprintType)
enum class EIGS_SpawnPointType : uint8 {
    SPT_Unknown,
    SPT_Card,
    SPT_Computer,
    SPT_Key,
    SPT_FuseBox,
    SPT_Note,
};

