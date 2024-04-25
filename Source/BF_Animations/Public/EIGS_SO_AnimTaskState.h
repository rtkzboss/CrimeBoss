#pragma once
#include "CoreMinimal.h"
#include "EIGS_SO_AnimTaskState.generated.h"

UENUM(BlueprintType)
enum class EIGS_SO_AnimTaskState : uint8 {
    SO_Unknown = 255,
    SO_Running = 0,
    SO_Finished,
};

