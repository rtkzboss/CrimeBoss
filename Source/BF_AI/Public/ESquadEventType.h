#pragma once
#include "CoreMinimal.h"
#include "ESquadEventType.generated.h"

UENUM(BlueprintType)
enum class ESquadEventType : uint8 {
    EnemySeen,
    EnemyLost,
    NextRoomChanged,
    FightStarted,
    FightFinished,
    BreachPointChanged,
    BreachPointBestSquadChanged,
    TargetChanged,
    Unknown = 255,
};

