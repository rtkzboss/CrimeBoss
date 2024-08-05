#pragma once
#include "CoreMinimal.h"
#include "EMETA_MenuState.generated.h"

UENUM(BlueprintType)
enum class EMETA_MenuState : uint8 {
    MS_Default,
    MS_PostMission,
    MS_InCutscene,
    MS_InScreenWithText,
    MS_PostCutscene,
    MS_InMovie,
    MS_LoadingCutscene,
    MS_MapChanging,
    MS_StartUp,
    MS_LevelUpProgression,
    MS_LevelUpBossCards,
    MS_INVALID = 255,
};

