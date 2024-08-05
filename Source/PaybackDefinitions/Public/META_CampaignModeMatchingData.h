#pragma once
#include "CoreMinimal.h"
#include "EMETA_ConditionExprOperator.h"
#include "META_CampaignModeCondition.h"
#include "META_CampaignModeMatchingData.generated.h"

class UMETA_PlotlineSelection;

USTRUCT(BlueprintType)
struct FMETA_CampaignModeMatchingData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMETA_PlotlineSelection> CampaignMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMETA_CampaignModeCondition> Conditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMETA_ConditionExprOperator ExpressionOperator;
    
    PAYBACKDEFINITIONS_API FMETA_CampaignModeMatchingData();
};

