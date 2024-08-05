#pragma once
#include "CoreMinimal.h"
#include "EIGS_CutsceneState.generated.h"

UENUM(BlueprintType)
enum class EIGS_CutsceneState : uint8 {
    Unloaded,
    Loaded,
    Loading,
    Unloading,
    Started,
};

