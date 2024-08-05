#pragma once
#include "CoreMinimal.h"
#include "EIGS_VIPSpawnPointDataSource.generated.h"

UENUM(BlueprintType)
enum class EIGS_VIPSpawnPointDataSource : uint8 {
    VD_Automatic,
    VD_FPS,
    VD_Story,
    VD_Old,
};

