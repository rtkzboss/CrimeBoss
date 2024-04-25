#pragma once
#include "CoreMinimal.h"
#include "EMETA_BossGangRelationship.generated.h"

UENUM(BlueprintType)
enum class EMETA_BossGangRelationship : uint8 {
    Neutral,
    Friendly,
    Unfriendly,
    Hostile,
};

