#pragma once
#include "CoreMinimal.h"
#include "META_BossEliminationRewardsDistribution.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FMETA_BossEliminationRewardsDistribution {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PercantageOfEliminationWithTwoRewards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PercantageOfEliminationWithThreeRewards;
    
    FMETA_BossEliminationRewardsDistribution();
};

