#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTDecorator_CanRollToCover.generated.h"

UCLASS(Blueprintable)
class BF_AI_API UBTDecorator_CanRollToCover : public UBTDecorator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector DodgeDistanceKey;
    
public:
    UBTDecorator_CanRollToCover();

};

