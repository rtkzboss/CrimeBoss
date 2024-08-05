#pragma once
#include "CoreMinimal.h"
#include "EIGS_MusicStoryMissionState.generated.h"

UENUM(BlueprintType)
enum class EIGS_MusicStoryMissionState : uint8 {
    None,
    Custom1,
    Custom2,
    Custom3,
    Custom4,
    Silence,
    FadeIn,
    StealthTension,
    BuildUpAction,
    Action,
    FadeOut,
};

