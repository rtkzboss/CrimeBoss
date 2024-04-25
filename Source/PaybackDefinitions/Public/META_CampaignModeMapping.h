#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "META_CampaignModeMatchingData.h"
#include "META_CampaignModeMapping.generated.h"

USTRUCT(BlueprintType)
struct FMETA_CampaignModeMapping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CampaignModeTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMETA_CampaignModeMatchingData> MatchingData;
    
    PAYBACKDEFINITIONS_API FMETA_CampaignModeMapping();
};

