#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "IGS_BTTask_SquadSwatBase.h"
#include "IGS_BTTask_SquadMoveThroughBreachPoint.generated.h"

class UEnvQuery;

UCLASS(Blueprintable)
class BF_AI_API UIGS_BTTask_SquadMoveThroughBreachPoint : public UIGS_BTTask_SquadSwatBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector StackPosBlackboardKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnvQuery* StackPosQuery;
    
public:
    UIGS_BTTask_SquadMoveThroughBreachPoint();

};

