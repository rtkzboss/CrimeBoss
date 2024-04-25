#pragma once
#include "CoreMinimal.h"
#include "EIGS_AINotif.generated.h"

UENUM(BlueprintType)
enum class EIGS_AINotif : uint8 {
    AIN_Unknown = 255,
    AIN_SquadEnemySeen = 0,
    AIN_SquadEnemyLost,
    AIN_SquadLastRoomChanged,
    AIN_SquadFightStarted,
    AIN_SquadFightFinished,
    AIN_SearchPointCleared,
};

