#pragma once
#include "CoreMinimal.h"
#include "EIGS_LevelTransitionType.generated.h"

UENUM(BlueprintType)
enum class EIGS_LevelTransitionType : uint8 {
    LT_Unknown,
    LT_Loading,
    LT_MainMenu,
    LT_Meta,
    LT_Lobby,
    LT_Video,
    LT_Mission,
    LT_StarterMap,
    LT_MultiplayerMenu,
};

