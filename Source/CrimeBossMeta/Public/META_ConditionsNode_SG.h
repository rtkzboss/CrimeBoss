#pragma once
#include "CoreMinimal.h"
#include "EMETA_ConditionExprOperator.h"
#include "META_BaseNode_SG.h"
#include "META_ConditionsNode_SG.generated.h"

class UMETA_BaseCondition;

UCLASS(Blueprintable)
class CRIMEBOSSMETA_API UMETA_ConditionsNode_SG : public UMETA_BaseNode_SG {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMETA_BaseCondition*> Conditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMETA_ConditionExprOperator ConditionOperator;
    
    UMETA_ConditionsNode_SG();

};

