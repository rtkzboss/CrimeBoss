#pragma once
#include "CoreMinimal.h"
#include "EIGS_SessionPropertyKey.generated.h"

UENUM(BlueprintType)
enum class EIGS_SessionPropertyKey : uint8 {
    State,
    MissionName,
    PlayerCount,
    IsVisible,
    MissionType,
    MissionNameStringTable,
    Revision,
    MissionID,
    Region,
    Characters,
    PS5PlayerSessionID,
    UserDifficulty,
    LobbyType,
    Ping,
};

