#pragma once
#include "CoreMinimal.h"
#include "EMETA_ArmyTier.h"
#include "META_Interval.h"
#include "META_EnemyTierLimitOnCampaignStart.generated.h"

USTRUCT(BlueprintType)
struct FMETA_EnemyTierLimitOnCampaignStart {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMETA_ArmyTier MaxArmyTier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_Interval DayRange;
    
    PAYBACKDEFINITIONS_API FMETA_EnemyTierLimitOnCampaignStart();
};

