#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTDecorator_MoveToIdlePointSequence.generated.h"

UCLASS(Blueprintable)
class BF_AI_API UBTDecorator_MoveToIdlePointSequence : public UBTDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector PatrolPointKey;
    
public:
    UBTDecorator_MoveToIdlePointSequence();

};

