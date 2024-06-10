#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "META_GlobalStatisticsData.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FMETA_GlobalStatisticsData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, float> Singleplayer;
    
    FMETA_GlobalStatisticsData();
};

