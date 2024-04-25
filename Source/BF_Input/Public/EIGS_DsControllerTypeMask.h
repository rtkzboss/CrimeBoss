#pragma once
#include "CoreMinimal.h"
#include "EIGS_DsControllerTypeMask.generated.h"

UENUM(BlueprintType)
enum class EIGS_DsControllerTypeMask : uint8 {
    PlayerController,
    ExternalInputDevices,
    BothControllerTypes,
};

