#pragma once
#include "CoreMinimal.h"
#include "EIGS_WalkieTalkieStatus.generated.h"

UENUM(BlueprintType)
enum class EIGS_WalkieTalkieStatus : uint8 {
    WalkieTalkie_UNKNOWN = 255,
    WalkieTalkie_None = 0,
    WalkieTalkie_Strike,
    WalkieTalkie_Alarm,
};

