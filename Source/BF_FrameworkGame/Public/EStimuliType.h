#pragma once
#include "CoreMinimal.h"
#include "EStimuliType.generated.h"

UENUM(BlueprintType)
enum class EStimuliType : uint8 {
    EnemySeen,
    EnemyLost,
    Injured,
    FriendInjured,
    FriendDeath,
    SuspicionComponentSeen,
    SuspicionComponentLost,
    SentToInvestigate,
    HeardSound,
    InDanger,
    DamageFromHidden,
    Unknown = 255,
};

