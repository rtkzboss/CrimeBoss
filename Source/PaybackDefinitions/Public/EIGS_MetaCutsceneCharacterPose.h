#pragma once
#include "CoreMinimal.h"
#include "EIGS_MetaCutsceneCharacterPose.generated.h"

UENUM(BlueprintType)
enum class EIGS_MetaCutsceneCharacterPose : uint8 {
    None,
    Listening,
    Talking,
    Idle,
    Custom = 255,
};

