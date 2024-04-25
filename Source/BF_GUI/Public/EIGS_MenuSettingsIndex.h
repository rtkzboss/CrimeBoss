#pragma once
#include "CoreMinimal.h"
#include "EIGS_MenuSettingsIndex.generated.h"

UENUM(BlueprintType)
enum class EIGS_MenuSettingsIndex : uint8 {
    MS_INVALID = 255,
    MS_GameSet = 0,
    MS_ControlsSet,
    MS_GraphicsSet,
    MS_SoundSet,
    MS_VoiceSet,
};

