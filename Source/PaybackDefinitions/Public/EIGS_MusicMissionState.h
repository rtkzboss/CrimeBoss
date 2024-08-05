#pragma once
#include "CoreMinimal.h"
#include "EIGS_MusicMissionState.generated.h"

UENUM(BlueprintType)
enum class EIGS_MusicMissionState : uint8 {
    None,
    NoMusic,
    Stealth1,
    Stealth2,
    Combat,
    Control,
    Assault1,
    Assault2,
    BlackscreenStealth = 10,
    BlackscreenAssault,
    BlackscreenControl,
    Cutscene,
    Disable = 20,
    Default,
    CustomCombat = 30,
};

