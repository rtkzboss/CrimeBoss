#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EMETA_ConditionExprOperator.h"
#include "META_LoadingTipCondition.generated.h"

class UMETA_BaseCondition;

USTRUCT(BlueprintType)
struct FMETA_LoadingTipCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer Scenarios;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMETA_BaseCondition*> Conditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMETA_ConditionExprOperator Operator;
    
    CRIMEBOSSMETA_API FMETA_LoadingTipCondition();
};

