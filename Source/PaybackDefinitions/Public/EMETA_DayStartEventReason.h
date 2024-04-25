#pragma once
#include "CoreMinimal.h"
#include "EMETA_DayStartEventReason.generated.h"

UENUM(BlueprintType)
enum class EMETA_DayStartEventReason : uint8 {
    NewDay,
    NewCampaign,
    CampaignLoad,
};

