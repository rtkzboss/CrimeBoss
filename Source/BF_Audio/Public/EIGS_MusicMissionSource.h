#pragma once
#include "CoreMinimal.h"
#include "EIGS_MusicMissionSource.generated.h"

UENUM(BlueprintType)
enum class EIGS_MusicMissionSource : uint8 {
    None,
    Meta,
    Multiplayer,
    All,
};

