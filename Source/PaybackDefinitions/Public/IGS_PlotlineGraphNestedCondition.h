#pragma once
#include "CoreMinimal.h"
#include "EMETA_ConditionExprOperator.h"
#include "IGS_PlotlineGraphNestedCondition.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FIGS_PlotlineGraphNestedCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UObject*> Conditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMETA_ConditionExprOperator InnerConditionOperator;
    
    PAYBACKDEFINITIONS_API FIGS_PlotlineGraphNestedCondition();
};

