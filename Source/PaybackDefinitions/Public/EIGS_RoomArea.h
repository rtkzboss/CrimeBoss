#pragma once
#include "CoreMinimal.h"
#include "EIGS_RoomArea.generated.h"

UENUM(BlueprintType)
enum class EIGS_RoomArea : uint8 {
    Unknown,
    Backdrop,
    NonPlayable,
    Playable,
};

