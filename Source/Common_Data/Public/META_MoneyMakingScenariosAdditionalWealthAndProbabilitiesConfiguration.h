#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EMETA_RespectLvl.h"
#include "META_RewardsAndProbabilitiesForMoneyMakingScenarios.h"
#include "META_MoneyMakingScenariosAdditionalWealthAndProbabilitiesConfiguration.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FMETA_MoneyMakingScenariosAdditionalWealthAndProbabilitiesConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer MoneyMakingScenarios;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMETA_RespectLvl, FMETA_RewardsAndProbabilitiesForMoneyMakingScenarios> RewardsAndProbabilities;
    
    FMETA_MoneyMakingScenariosAdditionalWealthAndProbabilitiesConfiguration();
};

