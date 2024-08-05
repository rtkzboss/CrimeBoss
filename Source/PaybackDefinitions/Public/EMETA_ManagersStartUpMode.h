#pragma once
#include "CoreMinimal.h"
#include "EMETA_ManagersStartUpMode.generated.h"

UENUM(BlueprintType)
enum class EMETA_ManagersStartUpMode : uint8 {
    LoadFromSaveFile,
    InitFromDebugData,
    InitAsUsual,
};

