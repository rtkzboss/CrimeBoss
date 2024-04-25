#pragma once
#include "CoreMinimal.h"
#include "EMETA_BossLevelCategory.generated.h"

UENUM(BlueprintType)
enum class EMETA_BossLevelCategory : uint8 {
    Boss,
    Progression,
    CampaignStart,
    Captain,
    Army,
};

