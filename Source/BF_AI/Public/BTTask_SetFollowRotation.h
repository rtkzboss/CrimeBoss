#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTTask_SetFollowRotation.generated.h"

UCLASS(Blueprintable)
class BF_AI_API UBTTask_SetFollowRotation : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector LookPosKey;
    
    UBTTask_SetFollowRotation();

};

