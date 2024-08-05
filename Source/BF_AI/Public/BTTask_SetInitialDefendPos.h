#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_SetInitialDefendPos.generated.h"

class UEnvQuery;

UCLASS(Blueprintable)
class BF_AI_API UBTTask_SetInitialDefendPos : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnvQuery* QueryTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAIDynamicParam> QueryConfig;
    
    UBTTask_SetInitialDefendPos();

};

