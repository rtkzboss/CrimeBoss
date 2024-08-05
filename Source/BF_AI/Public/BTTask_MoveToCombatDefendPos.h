#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "BTTask_MoveToWithRepath.h"
#include "BTTask_MoveToCombatDefendPos.generated.h"

class UEnvQuery;

UCLASS(Blueprintable)
class BF_AI_API UBTTask_MoveToCombatDefendPos : public UBTTask_MoveToWithRepath {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnvQuery* QueryTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAIDynamicParam> QueryConfig;
    
    UBTTask_MoveToCombatDefendPos();

};

