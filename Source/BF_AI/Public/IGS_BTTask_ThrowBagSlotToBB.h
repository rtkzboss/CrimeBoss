#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "IGS_BTTask_ThrowBagSlotToBB.generated.h"

UCLASS(Blueprintable)
class BF_AI_API UIGS_BTTask_ThrowBagSlotToBB : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector ThrowRequestKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector ThrowSlotKey;
    
    UIGS_BTTask_ThrowBagSlotToBB();

};

