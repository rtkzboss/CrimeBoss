#pragma once
#include "CoreMinimal.h"
#include "META_TurfRewardsDistribution.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FMETA_TurfRewardsDistribution {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PercantageOfTilesWithOneReward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PercantageOfTilesWithTwoRewards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PercantageOfTilesWithThreeRewards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RewardsAmountForRepeatedCapture;
    
    FMETA_TurfRewardsDistribution();
};

