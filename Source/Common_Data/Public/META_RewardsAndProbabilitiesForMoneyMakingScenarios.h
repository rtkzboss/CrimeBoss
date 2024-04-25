#pragma once
#include "CoreMinimal.h"
#include "META_RewardsAndProbabilitiesForMoneyMakingScenarios.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FMETA_RewardsAndProbabilitiesForMoneyMakingScenarios {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RelativeMonetaryValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ProbabilityWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LimitOnMap;
    
    FMETA_RewardsAndProbabilitiesForMoneyMakingScenarios();
};

