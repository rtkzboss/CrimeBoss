#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTTask_RollToCover.generated.h"

UCLASS(Blueprintable)
class BF_AI_API UBTTask_RollToCover : public UBTTaskNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector DodgeDistanceKey;
    
public:
    UBTTask_RollToCover();

};

