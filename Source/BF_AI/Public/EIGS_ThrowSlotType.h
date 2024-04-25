#pragma once
#include "CoreMinimal.h"
#include "EIGS_ThrowSlotType.generated.h"

UENUM(BlueprintType)
enum class EIGS_ThrowSlotType : uint8 {
    None,
    Socket,
    SceneComponent,
};

